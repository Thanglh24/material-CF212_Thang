#pragma once 
#include "banhcuon.h"
class banhcuon_mong: public banhcuon{
private:
	double KL_mong;
	int gia_mong;
public:
	banhcuon_mong();
	banhcuon_mong(double, int, double, int);
	double getKL_mong()const;
	int getgia()const;
	virtual double tinhtien()const;
};

banhcuon_mong::banhcuon_mong(){}
banhcuon_mong::banhcuon_mong(double KL, int gia, double KL_mong, int gia_mong): banhcuon(KL,gia), KL_mong(KL_mong), gia_mong(gia_mong){}
double banhcuon_mong::getKL_mong()const{
	return this -> KL_mong;
}
int banhcuon_mong::getgia()const{
	return this -> gia;
}
double banhcuon_mong::tinhtien()const{
	return (this -> khoiluong*this -> gia + this -> KL_mong*this->gia_mong )/ 100;