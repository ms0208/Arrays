//  minimise the hight.
// different between max and min hight in array
#include<bits/stdc++.h>
using namespace std;

int MH(int arr[],int size,int k)
{
    int mh;
    sort(arr,arr+size); // 1,10,15,20,30
    mh = arr[size-1] - arr[0]; //30-1 = 29
    int tempmax,tempmin;
    tempmax = arr[size-1]; // 30
    tempmin = arr[0]; // 1
    for(int i=1;i<size;i++) // 
    {
        if(arr[i] - k < 0)   // arr[1] = 10 - 6  = 4 N/C
            continue;
        tempmin = min(arr[0] + k , arr[i] - k); // i=1 (1+6,10-6) = 4 // i=2 (7,15-6) = 7 // i=3 (7,14) => 7 // i=4 (7,24) => 7
        tempmax = max(arr[i-1] + k , arr[size-1] - k ); // (10+6,30-6) =(16,24) = 24 // i=2 (15+6,24) = 24 // i=3 (26,24) = 26

        mh = min(mh, tempmax - tempmin); // 24- 7 = 17  //  17 //  17 // 19
    }
    return mh;
}
int main()
{
    int a[10],size,k,mh;
    cout<<"Enter the size of array\n";
    cin>>size;
    cout<<"Enter the integer value\n";
    cin>>k;
    cout<<"Enter the array\n";
    for(int i=0;i<size;i++)
    {
        cin>>a[i];
    }
    mh = MH(a,size,k);
    cout<<mh;
    return 0;
}