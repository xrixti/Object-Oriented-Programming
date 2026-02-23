#include<iostream>

using namespace std;

class Workers
{
private:
    int id;
    string name;
    double salary;
public:
    void input(int i,string n, double s)
    {
        id=i;
        name=n;
        salary =s;

    }
    void updatesalary()
    {
        int update;
        update=getsalary()+500;

        cout<<update;
    }
    int getId()
    {
        return id;
    }
    double getsalary()
    {
        return salary;
    }


};


int main()
{


    Workers w1,w2;
    w1.input(1, "Delwar", 2300);
//    w1.output();

     cout<<w1.getsalary();
     cout<<"\n";
    w1.updatesalary();








    return 0;
}


