#include<iostream>

using namespace std;

void swap_without_thrid_variable(int a,int b)
{



    b=a+b;
    a=b-a;
    b=b-a;
    cout<<"first number: "<<a<<endl<<"second number: "<<b<<endl;

}
  int fact(int c)
  {
      int f=1,d,i=1;
      while(i<=c)
      {
          f=f*i;
          i++;
      }

     return f;

  }



void swap()
{
    int a,b;
    cout<<"input first number: ";
    cin>>a;
    cout<<"input second number: ";
    cin>>b;
    int temp;
    temp=b;
    b=a;
    a=temp;
    cout<<"first number: "<<a<<endl<<"second number: "<<b<<endl;


}
   int sum()
   {
      int n,s=0,i;
      cout<<"input:";
      cin>>n;
      for(i=0;i<n;i++){
        s=s+i;
      }


      return s;


   }



int main()
{

    int x,y,z;
    cin>>x>>y>>z;
    swap_without_thrid_variable(x,y);
    cout<<z<<"!= "<<fact(z)<<endl;
    swap();
    cout<<sum();


    return 0;
}


