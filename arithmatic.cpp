#include<iostream>

using namespace std;

class arithmetic
{

public :

    //int a,b;

    int sum( )
    {
        int a,b;
        cin>>a>>b;
        return a+b;

    }

    int sub(int a,int b)
    {

        return a-b;

    }
    void mul(int a,int b)
    {

        cout<<a*b<<endl;

    }

    void div()
    {   int a,b;
    cin>>a>>b;
        float d= float(a)/float(b);
        cout<<d<<endl;
    }



};
int main()
{

    int x,y;
    cin>>x>>y;

    arithmetic p1;

    cout<<p1.sum()<<endl;
    cout<<p1.sub(x,y)<<endl;
    p1.mul(x,y);
    p1.div( );



    return 0;
}
