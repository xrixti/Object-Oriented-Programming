#include<iostream>

using namespace std;


class a
{
 int i;

public:

    a(int e)
    {
        i=e;
    }

    void show_i(){

      cout<<"i:"<<i;

    }



};
class b
{
 int j;

public:

  b(int d)
  {
   j=d;
  }
      void show_j( ){

      cout<<"j:"<<j;

    }



};


class c: public a,public b
{
   int k;

public:
    c(int l , int x,  int y):a(x),b(y)
    {
      k=l;
    }

   void show_k(){

      cout<<"k:"<<k;

    }

};









int main()
{

    c ob(10,20,30);

  ob.show_i();
  ob.show_j();
  ob.show_k();



}

