// common elements in 3 sorted array.
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void intersection (int a1[],int a2[],int temp[],int m,int n,int& k)
{
    int i = 0 , j = 0;
    while(i < m && j < n)
    {
        if(a1[i] < a2[j])
        {
            i++;
        }
        else if(a1[i] > a2[j])
        {
            j++;
        }
        else 
        {
            temp[k] = a1[i];
            i++;
            j++;
            k++;
        }
    }
}
int main()
{
    int n1,n2,n3,a[10],b[10],c[10];
    cout<<"Enter the size of array1\n";
    cin>>n1;
    cout<<"Enter the size of array2\n";
    cin>>n2;
    cout<<"Enter the size of array3\n";
    cin>>n3;
    for(int i=0;i<n1;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n2;i++)
    {
        cin>>b[i];
    }
    for(int i=0;i<n3;i++)
    {
        cin>>c[i];
    }
    sort(a,a+n1);
    sort(b,b+n2);
    sort(c,c+n3);
    int temp[10];

    int ans[10];

    int k = 0;
    intersection(a,b,temp,n1,n2,k);

    int tempsize = k;
    k = 0;
    intersection(c,temp,ans,n3,tempsize,k);
    cout << "Common elements present in arrays are : \n";
 
    for (int i = 0; i < k; i++) {
        cout << ans[i] << " ";
    }
    cout << endl;

}
