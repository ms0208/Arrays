// Rain water trap problem.
#include <bits/stdc++.h>
using namespace std;
int maxWater(int arr[], int n)  // 3 0 2  = 2
{ 
    // To store the maximum water 
    // that can be stored 
    int res = 0; 
  
    // For every element of the array 
    for (int i = 1; i < n - 1; i++) {  // a[i] = 0
  
        // Find the maximum element on its left 
        int left = arr[i]; // left = 0
        for (int j = 0; j < i; j++) // a[j] = 3
            left = max(left, arr[j]);  // left = max(0,3) = 3
  
        // Find the maximum element on its right 
        int right = arr[i]; // right = 0
        for (int j = i + 1; j < n; j++)  // a[j] = 2
            right = max(right, arr[j]);  // right = (0,2) = 2
  
        // Update the maximum water 
        res = res + (min(left, right) - arr[i]);  // 0 + 2 - 0 = 2
    } 
  
    return res; 
}
int main()
{
    int a[10], n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << maxWater(a, n);
}