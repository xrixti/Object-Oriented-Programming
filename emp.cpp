
#include<iostream>

using namespace std;

class employee
{
    public:
    int id;
     string name;
    double salary;

    void output()
    {
        cout<<"ID: "<<id<<endl<<"Name: "<<name<<endl;//<<"Salary: "<<salary<<endl;
    }

};


int main()
{


    employee w1;
    w1.id=30;
    w1.name='n';
    w1.salary=100.00;
    w1.output();
    cout<<w1.salary;










    return 0;
}


