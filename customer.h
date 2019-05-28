#ifndef CUSTOMER_H
#define CUSTOMER_H
#include "person.h"
class Customer: public Person{
private:
	int ID;
	int ID_gift;
public:
	static count_customer;
	Customer();
	Customer(string, int, string, int, string, int);
	//setter
	void setID_gift(int);
	//getter
	int getID_gift();
	int getID();
	
};
Customer::count_customer=0;
Customer::Customer(){}
Customer::Customer(string name, int DOB, string Hometown, int cccd, string Phonenumber, int gift){
	count_customer++;
	this -> Fullname=name;
	this -> DOB=DOB;
	this -> Hometown=Hometown;
	this -> cccd=cccd;
	this -> Phonenumber=phone;
	this -> ID=count_customer;
	this -> ID_gift=gift;
}
//setter
void Customer::setID_gift(){
	this -> ID_gift;
}
//getter
int Customer::getID_gift(){
	return this -> ID;
}
int Customer::getID(){
	return this	-> ID;
}
#endif