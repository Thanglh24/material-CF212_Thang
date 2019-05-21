#include "sophuc.h"

sophuc::sophuc(){}
sophuc::sophuc(double t, double a): thuc(t), ao(a){}
//setter 
void sophuc::setthuc(double t){
	this -> thuc=t;
}
void sophuc::setao(double a){
	this -> ao = a;
}
//getter
double sophuc::getthuc()const{
	return thuc;
}
double sophuc::getao()const{
	return ao;
}
//operator
sophuc sophuc::operator +(const sophuc &x){
	sophuc kq;
	kq.thuc =  x.thuc + this -> thuc;
//	kq.ao = x.ao + this -> ao;   
}
sophuc sophuc::operator -(const sophuc &x){
	sophuc kq;
	kq.thuc =  x.thuc - this -> thuc;
	kq.ao = x.ao - this -> ao;
}
sophuc sophuc::operator *(const sophuc &x){
	sophuc kq(0.0,0.0);
	kq.thuc =  x.thuc * this -> thuc;
	kq.ao = x.ao * this -> ao;
}
sophuc sophuc::operator /(const sophuc &x){
	sophuc kq;
	kq.thuc =  x.thuc / this -> thuc;
	kq.ao = x.ao / this -> ao;
}