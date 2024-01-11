#include<iostream>
using namespace std;
class person
{
    public:
    virtual void print()
    {
        cout<<"The name of a person is BOB \n";
    }
};
class student: public person
{
    public: 
    void print()
    {
        cout<<"The name of student is TOM";
    };
};
int main()
{
    person *p;
    person p1;
    student s1;
    p =  &p1;
    p -> print();
    p = &s1;
    p -> print();
};