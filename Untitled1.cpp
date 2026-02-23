#include<iostream>

using namespace std;

class M
{
private:
 int a,b,c;
 public:
   void  input()
  {
    cin>>a>>b>>c;


  }



   M mul( M x,M y,M z)
   {
    M multiple;
    multiple.a=x.a*y.a*z.a;
   multiple.b=x.b*y.b*z.b;
   multiple.c=x.c*y.c*z.c;

   return multiple;

   }
  void show( )
  {
     cout<<"The multiplications answers are:"<<a<<","<<b<<","<<c<<endl;
  }


};

int main()
{

  M ob1,ob2,ob3,ob4,ob5;
  ob1.input();
  ob2.input();
  ob3.input();
 ob5=ob4.mul(ob1,ob2,ob3);
ob5.show();


}

