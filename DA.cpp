// Duplicate array in N+1 integer.
#include<iostream>
using namespace std;
void DuplicateArray(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        if(a[i]==a[i+1])
        {
            cout<<"Duplicate Array is: "<<a[i];
            break;
        }
    }
}
int main()
{
    int a[10],size;
    cout<<"Enter the size of Array\n";
    cin>>size;
    cout<<"Enter the Array\n";
    for(int i=0;i<size;i++)
    {
        cin>>a[i];
    }
    DuplicateArray(a,size);
    return 0;
}