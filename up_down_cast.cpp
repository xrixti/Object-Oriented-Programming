#include<iostream>
using namespace std;
 class A{
 public:
     void dis(){

     cout<<"a"<<endl;

     }
 };
 class B:public A{
public:
     void dis(){

     cout<<"b"<<endl;
     }
 };
 int main()
 {
     A *a,aa;
 B b,*bb;

     a=&b;
     a->dis();
  bb=(B*)&aa;
   bb->dis();

 }
