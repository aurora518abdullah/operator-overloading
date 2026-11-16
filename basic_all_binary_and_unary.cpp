
#include<bits/stdc++.h>
using namespace std;

class add
{
public:
    int num;

    add()
    {
        num=0;
    }

    add(int n)
    {
        num=n;
    }

    add operator+(add ob)
    {
        cout<<"\ncalculate: "<<num<<" and "<<ob.num<<endl;

        add temp;
        temp.num=num+ob.num;
        return temp;
    }

    int operator-(add ob)
    {
        cout<<"\ncalculate: "<<num<<" and "<<ob.num<<endl;

        int temp;
        temp=num-ob.num;
        return temp;
    }

    void operator*(add ob)
    {
        cout<<"\ncalculate: "<<num<<" and "<<ob.num<<endl;

        num=num*ob.num;
        cout<<"mul: "<<num;
    }

    add operator++()
    {
        add k;
        k.num=++num;
        return k;
    }

    void operator--(int)
    {
        num--;
    }
};

int main()
{
    add o1(10),o2(20),o3(30),o4(40),o5,k;

    o5=o1+o2+o3;

    cout<<"The sum of 1,2,3 is: "<<o5.num<<endl;

    int mun=o3-o1;

    cout<<"The (-) of the operator 3 and 2 is: "<<mun<<endl;

    o4*o1;

    cout<<endl<<"Before -- of: "<<o1.num<<endl;

    o1--;

    cout<<endl<<"after -- of: "<<o1.num<<endl;

    cout<<endl<<"Before ++ of: "<<o4.num<<endl;

    ++o4;

    cout<<endl<<"after ++ of: "<<o4.num<<endl;

    k=++o2;

    cout<<"Return the unary operator: "<<k.num<<endl;
}
