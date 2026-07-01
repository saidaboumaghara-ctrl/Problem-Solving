#pragma once
#include <iostream>
#include<string>
using namespace std;
class clsperson
{
private:
	int _ID=0;
	string _fname;
	string _lname;
	string _gmail;
	int _phonenum;

public :
	clsperson(int Id,string fname,string lname,string gmail,int phonenum)
	{
		_ID =Id;
		_fname = fname;;
		_lname=lname;
		_gmail=gmail;
		_phonenum=phonenum;
	}
	string FullName()
	{
		return _fname + " " + _lname;



	}
	void print()
	{
	cout << "INFO" << endl;
	cout << "-----------------" << endl;
	cout << "ID :" << _ID << endl;
	cout << "First Name :" << _fname<<endl;
	cout << "Last Name :" << _lname << endl;
	cout << FullName() << endl;
	cout << "Email :" << _gmail << endl;
	cout << "Phone number " << _phonenum<< endl;
	}
	void sendEmail(string subject,string Body)
	{
		cout << "The Following message sent successfully to email :" << _gmail << endl;
			cout << "Subject :" << subject << endl;
			cout << "Body :" << Body << endl;

	}
	void sendSMS(string sms)
	{
cout << "The Following message sent successfully to email :" << _phonenum << endl;
cout << "Body" << sms << endl;
		

	}
};