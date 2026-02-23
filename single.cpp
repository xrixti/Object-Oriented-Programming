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



class rectangle:public shape{



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



}
