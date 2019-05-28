#ifndef PRODUCT_H
#define PRODUCT_H
#include <bits/stdc++.h>
class Product{
	private:
		string name;
		int ID;
		int quantity:
		int price;	
	public:
		Product(){}
		Product(string name, int ID, int quantity, int price){
}
		//setter
		void setname(string name){
			this -> name;
		}
		void setID(int ID){
			this -> ID;
		}
		void setquantity(int quantity){
			this -> quantity;
		}
		void setprice(int price){
			this -> price;
		}
		// getter
		string getname()const{
			return name;
		}
		int getID()const{
			return ID;
		}
		int getquantity()const{
			return quantity;
		}
		int getprice()const{
			return price;
		}

};

#endif