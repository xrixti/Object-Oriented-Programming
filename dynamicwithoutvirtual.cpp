#include<iostream>

using namespace std;


class base
{

public:
    void show()
    {
        cout<<"Base class"<<endl;
    }

};


class drived:public base
{
    public:

    void show()
    {
        cout<<"Drived class";
    }
};



int main()
{
    base *b;
    drived d;
    b=&d;
    b->show();
}


