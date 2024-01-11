#include<iostream>
using namespace std;

void swap(int *, int *);
int main()
{
    int a,b;
    cout<<"Enter two number"<<endl;
    cin>>a>>b;
    cout<<"Befor swapping "<<endl;
    cout<<"Var1 :"<<a<<"\t Var2 :"<<b<<endl;
    swap(&a, &b);
    cout<<"After Swapping"<<endl;
    cout<<"Var1 :"<<a<<"\t Var2 :"<<b;
}
void swap(int *c , int *d)
{
    int temp;
    temp = *c;
    *c = *d;
    *d = temp;
}
