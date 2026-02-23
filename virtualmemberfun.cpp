#include<iostream>

using namespace std;


class base
{

public:
   // base(){}
   virtual void show()
    {
        cout<<"Base class"<<endl;
    }

};


class drived:public base
{
    public:
//drived(){}
    void show()
    {
        cout<<"Drived class"<<endl;
    }
};


class drive2:public base
{
public:
//drive2(){}
  //   void show()
   // {cout<<"second derived"<<endl;}
};


int main()
{
    base *b;
    drived d;
    drive2 D;
   b=&d;
   b->show();
   b=&D;
   b->show();

   return 0;
}

