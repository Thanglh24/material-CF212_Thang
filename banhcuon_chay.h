#pragma once 
#include "banhcuon.h"
class banhcuon_chay: public banhcuon{
private:
	double KL_chay;
	int gia_chay;
public:
	banhcuon_chay();
	banhcuon_chay(double, int, double, int);
	double getkhoiluong()const;
	int getgia()const;
	virtual double tinhtien()const;
};

banhcuon_chay::banhcuon_chay(){}
banhcuon_chay::banhcuon_chay(double KL, int gia, double KL_chay, int gia_chay): banhcuon(KL, gia), KL_chay(KL_chay), gia_chay(gia_chay){}
//getter
double banhcuon_chay::getkhoiluong()const{
	return this -> khoiluong;
}
int banhcuon_chay::getgia()const{
	return this -> gia;
}
double banhcuon_chay::tinhtien()const{
	return (this -> khoiluong*this -> gia + this -> KL_chay*this->gia_chay )/ 100;
}