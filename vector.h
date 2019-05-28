#ifndef VECTOR_H
#define VECTOR_H
#include <bits/stdc++.h>
using namespace std;
template <typename T>
class node
{
public:
  T data;
  node<T> *next;
  node(T data){
    this -> data = data;
    this -> next = NULL;
  }
template <typename > friend class Vector;
};
template <typename T>
class Vector{
public:
  node<T> *head;
  node<T> *finaly;
  Vector();
  void push_back(T);
  void pop_back();
  void erase(T);
  int size();
  void resize(int);
  void display();
  void Find_data(T);
};
template <typename T>
Vector<T>::Vector(){ 
  this ->head = NULL;
  this ->finaly = NULL;
}
template <typename T>
void Vector<T>::push_back(T data){
  node<T> *temp = new node<T>(data);
  if(head==NULL){
    head=temp;
    finaly=temp;
  }
  else{
    finaly -> next=temp;
    finaly = finaly -> next;
  }
}
template <typename T>
void Vector<T>::pop_back(){
  node<T> *a = head;
  while(a->next->next!=NULL){
    a = a -> next;
  }
  finaly = a;
  a->next=NULL;
}
template <typename T>
void Vector<T>::erase(T position){
  node<T> *a = head;
  int check=0;
  while(check!=position-2 && a->next->next!=NULL){
    ++check;
    a = a -> next;
  }
  a->next=a->next->next;
}
template <typename T>
int Vector<T>::size(){
    int count=0;
    node<T>*a=head;
    while(a!=NULL){
        count++;
        a=a->next;
    }
    return count;
}
template <typename T>
void Vector<T>::resize(int s){
  node<T> *a=head;
  int i = size();
  if(s>size()){
    while(i!=s){
      node<T> *temp = new node<T>(0);
      finaly -> next=temp;
      finaly = temp;
      i++;
    }
  }
  else{
      for(int j=0;j<s-1;j++){
        a = a->next;
      }
      finaly = a;
      a -> next = NULL;
      }
}
template<typename T>
void Vector<T>::Find_data(T value){
  int count=0;
  node<T> *a=head;
  while(a!=NULL){
    if(a->data == value){
      count++;
      break;
    }
    else a = a-> next;
  }
  if(count>=1) cout<<"Yes"<<endl;
  else cout<<"NO"<<endl;
}
template <typename T>
void Vector<T>::display(){
    node<T> *a = head;
    while(a!=NULL){
        cout<<a->data<<endl;
        a=a->next;
    }
}

#endif
