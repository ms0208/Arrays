// Count Inversion.
#include<iostream>
using namespace std;
int CI(int a[],int n)
{
    int count_inversion = 0;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                count_inversion++;
            }
        }
    }
    return count_inversion;
}
int main()
{
    int a[10],n;
    cout<<"Enter the size of array\n";
    cin>>n;
    cout<<"Enter the array\n";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"The number of count inversion : "<<CI(a,n);
}