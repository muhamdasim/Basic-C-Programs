#include "pch.h"
//#include "..\\ListLab06\SingleList.h"
#include "..\\ListLab06\DoubleList.h"
//#include "..\\ListLab06\CircularList.h"

//List L;
DoubleList L;
//CircularList L;
TEST(Insert, T1) {
	
	Employee E1(18, 573, 4, 6, 2001, "123456", 10000, 5000);
	Employee E2(18, 531, 23, 12, 1999, "654321", 1000, 500);

	L.insert(E1);
	L.insert(E2);

	EXPECT_EQ(18, (L.getHead()->data.getEmpID().getBatch()));
	EXPECT_EQ(573, (L.getHead()->data.getEmpID().getRollNo()));
	EXPECT_EQ(5000, (L.getHead()->data.getBonus()));
	EXPECT_EQ(10000, (L.getHead()->data.getSalary()));

	EXPECT_EQ(18, (L.getHead()->next->data.getEmpID().getBatch()));
	EXPECT_EQ(531, (L.getHead()->next->data.getEmpID().getRollNo()));
	EXPECT_EQ(500, (L.getHead()->next->data.getBonus()));
	EXPECT_EQ(1000, (L.getHead()->next->data.getSalary()));

}

TEST(Sort, T3) {

	L.Sort();

	EXPECT_EQ(18, (L.getHead()->data.getEmpID().getBatch()));
	EXPECT_EQ(531, (L.getHead()->data.getEmpID().getRollNo()));
	EXPECT_EQ(500, (L.getHead()->data.getBonus()));
	EXPECT_EQ(1000, (L.getHead()->data.getSalary()));
}
TEST(Remove, T2) {

	EmployeeID ID(18, 531);
	L.Remove(ID);
	
	EXPECT_EQ(18, (L.getHead()->data.getEmpID().getBatch()));
	EXPECT_EQ(573, (L.getHead()->data.getEmpID().getRollNo()));
	EXPECT_EQ(5000, (L.getHead()->data.getBonus()));
	EXPECT_EQ(10000, (L.getHead()->data.getSalary()));

}

TEST(Salary, T4) {

	EmployeeID ID(18, 573);
	L.UpdateSalary(50000, ID);

	EXPECT_EQ(50000, (L.getHead()->data.getSalary()));
}
TEST(Empty, Test5) {

		L.Clear();
		EXPECT_EQ(1, L.isEmpty());

		Employee E1(18, 573, 4, 6, 2001, "123456", 10000, 5000);
		L.insert(E1);

		EXPECT_EQ(0, L.isEmpty());

}
TEST(Clear, T6) {

		L.Clear();
		EXPECT_EQ(1, L.isEmpty());
}
