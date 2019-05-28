#ifndef EMPLOYER_H
#define EMPLOYER_H
#include "person.h"
class Employer: public Person{
private:
	int ID;
	static int count_employer;
public:
	Employer();
	Employer(string, int, string, int, string, int);
	//setter
	void setID(int);
	//getter 
	int getID(int);

};
int Employer::count_employer=0;
Employer::Employer(){}
Employer::Employer(string name, int DOB, string Hometown, int cccd, string phone){
	count_employer++;
	this -> Fullname=name;
	this -> DOB=DOB;
	this -> Hometown=Hometown;
	this -> cccd=cccd;
	this -> Phonenumber=phone;
	this -> ID=count_employer;
}
//setter
void setID(int ID){
	this -> ID;
}
//getter
int Employer::getID(){
	return this->ID;
} 
#endif