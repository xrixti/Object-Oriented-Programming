#include<iostream>


using namespace std;



class a{


public:

    void show()
    {
        cout<<"class A";
    }



};
class b:public a{






};
class c:public b{






};




int main()
{

    c obj;
        obj.show();


}
