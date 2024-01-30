// sub array sum is zero.
#include<iostream>
using namespace std;

int subarraysum(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {                            // 4 2 -3 1 6 
        int sum = arr[i];        // sum = arr[0] = 4
        if(sum == 0)            //  sum == 0 -> true but condition false.
        {                       // sum = arr[1] = 2 
            return true;
        }
        for(int j = i+1 ; j<n;j++) // j-> 1 , a[j] = 2
        {
            sum += arr[j];     // 4+2 = 6 , j->2  6 - 3 = 3 ,j-> 3  3+1 = 4 , j->4 = 4+6 = 10
            if(sum==0)         // j-> 2 , 2 - 3 = -1 , j->3 = 1-1 = 0.
            {
                return true;
            }
        }
    }
    return false;
}

int main()
{
    int a[10],n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    if(subarraysum(a,n))
    {
    cout<<"Sum of zero in subarray is exist\n";
    }
    else{
        cout<<"Not exist\n";
    }
    return 0;
}
