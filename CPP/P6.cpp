#include<iostream>
using namespace std;

class circle
{
    private:
    float x,y,r,a,cir;
    public:
    circle()
    {
        cout<<"This is a default constructor"<<endl;
        x= 4.3;
        y= 5.5;
    }
    void getdata()
    {
        cout<<"Enter the radius"<<endl;
        cin>>r;
    }
    void area()
    {
        a = 3.14 * r * r;
    }
    void circum()
    {
        cir= 2 * 3.14 * r;
    }
    void putdata()
    {
        cout<<"The X,Y coordinates are "<<x<<"\t"<<y<<endl;
        cout<<"The area of the circle is "<<a<<endl;
        cout<<"The circumference of the circle is "<<cir;
    }
    
};
int main()
{
    circle c;
    c.getdata();
    c.area();
    c.circum();
    c.putdata();
}