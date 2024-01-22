// Merge two array without space.
#include <bits/stdc++.h>
using namespace std;
/*
void merge(int ar1[], int ar2[], int m, int n) 
{
    for (int i = n - 1; i >= 0; i--) {  
        int j, last = ar1[m - 1]; 
        for (j = m - 2; j >= 0 && ar1[j] > ar2[i]; j--) 

            ar1[j + 1] = ar1[j];
 
        // If there was a greater element
        if (last > ar2[i]) {
            ar1[j + 1] = ar2[i];
            ar2[i] = last;
        }
    }
}*/
void merge(int ar1[],int ar2[],int n,int m)
{
    for(int j=0;j<m;j++)
    {
        for(int i=0;i<n;i++)
        {
            if(ar1[i]>ar2[j])
            {
                swap(ar1[i],ar2[j]);
                sort(ar2,ar2+m);
            }
        }
    }
}

 
// Driver code
int main()
{
    int ar1[] = { 9,3,1,5,1 };
    int ar2[] = { 1,0,4,0,1 };
    int m = sizeof(ar1) / sizeof(ar1[0]);
    int n = sizeof(ar2) / sizeof(ar2[0]);
    merge(ar1, ar2, m, n);
 
    cout << "After Merging \nFirst Array: ";
    for (int i = 0; i < m; i++)
        cout << ar1[i] << " ";
    cout << "\nSecond Array: ";
    for (int i = 0; i < n; i++)
        cout << ar2[i] << " ";
    return 0;
}