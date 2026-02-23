#include <iostream>
using namespace std;
class two;
class three;
class one
{
    public:
    float a;
    void enter()
    {
      cin>>a;
    }



    friend float Avg(one x,two y,three z);
};

    class two
{

    float b;
     public:
    void input()
    {
      cin>>b;
    }

    friend float Avg(one x,two y,three z);
};



class three
{  public:
    float c;

    void in()
{
   cin>>c;
}

    friend float Avg(one x,two y,three z);
};

float Avg(one x,two y,three z )
{
   float avg;
   avg=x.a*y.b*z.c/3;

  return avg;
}



int main()
{

    one ob1;
    two ob2;
    three ob3;
    ob1.enter();
    ob2.input();
    ob3.in();
   cout<<Avg( ob1, ob2,ob3);




}
