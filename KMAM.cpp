// kth maximum and minimum in c++
#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n,a[10],k;
    cout<<"Enter the size of array\n"; // n = 6
    cin>>n;
    cout<<"Enter the Array\n"; // 6 5 4 3 2 1
    for(int i=0;i<n;i++)
    {
        cin>>a[i]; 
    }
    cout<<"Enter the Kth element is\n"; // 3
    cin>>k;
    sort(a,a+n);  // After sort 1 2 3 4 5 6
    cout<<"Kth maximum element is : "<<a[n-k];  // a[6-3] = a[3]
    cout<<"\n";
    cout<<"Kth minmum element is : "<<a[k-1];  // a[2]
}