#ifndef PERSON_H
#define PERSON_H
#include <bits/stdc++.h>
using namespace std;
class Person{
protected:
	string Fullname;
	int DOB;
	string Hometown;
	int cccd;
	string Phonenumber;	
public:
	Person();
	Person(string, int, string, int, string);
	//setter
	void setFullname(string);
	void setDOB(int);
	void setHometown(string);
	void setcccd(int);
	void setPhonenumber(string);
	//getter
	string getFullname()const;
	int getDOB()const;
	string getHometown()const;
	int getcccd()const;
	string getPhonenumber()const;
	//method
};

Person::Person(){}
Person::Person(string name, int DOB, string Hometown, int cccd, string phone): Fullname(name), DOB(DOB), Hometown(Hometown), cccd(cccd), Phonenumber(phone){}
//setter
void Person::setFullname(string name){
	this -> Fullname=name;
}
void Person::setDOB(int DOB){
	this -> DOB=DOB;
}
void Person::setHometown(string Hometown){
	this -> Hometown=Hometown;
}	
void Person::setcccd(int cccd){
	this -> cccd=cccd;
}
void Person::setPhonenumber(string phone){
	this -> Phonenumber=phone;
}
//getter
string Person::getFullname()const{
	return Fullname;
}
int Person::getDOB()const{
	return DOB;
}
string Person::getHometown()const{
	return Hometown;
}
int Person::getcccd()const{
	return cccd;
}
string Person::getPhonenumber()const{
	return Phonenumber;
}
#endif