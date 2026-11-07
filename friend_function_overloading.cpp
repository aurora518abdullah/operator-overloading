#include<bits/stdc++.h>
using namespace std;

class Number {
private:
    int a;

public:
    Number(int x) {
        a = x;
    }

    friend Number operator+(Number ob1, Number ob2);

    void display() {
        cout << a << endl;
    }
};

Number operator+(Number ob1, Number ob2) {
    Number temp(0);
    temp.a = ob1.a + ob2.a;
    return temp;
}

int main() {
    Number n1(10), n2(20);

    Number n3 = n1 + n2;

    n3.display();

    return 0;
}