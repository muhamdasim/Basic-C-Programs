#include"Date.h"
#include"EmployeeID.h"
#include<string>
using namespace std;

class Employee {
	EmployeeID EmpID;
	Date JoinDate;
	string NIC;
	int Salary;
	int Bonus;
public:
	Employee() :EmpID(), JoinDate() {
		NIC = '\0';
		Salary = 0;
		Bonus = 0;
	}
	Employee(int b, int r, int d, int m, int y, string N, int s, int bon) :EmpID(b, r), JoinDate(d, m, y) {
		NIC = N;
		Salary = s;
		Bonus = bon;
	}
	
	void setEmpID(EmployeeID ID) {
		EmpID.setBatch(ID.getBatch());
		EmpID.setRollNo(ID.getRollNo());
	}
	void setDate(Date D) {
		JoinDate.setDay(D.getDay());
		JoinDate.setMonth(D.getMonth());
		JoinDate.setYear(D.getYear());
	}
	void setNIC(string N) {
		NIC = N;
	}
	void setSalary(int s) {
		Salary = s;
	}
	void setBonus(int bon) {
		Bonus = bon;
	}

	EmployeeID getEmpID()const {
		return EmpID;
	}
	Date getDate()const {
		return JoinDate;
	}
	string getNIC()const {
		return NIC;
	}
	int getSalary()const {
		return Salary;
	}
	int getBonus()const {
		return Bonus;
	}

};