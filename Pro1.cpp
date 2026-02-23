#include<iostream>

using namespace std;


class student
{
public:


    int roll;
    string name;


public:

    void read()
    {
        cin>>roll;
        cin>>name;

    }


    void display1()
    {
        cout<<"Roll:"<<roll<<endl;
        cout<<"Name:"<<name<<endl;

    }

};

class exam: virtual public student
{
public:


    int s1;
    int s2;
    int s3;


public:

    void read2( )
    {
        cin>>s1;
        cin>>s2;
        cin>>s3;

    }


    void display2()
    {
        cout<<"Math Score:"<<s1<<endl;
        cout<<"English Score:"<<s2<<endl;
        cout<<"Bangla Score:"<<s3<<endl;

    }

};

class sport: virtual public student
{
public:


    int score;



public:

    void read3( )
    {

        cin>>score;
    }


    void display3()
    {
        cout<<"sport Score:"<<score<<endl;


    }

};

class result:public exam,public sport
{

public:

    int total;
    int average;



    void compute( )
    {

        read();
        read2();
        read3();


        total=s1+s2+s3+score;
        average=total/4;

    }



    void display()
    {
        cout<<"Total:"<<total<<endl;
        cout<<"Average:"<<average<<endl;

    }



};




int main()


{

    result r;


    r.compute();

    r.display1();
    r.display2();
    r.display3();
    r.display();


}
