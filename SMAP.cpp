// Steps to make string Palidrome.
#include<iostream>
using namespace std;
int minops(int a[],int n)
{
    int result = 0;
    int i,j;
    for( i=0,j=n-1;i<=j;)
    {
        if(a[i]==a[j])
        {
            i++;
            j--;
        }
        else if(a[i]>a[j])
        {
            j--;
            a[j]+=a[j+1];
            result++;
        }
        else 
        {
            i++;
            a[i]+=a[i-1];
            result++;
        }
    }
    return result;
}
int main()
{
    int a[10],n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<minops(a,n);
}