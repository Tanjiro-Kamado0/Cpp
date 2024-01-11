#include <iostream>
using namespace std;

class best
{
public:
    int a;
    void get();
    void show();
    ratio operator+(ratio r);
    ratio operator/(ratio r);
};

void ratio::get()
{
    cout << "Enter the number for a " << endl;
    cin >> a;
}
void ratio::show()
{
    cout << "The entered value is " << a << endl;
}
ratio ratio::operator+(ratio r)
{
    ratio temp;
    temp.a = a + r.a;
    return temp;
}
ratio ratio::operator/(ratio r)
{
    ratio temp;
    temp.a = a / r.a;
    return temp;
}

int main()
{
    ratio x, y, z;
    x.get();
    y.get();
    cout << "\n x object";
    x.show();
    z = x + y;
    cout << "After the x+y" << endl;
    z.show();
    z = x / y;
    cout << "After the x/y" << endl;
    z.show();
}