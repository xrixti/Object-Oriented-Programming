
#include<iostream>


using namespace std;


class shape{

public:

    void setwidth(int w)
{
    width=w;
}

void setheight(int h){

height=h;
}


protected:

    int width;
    int height;


};

class paintcost{

public:
    int getcost(int area)
    {
        return area*70;
    }



};



class rectangle:public shape,public paintcost{



public:

    int  getarea()
    {
        return (width*height);
    }


};




int main()
{
    rectangle R;

    R.setwidth(5);
    R.setheight(7);
    cout<<R.getarea();
    int a;
    a=R.getarea();
   cout<<R.getcost(a);


}
