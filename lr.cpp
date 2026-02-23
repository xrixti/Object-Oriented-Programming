#include <iostream>
using namespace std;
class phone
{
private:
    string name;
    int quantity;
public:
    phone()
    {
        cout<<"Enter phone Name:";
        getline(cin,name);
        cout<<"Enter quantity:";
        cin>>quantity;
    }
    phone(string n,int m)
    {
        name =n;
        quantity=m;
    }
    void show()
    {
        cout<<"Enter phone Name:"<<name<<endl;
        cout<<"Enter quantity:"<<quantity<<endl;
    }
};
int main()
{
    phone ob1;
    ob1.show();
    cout<<"2nd Object"<<endl;
    phone ob2("vivo",40);
    ob2.show();
}
