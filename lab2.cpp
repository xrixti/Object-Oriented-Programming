#include<iostream>

using namespace std;

class student
{
private:
    int id;
    char name[100];
    int sem;

public:
    void input()
    {
        cin>>id;
        fflush(stdin);
        cin>>name;
        fflush(stdin);
        cin>>sem;

    }
    void output()
    {
        cout<<"ID: "<<id<<endl<<"Name: "<<name<<endl<<"Sem: "<<sem<<endl;
    }

};


int main()
{


  student w1,w2;
    w1.input();
    w1.output();










    return 0;
}
