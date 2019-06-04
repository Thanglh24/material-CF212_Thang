#pragma once 
#include <bits/stdc++.h>
using namespace std;
class banhcuon{
protected:
	double khoiluong;
	int gia;
public:
	banhcuon();
	banhcuon(double, int);
	//setter
	void setkhoiluong(double);
	void setgia(int);
	//getter
	double getkhoiluong()const;
	double getgia()const;
	virtual double tinhtien()const;
};

banhcuon::banhcuon(){}
banhcuon::banhcuon(double KL, int gia): khoiluong(KL), gia(gia){}
//setter
	void banhcuon::setkhoiluong(double KL){
		this -> khoiluong=KL;
	}
	void banhcuon::setgia(int gia){
		this -> gia=gia;
	}
//getter
	double banhcuon::getkhoiluong()const{
		return this -> khoiluong;
	}
	double banhcuon::getgia()const{
		return this -> gia;
	}
//method
	double banhcuon::tinhtien()const{
		return (this->khoiluong * this->gia)/100; 
	}	