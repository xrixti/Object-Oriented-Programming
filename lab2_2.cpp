#include<iostream>

using namespace std;

class bank
{
private:
    float p,r,t,si,amount;

public:
    void input()
    {
        cin>>p>>r>>t;
        si=(p*r*t)/100;
        amount=si*p;
    }
    void output()
    {
        cout<<"p: "<<p<<endl<<"Rate: "<<r<<endl<<"time: "<<t<<endl<<"I: "<<si<<"A: "<<amount<<endl;;
    }

};


int main()
{


  bank b;
    b.input();
    b.output();










    return 0;
}

