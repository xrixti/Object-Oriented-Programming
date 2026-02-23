#include<iostream>

using namespace std;

class A {
protected:
    int p;

public:
    void set_p  (int value) {
        p = value;
    }
};

class B : protected A {
public:
    int q;


    void set_q(int x){
        set_p(10);
    q=x;

    }


    int sum()
    {
        int s=p+q;

        cout<<s;
    }

};

int main() {

    B  oj;
     oj.set_q(6);
     oj.sum();

    return 0;
}
