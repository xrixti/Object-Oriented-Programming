#include<iostream>


using namespace std;



class A{


public:
  int i;
    void len()
    {
        cin>>i;
    }



};
class B:public A{


public:

    int b,c;
 void B_b(){
     len();
     cin>>b;

     c=b*i;
     }

};
class C{


public:


    int h;

    void height()
    {
        cin>>h;
    }



};

  class D:public C,public B
  {
  public:
    //int r;
    int res;

    void result()
    {
      B_b();
       //len();
       height();

       res=h*c;
      cout<<res;
    }
  };


int main()
{

     D  obj;
        obj.result();


}

