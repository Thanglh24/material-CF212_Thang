#pragma once 
#include <bits/stdc++.h>
using namespace std;
#include <bits/stdc++.h>
#include "banhcuon.h"
#include "banhcuon_chay.h"
#include "banhcuon_mong.h"
#include "banhcuon_thit.h"
#include "banhcuon_dacbiet.h"
class donhang{
private:	
	banhcuon_chay chay;
	banhcuon_mong mong;
	banhcuon_thit thit;
	banhcuon_dacbiet dacbiet;
public:
	donhang(banhcuon_chay, banhcuon_mong, banhcuon_thit, banhcuon_dacbiet);
	void order()const;	
};

donhang::donhang(banhcuon_chay chay, banhcuon_mong mong, banhcuon_thit thit, banhcuon_dacbiet dacbiet):
 chay(chay), mong(mong), thit(thit), dacbiet(dacbiet){}
void donhang::order(){
	cout<<"Loai banh  "<<"soluong"<<"Tinhtien"<<endl;
	cout<<"Banh Cuon Chay\t"<<chay.KL_chay()<<"(g) : "<<chay.tinhtien()<<endl;
	cout<<"Banh Cuon Mong\t"<<mong.KL_mong()<<"(g) : "<<mong.tinhtien()<<endl;
	cout<<"Banh Cuon Thit\t"<<thit.KL_thit()<<"(g) : "<<thit.tinhtien()<<endl;
	cout<<"Banh Cuon Dac Biet\t"<<dacbiet.KL_dacbiet()<<"(g) : "<<dacbiet.tinhtien()<<endl; 
} 