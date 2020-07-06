#include<iostream>
#include<fstream>
#include<string>

using namespace std;

template<class DT>

struct Node {

public:
	DT data;
	Node* prev;

};

template<class DT>
class Stack {
public:
	Node<DT>* top;

	Stack() {
		top = NULL;
	}

	~Stack() {

	}

	bool IsEmpty() {
		if (top) {
			return false;
		}
		return true;
	}

	void Clear() {
		while (!IsEmpty()) {
			Pop();
		}
	}


	void Push(DT DataItem) {
		Node<DT>* temp = new Node<DT>();

		temp->data = DataItem;
		temp->prev = top;

		top = temp;
	}

	DT Pop() {

		if (IsEmpty()) {

			cout << "Stack is Empty." << endl;
			return NULL;
		}

		Node<DT>* temp = new Node<DT>();
		DT Value;

		temp = top;
		Value = top->data;

		top = top->prev;

		delete temp;

		return Value;
	}

	DT TOP() {
		return top->data;
	}

	void Display() {
		Node<DT>* temp = new Node<DT>();
		temp = top;
		while (temp != NULL) {
			cout << temp->data << " ";

			temp = temp->prev;
		}
		cout << endl;
	}

};

//------ Q2

bool Validate(string FileName) {

	fstream f1(FileName, ios::in);
	string s;
	Stack<char> S;

	while (!f1.eof()) {
			getline(f1, s);
			for (int i = 0; s[i] != '\0'; i++) {

				if (s[i] == '{') {
					S.Push(s[i]);
				}
				if (s[i] == '}') {
					if (S.IsEmpty()) {
						return false;
					}
					S.Pop();
				}
			}
		
	}

	f1.close();
	if (S.IsEmpty()) {
		return true;
	}
	else {
		return false;
	}

}

//..... BONUS 

void Bonus() {
	
	Stack<int> S1,S2,S3;
	
	S1.Push(5);
	S1.Push(8);
	S1.Push(1);
	S1.Push(7);
	S1.Push(4);
	S1.Push(2);
	S1.Push(9);
	S1.Push(6);
	S1.Push(3);

	cout << "Initial: " << endl;
	cout << "Top: " << S1.TOP() << endl;
	S1.Display();

	S2.Push(S1.Pop());
	while(!S1.IsEmpty()) {
	
		if (S1.TOP() < S2.TOP()) {
			S2.Push(S1.Pop());
		}
	
		if (S1.TOP() > S2.TOP()) {
		
			S3.Push(S2.Pop());
			while (!S2.IsEmpty()) {

				if (S2.TOP() < S1.TOP()) {
					S3.Push(S2.Pop());
				}
				else {
					break;
				}
			}

			S2.Push(S1.Pop());
			while (!S3.IsEmpty()) {
				S2.Push(S3.Pop());
			}
		}
	}

	while (!S2.IsEmpty()) {
		S3.Push(S2.Pop());
	}

	while (!S3.IsEmpty()) {
		S1.Push(S3.Pop());
	}

	cout << endl << "Final: " << endl;
//	cout << endl << "First Stack: " << endl;
	cout << "Top: " << S1.TOP() << endl;
	S1.Display();

//	cout << endl << "Second Stack: " << endl;
//	cout << "Top: " << S2.TOP() << endl;
//	S2.Display();


//	cout << endl << "Third Stack: " << endl;
//	cout << "Top: " << S3.TOP() << endl;
//	S3.Display();

}
