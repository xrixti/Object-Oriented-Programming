#include<iostream>

using namespace std;

void sum1()
{
    int a,b;
    cin>>a>>b;
    cout<<a+b;


}

int sum2()
{
    int a,b;
    cin>>a>>b;
     return  a+b;

}

void sum3(int a,int b)
{
    int sum;
    sum=a+b;
    cout<<"Sum: "<<sum<<endl;
}
 int sum4(int a,int b)
 {
     return a+b;
 }

int main()
{
   int p,q;
   cin>>p>>q;
    sum1();
    cout<<sum2()<<endl;
    sum3(p,q);
   cout<<sum4(2,2);

    return 0;
}
