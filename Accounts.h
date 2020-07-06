#include<string>
#include<iostream>
using namespace std;

class Accounts{
	
	string Fname, Lname;
	double Balance;
	int RecordNo, AccountID;

public:

	Accounts() {
		Fname = "";
		Lname = "";
		Balance = 0.0;
		RecordNo = 0;
		AccountID = 0;
	}
	
	~Accounts() {

	}

	Accounts(string F, string L, double B, int R, int ID) {
		Fname = F;
		Lname = L;
		Balance = B;
		RecordNo = R;
		AccountID = ID;
	}

	void setFname(string F) {
		Fname = F;
	}

	void setLname(string L) {
		Lname = L;
	}

	void setBalance(double B) {
		Balance = B;
	}

	void setRecordNo(int R) {
		RecordNo = R;
	}

	void setAccountID(int ID) {
		AccountID = ID;
	}

	string getFname() const {
		return Fname;
	}

	string getLname() const {
		return Lname;
	}

	double getBalance() const {
		return Balance;
	}

	int getRecordNo() const {
		return RecordNo;
	}

	int getAccountID() const {
		return AccountID;
	}

	Accounts operator = (const Accounts& chk) {
		this->Fname = chk.Fname;
		this->Lname = chk.Lname;
		this->Balance = chk.Balance;
		this->RecordNo = chk.RecordNo;
		this->AccountID = chk.AccountID;

		return *this;
	}

	bool operator == (const Accounts& chk)const {
		if (AccountID == chk.AccountID) {
			return true;
		}
		return false;
	}

	bool operator > (const Accounts& chk)const {
		if (AccountID > chk.AccountID) {
			return true;
		}
		return false;
	}
	
	bool operator < (const Accounts& chk)const {
		if (AccountID < chk.AccountID) {
			return true;
		}
		return false;
	}



	void Display() {

		cout << endl;
		cout << "FirstName: " << getFname() << endl;
		cout << "LastName: " << getLname() << endl;
		cout << "Record Number: " << getRecordNo() << endl;
   		cout << "Balance: " << getBalance() << endl;
		cout << "Account ID: " << getAccountID() << endl;
		cout << endl;
	}

};