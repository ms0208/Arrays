// Largest sum of contiguose sub-array.
// Kadane's algorithm
#include<bits/stdc++.h>
using namespace std;
int maxsubarray(int arr[],int size)
{                                  // -1,-2,4
    int max_sum = INT_MIN;// -infinite. max_sum = -infinte
    int curr_sum = 0; // curr_sum = 0
    for(int i=0;i<size;i++)
    {                                  // i = 0
        curr_sum = curr_sum + arr[i]; // c_s = 0 + a[0] = 0+(-1) = -1.
        if(curr_sum > max_sum)// c-s>m_s = m_s = -1.
        {                       //  c_s = 0 // value = -v
            max_sum = curr_sum; // i=1
        }                       // c_s = 0 + a[1] = (0)+(-2) = -2
        if(curr_sum <0)         // c_s(-1) < m_s(-1) {false}
        {                       // c_s = 0;
            curr_sum = 0;       // i=2
        }                       // c_s = 0 + a[2] = 0 + 4 = 4
    }                           // c_s>m_s => m_s = 4.
    return max_sum;             // return m_s = 4.
}
int main()
{
    int a[100] , size ;
    cout<<"Enter the size of array\n";
    cin>>size;
    cout<<"Enter the array\n";
    for(int i=0;i<size;i++)
    {
        cin>>a[i];
    }
    int max_sum = maxsubarray(a,size);
    cout<<"Maximum sub-array: "<<max_sum;
    return 0;
}