#include<iostream>
#include<stdbool.h>
using namespace std;

bool is_positive(int a)
{
    if(a>=0)
       return 1;
    else
        return 0;
}

int main()
{

    int a;
    cin>>a;


    cout<<is_positive(a)<<endl;

}
