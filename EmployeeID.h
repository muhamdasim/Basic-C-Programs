#include<iostream>
using namespace std;

class EmployeeID {
	int Batch;
	int RollNo;

public:
	EmployeeID() {
		Batch = 0;
		RollNo = 0;
	}

	EmployeeID(int b, int r) {
		Batch = b;
		RollNo = r;
	}

	void setBatch(int b) {
		Batch = b;
	}
	void setRollNo(int r) {
		RollNo = r;
	}

	int getBatch()const {
		return Batch;
	}
	int getRollNo()const {
		return RollNo;
	}

	void Display() {
		cout << getBatch() <<"i-";
		cout << getRollNo() << endl;
	}

	~EmployeeID() {

	}

};
