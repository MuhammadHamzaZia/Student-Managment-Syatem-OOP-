#include"student.h"
int main() {
	//object s1 using default constructor
	student s1;
	s1.display();
	s1.calculate_Grade();
	cout << endl;
	//object using parameterized constructor 
	student s2("hamza", 19, 6, 2.34);
	s2.display();
	s2.calculate_Grade();
	cout << endl;
	student s3("zia", 19, 17, 2.4);
	s3.display();
	s3.calculate_Grade();
	cout << endl;
	student s4("irtaza", 19, 12, 3.1);
	s4.display();
	s4.calculate_Grade();
	cout << endl;
	return 0;
}
