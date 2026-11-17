#include<bits/stdc++.h>
using namespace std;
class Product
{
public:
    int productID, quantity;
    Product(int q)
    {
        productID=0;
        quantity=q;
    }
    Product operator++()
    {
        ++quantity;
        return *this;
    }
    bool operator>(Product a)
    {
        return quantity>a.quantity;
    }
    Product operator+(Product b)
    {
        Product temp(0);
        temp.quantity=quantity+b.quantity;
        return temp;
    }
    void display()
    {
        cout<<quantity<<endl;
    }
};
int main()
{
    int a,b;
    cin>>a>>b;
    Product n1(a),n2(b);
    if(n1>n2)
        cout<< "The 1st object is big and it is: "<<n1.quantity<<endl;
    else if(n2>n1)
        cout<< "The 2nd object is big and it is: "<<n2.quantity<<endl;
    else
        cout<<"Both objects are equal."<<endl;
    Product n3=n1+n2;
        cout << "The sum: ";
    n3.display();
    ++n3;
    n3.display();

    return 0;
}
