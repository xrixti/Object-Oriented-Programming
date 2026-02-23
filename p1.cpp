#include<iostream>

using namespace std;

class A
{
  private:
      int a,f=1;

      public:
    A(int x)
    {
        a=x;
    }


    void fact()
    {
        int i;
        for(i=1;i<=a;i++)
        {
            f*=i;
        }

        cout<<f;
    }





    A(A &obj)
    {
        a=obj.a;
    }



};


int main()
{
    A  obj(5);

    obj.fact();

    A oj(obj);
    oj.fact();
}
