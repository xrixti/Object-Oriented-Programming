 #include<iostream>

using namespace std;

class Area{
  private:
    int length,breadth;

  public:

    Area()
    {
        length=5;
        breadth=2;
    }


  Area(int l,int b)
  {
      length=l;
      breadth=b;
  }

  void getLength()
  {
      cout<<"Length:"<<length<<endl;
      cout<<"Breadth:"<<breadth<<endl;
  }

  int areaCalculation()
  {
      return length*breadth;
  }

    void displayArea(int temp)
   {
       cout<<"Area:"<<temp<<endl;
   }



};


int main()
{
    Area  a(2,2);

    a.getLength();
  a.areaCalculation();

  int t;
  t=  a.areaCalculation();
   a.displayArea(t);

 Area  b;

    b.getLength();
  b.areaCalculation();

  int p;
  p=  b.areaCalculation();
   b.displayArea(p);

}

