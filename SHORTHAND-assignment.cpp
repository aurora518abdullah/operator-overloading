#include<bits/stdc++.h>
using namespace std;

class Number {
public:
    int a;

    Number(int x) {
        a = x;
    }

    void operator+=(Number ob) {
        a += ob.a;
    }
    void operator*=(Number ob) {
        a *= ob.a;
    }
};

int main() {
    Number n1(10), n2(20),n3(5), n4(2);

    n1 += n2;
    n4 *= n3;
    cout << n1.a << endl;
    cout << n4.a << endl;

    return 0;
}