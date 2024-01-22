// Dutch national Flag problem
/*
// its is also used of nth numbers .
Algorithm:-
   array = [2,1,0,2]
   => [ 2  1  0  2]
inital mid = 0 , low = 0 , high = 2
if a[mid] == 2                         if a[mid] == 0 swap(a[low++],a[mid++]);
swap(a[mid],a[high])
high =  high - 1;                       if a[mid] == 1 mid++;

=> [ 2 1 0 2]
mid = 2 , low = 2 , high = 0
if a[mid] == 2
swap(a[mid],a[high])
high = high - 1;
 => [ 0 1 2 2] // sort
*/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void sort012(int a[], int n)
{
    int mid = 0, low = 0, high = n - 1;
    while (mid <= high)
    {
        switch (a[mid])
        {
        case 0:
        {
            swap(a[low++], a[mid++]);
            break;
        }
        case 1:
        {
            mid++;
            break;
        }
        case 2:
        {
            swap(a[mid], a[high--]);
            break;
        }
        }
    }
}
    int main()
    {
        int a[10], n;
        cout << "Enter the size of array:\t";
        cin >> n;
        cout << "Enter the array only 0 ,1 , 2\n";
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort012(a, n);
        cout << "Array after sorted\n";
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << "\t";
        }
        return 0;
    }