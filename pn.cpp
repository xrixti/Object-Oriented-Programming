#include<iostream>
#include<stdbool.h>
using namespace std;

bool is_positive(int a)
{
    if(a>=0)

       return 0;
    else
        return  1;
}

int main()
{

    int a;
    cin>>a;


   if(is_positive(a)== 0)
    cout<<"positive";
   else
    cout<<"negative";

}
