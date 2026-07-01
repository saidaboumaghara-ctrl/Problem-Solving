#include<iostream>
#include"clsperson.h"
using namespace std;


int main()
{
	clsperson person1(1, "Said", "Abu", "said@gmail.com", 123456789);
	person1.print();
	person1.sendEmail("Hello Hamza","Welcame to syria");
	person1.sendSMS("Hello person");





	system("pause>0");
	return 0;
}