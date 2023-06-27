#include <iostream>
using namespace std;
class A
{
    int a;

public:
    A(int x)
    {
        a = x;
    }
    void display()
    {
        cout << "value of a : " << a;
    }
};

int main()
{
    A aa(5);

    aa.display();
}