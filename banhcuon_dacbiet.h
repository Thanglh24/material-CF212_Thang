#pragma once 
#include "banhcuon.h"
class banhcuon_dacbiet: public banhcuon{	
private:
	double KL_thit;
	int gia;
	double KL_cacuong;
	int gia_cacuong;
public:
	banhcuon_dacbiet();
	banhcuon_dacbiet(double, int, double, int, double, int);
	double getKL_thit()const;
	int getgia()const;
	double getKL_cacuong()const;
	int getgia_cacuong()const;
	virtual double tinhtien()const;
};

banhcuon_dacbiet::banhcuon_dacbiet(){}
banhcuon_dacbiet::banhcuon_dacbiet(double KL, int gia,double KL_thit, int gia_thit, double KL_cacuong, int gia_cacuong): 
banhcuon(KL, gia), KL_thit(KL), gia(gia), KL_cacuong(KL_cacuong), gia_cacuong(gia_cacuong){}
	double banhcuon_dacbiet::getKL_thit()const{
		return this -> KL_thit;
	}
	int banhcuon_dacbiet::getgia()const{
		return this -> gia;
	}
	double banhcuon_dacbiet::getKL_cacuong()const{
		return this -> KL_cacuong;
	}
	int banhcuon_dacbiet::getgia_cacuong()const{
		return this -> gia_cacuong;
	}
double banhcuon_dacbiet::tinhtien()const{
	return (this->khoiluong*this->gia + this-> KL_thit * this-> gia + KL_cacuong*gia_cacuong)/100;
}
