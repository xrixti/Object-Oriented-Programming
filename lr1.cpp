#include <iostream>
using namespace std;
class car
{
private:
    string name;
    int quantity;
public:
    car()
    {
        cout<<"Enter car name:";
        getline(cin,name);
        cout<<"Enter car quantity:";
        cin >>quantity;
    }
    void print()
    {
        cout<<"Enter car name:"<<name<<endl;
        cout<<"Enter car quantity:"<<quantity<<endl;
    }
    ~car()
    {
        cout<<"Distruct Succesfully";
    }
};
int main()
{
    car ob1;
    ob1.print();
}
