#include<iostream>

using namespace std;

 class STUDENT{

     int i;
      string n;
      string d;
      string s;
      double  p;

      public:
   STUDENT(int id,string name,string dept,string section)
{
    i=id;
    d= dept;
    n=name;
    s=section;
}

STUDENT(int id,string name,string dept)
  {
     i=id;
    d= dept;
    n=name;

}


   STUDENT(int id,string name,string dept,double CGPA)
   {
    i=id;
    d= dept;
    n=name;
    p=CGPA;

    }

void display1stConstructorInfo()
{
     cout<<"Student ID:"<<i<<endl;

    cout<<"Name:"<<n<<endl<<"Department:"<<d<<endl<<"Section"<<s<<endl;

}
void display2ndConstructorInfo()
{
     cout<<"Student ID:"<<i<<endl;

    cout<<"Name:"<<n<<endl<<"Department:"<<d<<endl;

}
void display3rdConstructorInfo()
{
     cout<<"Student ID:"<<i<<endl;

    cout<<"Name:"<<n<<endl<<"Department:"<<d<<endl<<"CGPA"<<p<<endl;

}

};
int main()
{

    STUDENT  ob1(01,"Miya","Science","B"), ob2(01,"Miya","Science"),ob3(01,"Miya","Science",3.96);



    ob1.display1stConstructorInfo();
    ob2.display2ndConstructorInfo();
    ob3.display3rdConstructorInfo();

}
