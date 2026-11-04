#include<bits/stdc++.h>
using namespace std;
class num{
public:
    int a;
    num(int a)
    {
        this->a = a; 
    }
    num()
    {
        this->a = 0;
    }   
    num operator+(num ob)
    {
        int temp;
        cout<<this->a<<" "<<ob.a<<endl;
        temp = this->a + ob.a;
        return num(temp);
    }
    num operator-(num ob)
    {
        int temp;
        cout<<this->a<<" "<<ob.a<<endl;
        temp = this->a - ob.a;
        return num(temp);
    }
    
    num operator++(int)
    {
        this->a++;
        return *this;
    }
};
int main()
{
    num n1(5), n2(10),n3(99),n4(100),n5;
    n5 = n1+n2-n3+n4++;
    cout<<n5.a<<endl;
    return 0;
}