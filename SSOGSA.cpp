// Smallest subarray with greater sum.
  
# include <iostream>
using namespace std;
 
// Returns length of smallest subarray with sum greater than x.
// If there is no subarray with given sum, then returns n+1
int smallestSubWithSum(int arr[], int n, int x)
{
    //  Initialize length of smallest subarray as n+1
     int min_len = n + 1;
 
     // Pick every element as starting point
     for (int start=0; start<n; start++)
     {
          // Initialize sum starting with current start
          int curr_sum = arr[start];
 
          // If first element itself is greater
          if (curr_sum > x) return 1;
 
          // Try different ending points for current start
          for (int end=start+1; end<n; end++)
          {
              // add last element to current sum
              curr_sum += arr[end];
 
              // If sum becomes more than x and length of
              // this subarray is smaller than current smallest
              // length, update the smallest length (or result)
              if (curr_sum > x && (end - start + 1) < min_len)
                 min_len = (end - start + 1);
          }
     }
     return min_len;
}
 
/* Driver program to test above function */
int main()
{
    int arr1[] = {1, 4, 45, 6, 10, 19};
    int x = 51;
    int n1 = sizeof(arr1)/sizeof(arr1[0]);
    int res1 = smallestSubWithSum(arr1, n1, x);
    (res1 == n1+1)? cout << "Not possible\n" :
                    cout << res1 << endl;
    return 0;
}
/*
arr = [1,4,45,6,10,19]
i= 0 min length > n+1
a[i]>x = return 1 
a[i]{
    a[j] = i+1 -> n , cursum+=arr[j] 
    if(cursum > x && (j-i+1) < minlengh)
      minlength = (j-i+1).
}
a[i] = 1 not return because x = 51
a[j] = 4 cursum+=arr[1] = 4+1
a[j] = 45 cursum+=arr[2] = 4+45+1 = 50
a[j] = 6 cursum+=arr[3] = 50+6 = 56
minlength = (3-0+1) = 4
at i = 1
a[i] = 4
a[j] = 45 cursum+=arr[2] = 45+4 = 49
a[j] = 6 cursum+=arr[3] = 49+6 = 55
minlength = (3-1+1) = 3.Ans

*/