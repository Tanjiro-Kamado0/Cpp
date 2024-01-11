#include<iostream>
#include<stdio.h>
#include<string>
using namespace std;
int main()
{
    char s[100],temp;
    cout<<"Enter the string"<<endl;
    gets(s);
    int len = strlen(s);
    int l = len - 1;
    for(int i = 0; i<len/2; i++)
    {
        temp = s[i];
        s[i] = s[l];
        s[l] = temp;
        l--;
    }
    cout<<"Reverse String is "<<s;
}