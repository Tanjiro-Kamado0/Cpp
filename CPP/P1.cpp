#include<iostream> //Change this to "#include<iostream.h> and also add #include<conio.h>"
using namespace std; // remove this

int main() //change "int" to "void"
{
    int A[10],i,j,temp;
    cout<<"Enter number in array"<<endl;
    for(i = 0; i<10; i++)
    {
        cin>>A[i];
    }
    cout<<"The sorted array is "<<endl;
    for(i = 0; i<10; i++)
    {
        for(j = 0; j < i; j++)
        {
            if(A[i] < A[j])
            {
                temp = A[i];
                A[i] = A[j];
                A[j] = temp;
            }
        }
    }
    for(i = 0; i<10; i++)
    {
        cout<<A[i]<<endl;
    }
}