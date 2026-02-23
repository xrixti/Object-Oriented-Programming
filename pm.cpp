#include<iostream>


using namespace std;


class A{


int x;

public:
    A(int a){

    x=a;

    }

void print()
  {
      cout<<x;
  }



};
class B{


int y;

public:
    B(int b){

    y=b;

    }

  void show()
  {
      cout<<y;
  }


};
class C:public A,public B{


int z,w;

public:
    C(int a,int b):A(a),B(b)

    {

    z=a;
    w=b;


    cout<<a<<b;
    }




};



int main()
{


 C c(20,60);

  c.print();
  c.show();





}
