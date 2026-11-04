#include<bits/stdc++.h>
using namespace std;
class Number{
public:
    int a;
    Number(int a){
        this->a=a;
    }

    void operator++(){
        ++a;
    }

    void operator++(int){
        a++;
    }
     void operator--(int){
        a--;
    }

    void display(){
        cout<<a<<endl;
    }
};

int main(){
    Number n1(10), n2(20),n3(30);

    ++n1;
    n2++;
    n3--;

    cout<<"Prefix: ";
    n1.display();

    cout<<"Postfix: ";
    n2.display();

    cout<<"Postfix -- :";
    n3.display();

    return 0;
}
