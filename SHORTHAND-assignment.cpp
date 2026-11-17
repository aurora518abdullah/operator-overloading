#include<bits/stdc++.h>
using namespace std;

class Number {
public:
    int a;

    Number(int x) {
        a=x;
    }

    void operator+=(Number ob)
    {
        a+=ob.a;
    }
    Number operator-=(Number ob)
    {
        a-=ob.a;
        return *this;
    }

    int operator*=(Number ob)
    {
        a*=ob.a;
        return a;
    }
};

int main() {
    Number n1(10),n2(20),n3(5),n4(2),n5(12);

    n1+=n2;
    n3-=n5;
    n4*=n3;


    cout<<endl<<n1.a<<endl;
    cout<<endl<<n3.a<<endl;
    cout<<endl<<n4.a<<endl;

    return 0;
}
