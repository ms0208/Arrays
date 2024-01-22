#include <bits/stdc++.h>
using namespace std;

/* Function prints union of arr1[] and arr2[]
m is the number of elements in arr1[]
n is the number of elements in arr2[] */
void printUnion(int arr1[], int arr2[], int m, int n)
{
   int i = 0, j = 0;
   while (i < m && j < n) {  // m = 3
     if (arr1[i] < arr2[j])  // a1[] = 1 2 3 // after sort 
      cout << arr1[i++] << " "; // n = 4
                                // a2[] = 1 2 3 4 // after sort 
     else if (arr2[j] < arr1[i]) // a1[0] = a2[0]  print -> = 1  = a2[0]
       cout << arr2[j++] << " "; // a2[1] = 2 = a1[1] = 2  print-> 2  = a2[1]
                                 // a2[2] = 3 > a2[2] = 3  print-> 3  = a2[2]
     else {
       cout << arr2[j++] << " ";
       i++;
     }
  }

  /* Print remaining elements of the larger array */
  while (i < m)
   cout << arr1[i++] << " "; // full travel

  while (j < n)              // a2[3] = print -> 4 
   cout << arr2[j++] << " ";
}

void printIntersection(int arr1[], int arr2[], int m, int n)
{
   int i = 0, j = 0;
   while (i < m && j < n) {  // n = 3
    if (arr1[i] < arr2[j])  //  1 2 3
      i++;                    //  n = 4
    else if (arr2[j] < arr1[i]) // 1 2 3 4
      j++;                          //  print -> 1 i->1 , j->1 , print-> 2 , i->2 , j-2
    else /* if arr1[i] == arr2[j] */ // print -> 3 
    {
       cout << arr2[j] << " "; 
       i++; 
       j++; 
     } 
 } 
} 
/* Driver program to test above function */ 
   int main()
 { 
    int m, n; 
    cin>>m;

   int arr1[m];

   for(int i=0; i<m; i++) 
    cin>>arr1[i];
    sort(arr1,arr1+m);
   cin>>n;

   int arr2[n];

   for(int i=0; i<n; i++) cin>>arr2[i];
   sort(arr2,arr2+n);

   // Function calling
   cout<<"Union : ";
   printUnion(arr1, arr2, m, n);


   cout<<"\nInteraction ";
   printIntersection(arr1, arr2, m, n);

   return 0;
}