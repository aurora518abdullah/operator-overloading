#include<bits/stdc++.h>
using namespace std;

class Product
{
public:
    int productID, quantity;
    Product(int q)
    {
        productID = 0;
        quantity = q;
    }
    void operator++()
    {
        ++quantity;
    }
    void display()
    {
        cout << quantity << endl;
    }
};

int operator+(Product a,Product b)
{
    int temp;
    temp=a.quantity+b.quantity;
    return temp;
}

int main()
{
    int a,b;
    cin>>a>>b;
    Product n1(a),n2(b);
    int k=n1+n2;
    cout<<"by friend function the sum: " << k<<endl;
    Product n3(k);
    ++n3;
    n3.display();

    return 0;
}
