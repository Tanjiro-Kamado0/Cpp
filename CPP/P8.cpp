#include<iostream>
using namespace std;

class student
{
    protected:
    int roll_no;
    public:
    void getnumber()
    {
        cout<<"Enter the roll no. of the student"<<endl;
        cin>>roll_no;
    }
    void putnumber()
    {
        cout<<"The Entered Roll no is "<<roll_no<<endl;
    }

};

class test: public student
{
    protected:
    int mark1, mark2;

    public:
    void getmarks()
    {
        cout<<"Enter the marks of 1st subject"<<endl;
        cin>>mark1;

        cout<<"Enter the marks of 2nd subject"<<endl;
        cin>>mark2;
    }
    void putmarks()
    {
        cout<<"Entered marks of 1st subject is "<<mark1<<endl;
        cout<<"Entered marks of 2nd subject is "<<mark2<<endl;
    }
};

class sport
{
    protected:
    int Smark;
    public:
    void getSmark()
    {
        cout<<"Enter the marks of sports"<<endl;
        cin>>Smark;
    }
    void putSmarks()
    {
        cout<<"Entered marks of sports are "<<Smark<<endl;
    }
};

class result: public test,public sport
{
    protected:
    int total;
    public:
    void display()
    {
        
        total = mark1 + mark2 + Smark;
        cout<<"The total marks are "<<total;
    }
};

int main()
{
    result r;
    r.getnumber();
    r.putnumber();
    r.getmarks();
    r.putmarks();
    r.getSmark();
    r.putSmarks();
    r.display();
}