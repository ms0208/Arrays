//Subset of array of another array
#include<bits/stdc++.h>
using namespace std;

bool issubst(int a1[] , int a2[] , int m , int n)
{
    int i=0;
    int j=0;
    for( i=0;i<n;i++)
    {
        for( j=0;j<m;j++)
        {
            if(a2[i]==a1[j]) // a1 = {1,2,3,4,5} , a2 = {1,2,4}
            {                 // if a2[0] == a1[0] , a2[1] == a1[1] , a2[2] == a1[2] not work , a2[2] == a1[3] 
                break;
            }
        }
        if(j == m)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int a1[10],a2[10],m,n;
    cin>>n;
    cin>>m;
    for(int i=0;i<n;i++)
    {
        cin>>a1[i];
    }
    for(int j=0;j<m;j++)
    {
        cin>>a2[j];
    }
    if(issubst(a1,a2,n,m))
    {
        cout<<"Array 1 is subset of Array 2\n";
    }
    else{
        cout<<"Array 1 is not subset of Array 2\n";
    }

}