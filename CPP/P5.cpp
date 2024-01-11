#include<iostream>
using namespace std;


class ratio
{
    private:
    int num,den;

    public:
    void assign(int a, int b)
    {
        num = a;
        den = b;
    }
    void convert()
    {
        cout<<"Entered ratio :"<<double(num/den)<<endl;
    }
    void invert()
    {
        int temp;
        temp = num;
        num = den;
        den = temp;
    }
    void display()
    {
        cout<<"The inverted ratio is "<<num<<"/"<<den<<endl;
    }
};

int main()
{
    ratio r;
    r.assign(22,7);
    r.convert();
    r.invert();
    r.display();
}