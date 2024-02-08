// Given Sum of triple array 
#include<bits/stdc++.h>
using namespace std;

bool tripleS(int a[],int n,int sum)
{
    for(int i=0;i<n-2;i++) // a[0]
    {
        for(int j = i+1;j<n-1;j++) // a[1]
        {
            for(int k=j+1;k<n;k++) //a[2]
            {
                if(a[i]+a[j]+a[k] == sum) // if (a[0]+a[1]+a[2])
                {
                    cout<<"Triple array is: \n"<<a[i]<<","<<a[j]<<","<<a[k];
                    return true;
                }
            }
        }
    }
    return false;

}
int main()
{
    int a[10],n,sum,i;
    cin>>n;
    cin>>sum;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    tripleS(a,n,sum);
    return 0;
}
