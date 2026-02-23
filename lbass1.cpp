#include<iostream>

using namespace std;

class MYPROBLM{

public:
    int showArraySummation(int a[],int length)
    {
        int sum=0,i;
        for(i=0;i<length;i++){

            sum+=a[i];
        }
        return sum;
    }

 int calculatefactorial(int n)
 {
     int fact=1;

     int i;
     for(i=1;i<=n;i++)
     {
         fact*=i;
     }
     return fact;
 }




};






int main()
{
     MYPROBLM  m;
int p[]={1,2,3,4,5};

    cout<<m.showArraySummation(p,5)<<endl;
     cout<<m.calculatefactorial(5);

}
