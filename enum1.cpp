#include<iostream>

using namespace std;

class Square
{

public:
    int side;

    Square()
    {
        side=2;
    }
    Square(int s)
    {

        side=s;


    }

    int area()
    {




         return side*side;


    }


};

int main()
{


    Square ob1,ob2(4);

    cout<<ob1.area();
cout<<ob2.area();




}
