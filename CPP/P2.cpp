#include<iostream> //Change this to "#include<iostream.h> and also add #include<conio.h>"
using namespace std; // remove this

int main() //change "int" to "void" 
{
    
    int a[10],i,j,k,item,beg = 0,mid,end = 10;
    cout<<"Enter Numbers in array"<<endl;
    for(i = 0; i<10; i++)
    {
        cin>>a[i];
    }
    cout<<"Enter the number you want to find"<<endl;
    cin>>item;
    mid = (beg+end)/2;
    while(beg <= mid && item != a[mid])
    {
        if(item < a[mid])
        {
            end = mid -1;
        }else
        {
            beg = mid +1;
        }
        mid = (beg + end)/2;
    }
    if (item == a[mid])
    {
        cout<<"The item is found at "<<mid<<" postion";
    }else{
        cout<<"Not Found";
    }
}