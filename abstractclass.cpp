#include<iostream>

using namespace std;



class Polygon{

protected:

    int h,w;

public:

    void set_values(int i,int j)
    {
        w=i;
        h=j;
    }

  virtual int area()=0;



};




 class Ractangle:public Polygon
 {
 public:


    int area()

{

   return(w*h);

}

};



class Triangle:public Polygon
{
public:

    int area(){
     return(w*h)/2;
    }
};






int main()
{

    Ractangle  r;
    Triangle t;


    Polygon *p1=&r;
    Polygon *p2=&t;

    p1->set_values(4,5);
    p2->set_values(4,5);
    cout<<p1->area()<<endl;
    cout<<p2->area();


}
