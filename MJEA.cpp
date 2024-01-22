// minimum no of jump to reach end of  array.
#include<bits/stdc++.h>
using namespace std;
int minjump(int arr[],int l,int h)
{
    if(h==l)
    {
        return 0;
    }
    if(arr[l]==0)
    {
    return INT_MAX;
    }
    int min = INT_MAX;                  // 1,3,5,4,3
    for(int i=l+1;i<=h && i <= l + arr[l];i++) // i = 1;i<=4 && i<= 0 + a[0] = 0 + 1 = 1// move only 1 step.
    {
       int jump =  minjump(arr,i,h);// l = i = 2 , h = 4 // l = i = 3// l = i = 4 =>return 0 => l =h.
          if (jump != INT_MAX && jump + 1 < min) 
            min = jump + 1; 
    }
    return min;
}
int main()
{
    int a[10],l,h,n;
    cout<<"Enter the size of array\n";
    cin>>n;
    cout<<"Enter the array\n";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int jump = minjump(a,0,n-1);
    cout<<jump;

    return 0;
}