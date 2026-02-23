#include<iostream>


using namespace std;
class rectangle{



  protected:
      float length,breath;


      public:
    void  set()
    {
       cin>>length;
       cin>>breath;
    }


};



class area:public rectangle{


public :


    float calc()
    {
        return length*breath;
    }


};





class perimeter:public rectangle{



public:
    float calc_p()
    {
        return 2*(length*breath);
    }




};




int main()
{
    area a;
    a.set();
    perimeter p;
    p.set();
    cout<<p.calc_p()<<endl;

    cout<<a.calc();
}
