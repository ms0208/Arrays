// Next permutation  .
// previous permutation
#include<algorithm> // Header files to acces permutation.
#include<iostream>
using namespace std;
void NP(int a[],int n)
{
     sort(a,a+n);
    do{
    for(int j=0;j<1;j++)
    {
        for(int i=0;i<n;i++)
        {
            cout<<a[i]<<"\t";
        }
        cout<<"\n";
    }
    }while(next_permutation(a,a+n));
}
void PP(int a[],int n)
{
    sort(a,a+n);
    reverse(a,a+n);
    do{
    for(int j=0;j<1;j++)
    {
        for(int i=0;i<n;i++)
        {
            cout<<a[i]<<"\t";
        }
        cout<<"\n";
    }
    }while(prev_permutation(a,a+n));
}
int main()
{
    int a[10],n;
    cout<<"Enter the size of array\n";
    cin>>n;
    cout<<"Enter the Array\n";
    for(int i = 0 ;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Next Permutation\n";
    NP(a,n);
    cout<<"Previous Permutation\n";
    PP(a,n);

}