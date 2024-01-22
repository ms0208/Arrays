// Reverse array 
#include<iostream>
using namespace std;

int main()
{
    int a[10];
    cout<<"Enter the Array:\n";
    for(int i=0;i<10;i++)
    {
    cin>>a[i];
    }
    cout<<"Revese array is\n";
    for(int i=9;i>=0;i--)
    {
        cout<<a[i]<<"\t";
    }
    return 0;
}

