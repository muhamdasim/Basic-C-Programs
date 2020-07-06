#include "Employee.h"
#include<iostream>
using namespace std;

struct Node {
public:
	Employee data;
	Node* next;
	Node* prev;
	//	Node() :data() {
	//		next = NULL;
	//	}
};

class DoubleList {

	Node* head;
	Node* tail;
	int s;
public:
	DoubleList(int ignored = 0) {
		//data = ignored;
		head = NULL;
		tail = NULL;
		s = 0;
	}
	~DoubleList() {
	}

	Node* getHead()const {
		return head;
	}

	void insert(const Employee& newDataItem) {

		Node* cursor = head;
		Node* temp = new Node();

		temp->data.setEmpID(newDataItem.getEmpID());
		temp->data.setDate(newDataItem.getDate());
		temp->data.setNIC(newDataItem.getNIC());
		temp->data.setSalary(newDataItem.getSalary());
		temp->data.setBonus(newDataItem.getBonus());

		temp->next = NULL;
		s++;

		if (head == NULL) {
			head = temp;
			cursor = head;
			tail = head;
			temp->prev = NULL;
		}
		else {
			while (cursor->next != NULL) {
				cursor = cursor->next;
			}
			cursor->next = temp;
			temp->prev = cursor;
			cursor = temp;
			tail = temp;
			
		}
	}

	void Remove(EmployeeID id) {

		Node* current = NULL;
		Node* temp = head;

		while (temp != NULL) {

			if ((temp->data.getEmpID().getBatch() == id.getBatch())) {
				if (temp->data.getEmpID().getRollNo() == id.getRollNo()) {
					break;
				}
			}

			current = temp;
			temp = temp->next;
		}
		if (temp == NULL) {
			cout << "Roll Number not Found. " << endl;
		}
		
		if (temp) {
			if (current) {
				if (temp->next) {
					temp->next->prev = current;
					current->next = temp->next;
					delete temp;
					s--;
				}
				else {
					delete temp;
					current->next = NULL;
					s--;
				}
			}
			else {
				head = temp->next;
				temp->next->prev = NULL;
				delete temp;
				s--;
			}
		}
	}

	void UpdateSalary(const int& salary, EmployeeID id) {
		Node* temp = head;

		while (temp != NULL) {

			if ((temp->data.getEmpID().getBatch() == id.getBatch())) {
				if (temp->data.getEmpID().getRollNo() == id.getRollNo()) {
					break;
				}
			}
			temp = temp->next;
		}
		if (temp == NULL) {
			cout << "Roll Number not Found. " << endl;
		}
		else {
			temp->data.setSalary(salary);
		}
	}

	void UpdateBonus(const int& Bonus, EmployeeID id) {
		Node* temp = head;

		while (temp != NULL) {

			if ((temp->data.getEmpID().getBatch() == id.getBatch())) {
				if (temp->data.getEmpID().getRollNo() == id.getRollNo()) {
					break;
				}
			}
			temp = temp->next;
		}
		if (temp == NULL) {
			cout << "Roll Number not Found. " << endl;
		}
		else {
			temp->data.setBonus(Bonus);
		}
	}

	void Clear() {

		Node* temp = NULL;
		Node* clear = head;

		while (clear) {
			temp = clear->next;
			delete clear;
			clear = temp;
		}
		head = NULL;
	}

	bool isEmpty() {
		if (head) {
			return false;
		}
		return true;
	}

	void Sort() {
		if (isEmpty()) {
			cout << "Empty List" << endl;
		}


		Node* sort;
		Node* check;
		Node* prev;
		int index = 0;

		while (index < s) {
			check = prev = head;
			int i = index;
			while (i < s) {
				if (check == head) {
					if (check->data.getSalary() > check->next->data.getSalary()) {
						head = check->next;
						sort = head->next;
						head->next = prev;
						prev->next = sort;
						check = prev = head;
					}
					check = check->next;
				}
				else {
					if (check->next) {
						if (check->data.getSalary() > check->next->data.getSalary()) {
							sort = check->next;
							check->next = check->next->next;
							sort->next = check;
							prev->next = sort;
							prev = sort;
						}
					}
				}
				i++;
			}
			index++;
		}

	}

	void Display() {
		Node* temp = head;
		EmployeeID ID;
		Date D;
		while (temp != NULL) {

			cout << "EmpID: ";
			ID = temp->data.getEmpID();
			ID.Display();

			cout << "Joining Date: ";
			D = temp->data.getDate();
			D.Display();

			cout << "NIC: " << temp->data.getNIC() << endl;
			cout << "Salary: " << temp->data.getSalary() << endl;
			cout << "Bonus: " << temp->data.getBonus() << endl;

			cout << endl;
			temp = temp->next;
		}
		cout << endl;
	}

};