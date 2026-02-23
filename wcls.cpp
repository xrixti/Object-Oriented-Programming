#include<iostream>

using namespace std;

class Workers
{
private:
    int id;
    string name;
    double salary;
public:
    void input()
    {
        cin>>id;
        fflush(stdin);
        cin>>name;
        fflush(stdin);
        cin>>salary;

    }
    void output()
    {
        cout<<"ID: "<<id<<endl<<"Name: "<<name<<endl;//"Salary: "<<salary<<endl;
    }

};


int main()
{


    Workers w1,w2;
    w1.input();
    w1.output();
     cout<<w1.salary;









    return 0;
}
