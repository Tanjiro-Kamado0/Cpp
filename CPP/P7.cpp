#include<iostream>
using namespace std;

class ratio
{
    public:
    void print()
    {
        cout<<endl<<"The object is alive"<<endl;
    }
    ratio()
    {
        cout<<"The Object is born"<<endl;
    }
    ~ratio()
    {
        cout<<"The Object is dead"<<endl;
    }
};
int main()
{
    ratio r;
    r.print();
}