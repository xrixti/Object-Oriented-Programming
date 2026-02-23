 #include<iostream>

using namespace std;

class Known
{

public:
    string name;

    Known()
    {
        name="Uknown";
    }
 Known( string n)
    {

        name=n;


    }

    string getName()
    {

        return name;


    }


};

int main()
{


    Known ob1,ob2("sneaha");

    cout<<ob1.getName()<<endl;
    cout<<ob2.getName()<<endl;




}

