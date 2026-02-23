#include<iostream>

using namespace std;


enum Choice{sat,sun,mon,tue,wed,thu,fri};


int main()
{
  int choice;
    cin>>choice;
     switch(choice){
        case sat: cout<<"Today is Saturday"; break;
        case sun: cout<<"Today is Sunday"; break;
        case mon: cout<<"Today is Monday"; break;
        case tue: cout<<"Today is Tuesday"; break;
        case wed: cout<<"Today is Wednesday"; break;
        case thu: cout<<"Today is Thursday"; break;
        case fri: cout<<"Today is Friday"; break;
        default: cout<<"You pressed unknown key\n"; break;
    }
    return 0;




}
