#include<iostream>
#include<string>
using namespace std;

template <class DT>
struct Node {
	DT data;
	Node* next;

};

template<class DT>
class Queue {
public:

	Node<DT>* first;
	Node<DT>* last;
	DT count;

	Queue():count(0) {
		first = NULL;
		last = NULL;
	}
	~Queue() {

	}
	bool isEmpty()const {
		if (count) {
			return false;
		}
		return true;
	}

	void enqueue(const DT& newDataItem) {

		Node<DT>* temp = new Node<DT>();
		temp->data = newDataItem;
		temp->next = NULL;

		if (isEmpty()) {	
			first = temp;
			last = temp;
		}
		else {
			last->next = temp;
			last = temp;
		}
		count++;
	}

	DT dequeue() {

		Node<DT>* temp = new Node<DT>(); 
		DT num;
		if (isEmpty()) {
			cout << "The queue is empty.\n";
		}
		else { 
			num = first->data;
			temp = first->next;
			delete first; 
			first = temp;
			count--;
		}
		return num;
	}

	DT LastData() {
		return last->data;
	}

	void Clear() {

		while (!isEmpty()) {
			dequeue();
		}
	}

	void Display() {
		Node<DT>* temp = new Node<DT>();
		temp = first;
		while (temp != last) {
			cout << temp->data << " ";
			temp = temp->next;
		}
		cout << temp->data;
		cout << endl;
	}

	void operator +(const DT& data) {
		enqueue(data);
	}

	DT operator -() {
		return dequeue();
	}

	int getLength() {
		return count;
	}
};

char Concatination(string& str, int Qnum) {

	int length = 1, strlen = 0;

	for (int i = 0; str[i] != '\0'; i++) {
		if (str[i] == ' ') {
			length++;
		}
		else {
			strlen++;
		}
	}

	int j = 0;
	Queue<char>* Q = new Queue<char>[length];
	for (int i = 0; str[i] != '\0'; i++) {
		if (str[i] != ' ') {
			Q[j].enqueue(str[i]);
		}
		else {
			j++;
		}
	}

	// Concatination
	int k = 0;
	Node<char>* temp = new Node<char>();
	temp = Q[0].first;

	for (int i = 0; i < strlen; i++) {
		if (temp->next == NULL && k < j) {
			Q[k].last->next = Q[k + 1].first;
			temp->next = Q[k + 1].first;
			k++;
		}
		temp = temp->next;
	}

	// Display
/*
		temp = Q[0].first;
		while (temp != NULL) {
			cout << temp->data;
			temp = temp->next;
		}
		cout << endl;
*/
	return Q[Qnum].first->data;
}

