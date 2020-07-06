#include "Employee.h"
#include<iostream>
using namespace std;

struct Node {
public:
	Employee data;
	Node* next;

	//	Node() :data() {
	//		next = NULL;
	//	}
};

class CircularList {

	Node* head;
	int s;
public:
	CircularList(int ignored = 0) {
		//data = ignored;
		head = NULL;
		s = 0;

	}
	~CircularList() {
	}

	Node* getHead()const {
		return head;
	}

	void insert(const Employee& newDataItem) {

		Node* cursor = head;
		Node* temp = new Node();

		//temp->data = newDataItem;
		temp->data.setEmpID(newDataItem.getEmpID());
		temp->data.setDate(newDataItem.getDate());
		temp->data.setNIC(newDataItem.getNIC());
		temp->data.setSalary(newDataItem.getSalary());
		temp->data.setBonus(newDataItem.getBonus());

		if (head == NULL) {
			head = temp;
			cursor = head;
			temp->next = head;
			s++;
		}
		else {
			while (cursor->next != head) {
				cursor = cursor->next;
			}
			cursor->next = temp;
			cursor = temp;
			temp->next = head;
			s++;
		}
	}

	void Remove(EmployeeID id) {

		Node* prev = NULL;
		Node* temp = head;

		while (temp->next != head) {

			if ((temp->data.getEmpID().getBatch() == id.getBatch())) {
				if (temp->data.getEmpID().getRollNo() == id.getRollNo()) {
					break;
				}
			}

			prev = temp;
			temp = temp->next;
		}

		if (temp == NULL) {
			cout << "Roll Number not Found. " << endl;
		}

		if (temp) {
			if (prev) {
				prev->next = temp->next;
				temp->next = head;
				delete temp;
				s--;
			}
			else {
				head = temp->next;
				prev = head;
				delete temp;
				s--;
			}
		}
	}

	void UpdateSalary(const int& salary, EmployeeID id) {
		Node* temp = head;

		while (temp->next != head) {

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

		while (temp->next != head) {

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

		Node* temp = head;
		head = NULL;
		delete temp;
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
			sort = check = prev = head;
			int index = 0;

			for (int i = 0; i < s; i++) {
				check = check->next;
			}
			check = head;
			check->next = NULL;
			
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

			check = head;
			for (int i = 0; i < s; i++) {
				check = check->next;
			}
			check->next = head;
		}
	
	void Display() {
		Node* temp = head;
		EmployeeID ID;
		Date D;
		while (s > 0) {

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
				s--;
			}
	}

};