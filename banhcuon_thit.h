#pragma once 
#include "banhcuon.h"
class banhcuon_thit: public banhcuon{
private:
	double KL_thit;
	int gia_thit;	
public:
	banhcuon_thit();
	banhcuon_thit(double, int, double, int);
	double getKL_thit()const;
	int getgia()const;
	virtual double tinhtien()const;
};
banhcuon_thit::banhcuon_thit(){}
banhcuon_thit::banhcuon_thit(double KL, int gia, double KL_thit, int gia_thit): banhcuon(KL,gia), KL_thit(KL_thit), gia_thit(gia_thit){}
double banhcuon_thit::getKL_thit()const{
	return this -> KL_thit;
}
int banhcuon_thit::getgia()const{
	return this -> gia;
}
double banhcuon_thit::tinhtien()const{
	return (this -> khoiluong*this -> gia + this->KL_thit*this->gia_thit )/ 100;;
}