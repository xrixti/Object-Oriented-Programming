#include<iostream>

using namespace std;


class EvenOddfinder
{
private :

    int n;


public:

   EvenOddfinder()
   {
       n=10;
   }

  int Oddfinder()
  {
    int i;

    for(i=1;i<=n;i++){

        if(i%2==1)
        {
            cout<<"Odd numbers:"<<i<<endl;
        }
    }
  }
EvenOddfinder(EvenOddfinder &obj1 )
{
    n=obj1.n;
}



  int Evenfinder()
  {
    int j;

    for(j=1;j<=n;j++){

        if(j%2==0)
        {
            cout<<"Even Numbers:"<<j<<endl;
        }
    }
  }



};



int main()
{

   EvenOddfinder  obj1;

   obj1.Oddfinder();
  obj1.Evenfinder();

 EvenOddfinder  obj2(obj1);
  obj2.Oddfinder();
  obj2.Evenfinder();

}
