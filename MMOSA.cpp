//Maximum multipilcation of a sub array.
#include<bits/stdc++.h>
using namespace std;
int multisubar(int a[], int n)
{
    int i,j; // 6 ,-3,-10,0,-3 // 6,0,-1,2,3
    int result = a[0];
    for(i=0;i<n;i++)
    {
        int mul = a[i];
        for(j=i+1;j<n;j++)
        {
            result = max(result,mul);
            mul*=a[j];
        }
          result = max(result,mul);
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
    cout<<multisubar(a,n);
}