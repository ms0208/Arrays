// Maximum and minimum in array
#include<bits/stdc++.h> // header file of c++ STL function
using namespace std;

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
    sort(a,a+n); // sort() is a c++ STL function
    cout<<"The minmum element of array is : "<<a[0];
    cout<<"\n";
    cout<<"The maximum element of array is : "<<a[n-1];

    return 0;
}
