#include<iostream>
#include<string>
using namespace std;

template<class DT>
class Node
{
public:
	DT data;
	Node<DT>* next;
};


template<class DT>
class Queue {
public:

	Node<DT>* first;
	Node<DT>* last;
	DT island_num;

	Queue() :island_num(0) {
		first = NULL;
		last = NULL;
	}
	~Queue() {

	}
	bool isEmpty()const {
		if (island_num) {
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
		island_num++;
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
			island_num--;
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

};

template<class DT>
class AdjList {

public:

	Node<DT>* head;
	Node<DT>* cursor;

	AdjList(int ignored = 0) {
		//data = ignored;
		head = NULL;
		cursor = NULL;
	}
	~AdjList() {
	}

	void insert(const DT& newDataItem) {

		Node<DT>* temp = new Node<DT>();

		if (head == NULL) {
			temp->data = newDataItem;
			head = temp;
			cursor = head;
			temp->next = NULL;
		}

		else {
			while (cursor->next != NULL) {
				cursor = cursor->next;
			}
			temp->data = newDataItem;
			cursor->next = temp;
			cursor = temp;
			temp->next = NULL;
		}
	}

	void insertAt(const DT& newDataItem, int index) {
		cursor = head;
		int count = 1;
		while (cursor && index > count) {
			cursor = cursor->next;
			count++;
		}

		if (index < 0 || (index > 0 && cursor == NULL)) {
			cout << "Invalid Index. " << endl;
		}

		Node<DT>* temp = new Node<DT>();
		temp->data = newDataItem;
		if (index == 0) {
			temp->next = head;
			head = temp;
			cursor = head;
		}
		else {
			temp->next = cursor->next;
			cursor->next = temp;
			cursor = temp;
		}
	}

	void Remove() {

		Node<DT>* prev = NULL;
		Node<DT>* temp = head;

		while (cursor != temp) {
			prev = temp;
			temp = temp->next;
		}

		if (temp) {
			if (prev) {
				if (temp->next == NULL) {
					cursor = head;
				}
				else {
					cursor = temp->next;
				}
				prev->next = temp->next;
				//cursor = temp->next;
				delete temp;
			}
			else {
				head = temp->next;
				cursor = head;
				delete temp;
			}
		}

	}

	void RemoveAt(int index) {

		Node<DT>* prev = NULL;
		Node<DT>* temp = head;

		int count = 0;

		while (temp && index > count) {
			prev = temp;
			temp = temp->next;
			count++;
		}
		if (index < 0 || (index > 0 && temp == NULL)) {
			cout << "Invalid Index. " << endl;
		}

		if (temp) {

			if (prev) {
				prev->next = temp->next;
				cursor = temp->next;
				delete temp;
			}
			else {
				head = temp->next;
				cursor = head;
				delete temp;
			}
		}

	}

	void replace(const DT& newDataItem) {
		if (cursor) {
			cursor->data = newDataItem;
		}
		else {
			cout << "Empty AdjList" << endl;
		}
	}

	void replaceAt(const DT& newDataItem, int index) {
		Node<DT>* temp = head;

		int count = 0;

		while (temp && index > count) {

			temp = temp->next;
			count++;
		}
		if (index < 0 || (index > 0 && temp == NULL)) {
			cout << "Invalid Index. " << endl;
		}

		cursor = temp;
		if (cursor) {
			cursor->data = newDataItem;
		}
		else {
			cout << "Empty AdjList" << endl;
		}
	}

	void Clear() {

		Node<DT>* temp = NULL;
		Node<DT>* clear = head;

		while (clear) {
			temp = clear->next;
			delete clear;
			clear = temp;
		}
		head = NULL;
		cursor = NULL;
	}

	bool isEmpty() {
		if (head) {
			return false;
		}
		return true;
	}

	void Display() {
		Node<DT>* temp = head;
		while (temp != NULL) {
			cout << temp->data << " ";
			temp = temp->next;
		}
		cout << endl;
	}

};
template<class DT>
class Graph {

public:

	AdjList<DT>* arr;
	int Vertices;
	bool* check;
	Graph(int maxVertices) {

		Vertices = maxVertices;
		arr = new AdjList<DT>[maxVertices];
		check = new bool[maxVertices];
		for (int i = 0; i < maxVertices; i++) {
			arr[i].head = NULL;
			arr[i].cursor = NULL;
			check[i] = false;
		}

	}

	~Graph() {
		for (int i = 0; i < Vertices; i++) {
			delete[] arr[i].head;
			delete[] arr[i].cursor;
		}
		delete[] arr;
	}

	Node<DT>* createVertex(Node<DT>* newVertex) {

		Node<DT>* temp = new Node<DT>();
		temp->data = newVertex->data;
		temp->next = NULL;
		return temp;

	}

	void insertEdge(int src, int dest) {

		if (src > Vertices || dest > Vertices) {
			cout << "Invalid Index" << endl;
			return;
		}

		Node<DT>* create = new Node<DT>();
		
		create->data = dest;
		create = createVertex(create);
		arr[src].insert(create->data);

		create->data = src;
		create = createVertex(create);
		arr[dest].insert(create->data);

	}

	void showGraphStructure() {

		for (int i = 0; i < Vertices; i++) {
			Node<DT>* temp = arr[i].head;
			cout << "Adj AdjList of vertex " << i << " : ";
			while (temp) {
				cout << temp->data << " ";
				temp = temp->next;
			}
			cout << endl;
		}
	}

	void BFS(int startNode) {

		for (int i = 0; i < Vertices; i++) {
			check[i] = false;
		}
		check[startNode] = true;

		Queue<int> Q;
		Q.enqueue(startNode);

		while (!Q.isEmpty()) {

			int curr = Q.dequeue();
			cout << "Visited: " << curr << endl;

			Node<DT>* temp = arr[curr].head;
			while (temp) {
				
				if (!check[temp->data]) {
					Q.enqueue(temp->data);
					check[temp->data] = true;
				}
				temp = temp->next;

			}
		}

	}

	void DFS(int startNode,bool test = false) {
		if (test == false) {
			for (int i = 0; i < Vertices; i++) {
				check[i] = false;
			}
		}
		Node<DT>* temp = arr[startNode].head;
		check[startNode] = true;
		cout << "Visited: " << startNode << endl;

		while (temp != NULL) {
			if (!check[temp->data]) {
				DFS(temp->data, true);
			}
			temp = temp->next;
		}
	}

	//Task 02

	bool is_clique(AdjList<DT>* list, int size) {
		int check = 0;
		Node<DT>* temp1 = new Node<DT>();
		Node<DT>* temp = new Node<DT>();
		for (int i = 0; i < size; i++) {
			temp = arr[i].head;
			for (int j = i + 1; j < size; j++) {
				check = 0;
				temp1 = arr[j].head;
				while (temp1) {
					if (temp->data == temp1->data) {
						check++;
					}
					temp1 = temp1->next;
				}
				temp = temp->next;
				if (size > check) {
					return false;
				}
				else {
					check = 0;
				}
			}
		}
		delete temp;
		delete temp1;
		return true;
	}
};

//Task 03


const int ROW = 5, COL = 5;
int NeighbourRow[] = { -1, -1, -1, 0, 0, 1, 1, 1 };
int NeighbourCol[] = { -1, 0, 1, -1, 1, -1, 0, 1 };


void DFS_Island(int mat[][COL], int row, int col, bool check[][COL]) {

	check[row][col] = true;

	for (int i = 0; i < 8; i++) {
		int r = row + NeighbourRow[i], c = col + NeighbourCol[i];

		if((r >= 0) && (c >= 0) && (r < ROW) && (c < COL) && mat[r][c] && !check[r][c]) {
			DFS_Island(mat, row + NeighbourRow[i], col + NeighbourCol[i], check);
		}
	}
}

int Total_Islands(int mat[][COL]) {
	int island_num = 0;
	bool check[ROW][COL];

	for (int i = 0; i < ROW; i++) {
		for (int j = 0; j < COL; j++) {
			check[i][j] = 0;
		}
	}

	for (int i = 0; i < ROW; i++) {
		for (int j = 0; j < COL; j++) {

			if (mat[i][j] && !check[i][j]) {
				DFS_Island(mat, i, j, check);
				island_num++;
			}
		}
	}

	return island_num;
}