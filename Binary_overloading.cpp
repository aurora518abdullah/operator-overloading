
#include<bits/stdc++.h>
using namespace std;

class number{
public:
    int a;

    number(int a){
        this->a=a;
    }

    number operator+(number b){
        return number(a+b.a);
    }

    number operator-(number b){
        return number(a-b.a);
    }

    number operator*(number b){
        return number(a*b.a);
    }

    number operator/(number b){
        return number(a/b.a);
    }

    void display(){
        cout<<a<<endl;
    }
};

int main(){
    number n1(20), n2(10);

    number n3=n1+n2;
    number n4=n1-n2;
    number n5=n1*n2;
    number n6=n1/n2;

    cout<<"For +: ";
    n3.display();

    cout<<"For -: ";
    n4.display();

    cout<<"For *: ";
    n5.display();

    cout<<"For /: ";
    n6.display();

    return 0;
}
