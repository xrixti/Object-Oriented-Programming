//make multiply using passing and returning object
#include<iostream>
using namespace std;
class myClass{
private:
int a,b,c;
public:

void getter(){
    cout<<"Enter 3 numbers: ";
    cin>>a>>b>>c;
}

myClass Multiplier(myClass q,myClass w,myClass e){
myClass tempObj;
tempObj.a=q.a*w.a*e.a;
tempObj.b=q.b*w.b*e.b;
tempObj.c=q.c*w.c*e.c;
return tempObj;
}

void printer(myClass abc){
    cout<<"The multiple is a="<<abc.a<<" b="<<abc.b<<" c="<<abc.c<<endl;
}



};
int main(){
myClass ob1,ob2,ob3,result;
ob1.getter();
ob2.getter();
ob3.getter();
result.printer(result.Multiplier(ob1,ob2,ob3));




return 0;
}
