#include<iostream>

using namespace std;

class student
{
public:

    int marks;
    char grade;


    void output(int a,char b)

    {
        cout<<"Marks: "<<a<<endl<<"Grade: "<<b<<endl;
    }

};


int main()
{

  student s1;//,s2(621,'B');

  cout<<"Record of first student";
  s1.output(730,'A');







    return 0;
}

