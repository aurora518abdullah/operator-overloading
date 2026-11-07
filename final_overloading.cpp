#include<bits/stdc++.h>
using namespace std;

class add
{
public:
    int a;

    add operator+(add ob)
    {
        add temp;
        temp.a=0;
        cout<<temp.a<<" "<<ob.a<<endl;
        temp.a = a + ob.a;
        return temp;
    }

    add operator-(add ob)
    {
        add temp;
        cout<<temp.a<<" "<<ob.a<<endl;
        temp.a = a - ob.a;
        return temp;
    }

    add operator*(add ob)
    {
        add temp;
        cout<<temp.a<<" "<<ob.a<<endl;
        temp.a = a * ob.a;
        return temp;
    }

    add operator/(add ob)
    {
        add temp;
        cout<<temp.a<<" "<<ob.a<<endl;
        temp.a = a / ob.a;
        return temp;
    }
    void operator++(int)
    {
        cout<<a<<endl;
        
        cout<<a++<<endl;
    }
     void operator--()
    {
        cout<<a<<endl;
        --a;
        cout<<a<<endl;
    }
};

int main()
{
    add o1,o2,o3,o4,o5,o6,o7;

    o1.a=10;
    o2.a=4;
    o3.a=1;
    o5.a=9;
    o4.a=15;
    o6.a=9;

    o7 = ((((o1+o2-o3)*o4)/o5));
    cout << o7.a<<endl<<endl;
    o1++;
    --o1;

    return 0;
}