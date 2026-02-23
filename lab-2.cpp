#include<iostream>

using namespace std;


enum week{sat,sun,mon,tue,wed,thu,fri};


int main()
{
  int  today;
    cin>>today;
   if(today==fri)
   {
       cout<<"Off day"<<endl;
   }
   else
   {
       cout<<"Working day"<<endl;
   }

    return 0;


}

