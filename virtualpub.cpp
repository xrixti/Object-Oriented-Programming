#include<iostream>

using namespace std;


class A
{
public:

   int i;
};
  class B:virtual public A
  {

      public:
      int j;

  };
  class C:virtual public A
  {  public:
      int k;
  };


  class D:public B,public C
  {
public:
     int sum;


  };





  int main ()
  {

    D d;
    d.i=10;
    d.j=20;
    d.k=30;
     d.sum=d.i+d.j+d.k;


     cout<<d.sum;

  }
