#include<iostream>
using namespace std;

enum Choice{Circle,Rectangle,Square,parallelogram};
int main(){
   
    int userChoice;
    cin>>userChoice;
    switch(userChoice){
        case Circle: cout<<"It is circle\n"; break;
        case Rectangle: cout<<"It is Rectangle\n"; break;
        case Square: cout<<"It is Square\n"; break;
        case parallelogram: cout<<"It is parallelogram\n"; break;
        default: cout<<"You pressed unknown key\n"; break;
        
    }
    return 0;
}
