 #include<iostream>

using namespace std;


class First{
int x;
public:
  int set()
  {

     x=89;



  }


    friend void Reverse (First  a );
};
 void Reverse(First a)
  {
      int r=0,d;
      int n=a.x;
     while(n!=0) {

      d=n%10;
     r=(r*10)+d;
     n/=10;
     }
     cout<<r;
  }
  int main(){
  First ob;
  ob.set();
  Reverse(ob);

  }
