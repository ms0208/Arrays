//  Rotate/cyclic  a array in c++
#include<bits/stdc++.h>
using namespace std;          // step1 ; assign last element into first element
void cyclic(int a[], int n)   // step2 : arr[i] = arr[i-1] => arr[3] = arr[4]; 
{                               // traverse in opposite.
    int le = a[n-1];
    for(int i = n-1; i>0;i--)
    {
        a[i] = a[i-1];
    }
    a[0] = le;
}
int main()
{
    int a[10],n,n2;
    cout<<"Enter the size of array\n";
    cin>>n;
    cout<<"How many cyclic you want\n";
    cin>>n2;
    cout<<"Enter the array\n";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n2;i++)
    {
    cyclic(a,n);
    }
    cout<<"Array after cyclic "<<n2<<" rotate\n";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<"\t";
    }
}
/* Method 

   {
        //1 2 3 4 5
    // store the last element in a variable
    int last_el = arr[n - 1]; last = 5
    for (int i = n - 1; i > 0; i--) = traverse 5,4,3,2,1
        arr[i] = arr[i - 1]; // arr[4] = arr[3] {1,2,3,4,4} -> arr[3] = arr[2] =>{1,2,3,3,4}
         , arr[2] = arr[1] {1,2,2,3,4}, arr[1] = arr[0] {1,1,2,3,4}
            // assign the last element to first element
    arr[0] = last_el; arr[0]  = 5 = {5,1,2,3,4}

*/