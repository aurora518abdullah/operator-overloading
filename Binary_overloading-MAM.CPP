
#include <iostream>
using namespace std;

class Number
{
    int num;

public:
    Number(int n = 0)
    {
        num = n;
    }

    Number operator+(Number obj)
    {
        Number temp;
        temp.num = num + obj.num;
        return temp;
    }

    void display()
    {
        cout << "Sum = " << num << endl;
    }
};

int main()
{
    Number ob1(10), ob2(20), ob3;

    ob3 = ob1 + ob2;

    ob3.display();

    return 0;
}
