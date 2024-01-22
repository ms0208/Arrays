
// Array in one side negative.
// Approach 1 . Sort the element complexety : 0(nlogn)
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[10],n;
    cout<<"Enter the size of array\n";
    cin>>n;
    cout<<"Enter the Array\n";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<"\t";
    }
    return 0;
}

/*
partition process of quicksort. // O(n)
void rearrange(int arr[], int n) 
{ 
    int j = 0;                 
    for (int i = 0; i < n; i++) { 
        if (arr[i] < 0) { 
            if (i != j) 
                swap(arr[i], arr[j]); 
            j++; 
        } 
    } 
}
void printArray(int arr[], int n) 
{ 
    for (int i = 0; i < n; i++) 
        printf("%d ", arr[i]); 
} 
  
// Driver code 
int main() 
{ 
    int arr[] = { -1, 2, -3, 4, 5, 6, -7, 8, 9 }; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    rearrange(arr, n); 
    printArray(arr, n); 
    return 0; 
}

// -5 3 -2 0 -1  
j = 0 , a[j] = -5 , a[i] =-5
condition a[i] = all negatives,
if i != j swap. case 1 = no swap i =0 , j =0 if i is -ve.
if i == j no swap.
*/