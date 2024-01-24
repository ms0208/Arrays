// pairs greater sum of array in a given number.
#include<iostream>
using namespace std;
int main()
{
    int a[10],n,k,count = 0;
    cout<<"Enter the size of array\n";
    cin>>n;
    cout<<"Enter the array\n";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter the number of a sum of given pair\n";
    cin>>k;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if((a[i]+a[j])==k)
            {
                count++;
            }
        }
    }
    cout<<"The number of pair is: "<<count;
}