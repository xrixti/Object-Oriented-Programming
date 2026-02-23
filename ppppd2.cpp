#include <iostream>

using namespace std;


class A
{

private:
    int i;
    int b;

public:

    A (int a,int c)
    {
        i=a;
        b=c;
    }

  A ()
  {
      i=5;
      b=10;
  }

void output(){

cout<<i<<endl<<b<<endl;
}
 int area ()
 {
     return i*b;
 }
  void print (int t)
  {
      cout<<t;
  }

};


int main()
{
    A  a(10,5);
    a.output();
    a.area();
    int p;
    p=a.area();

a.print(p);

  A obj;
 obj.output();
    obj.area();
    int q;
    q=obj.area();

obj.print(q);

}
