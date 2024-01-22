#include<iostream>
using namespace std;
int BSSTK(int a[],int n)
{
    int buy = a[0]; 
    int max_profit = 0;
    for(int i = 1 ; i<n;i++)
    {
        if(buy>a[i])
        {
            buy = a[i];
        }
        else if(a[i]-buy>max_profit)
        {
            max_profit = a[i]-buy;
        }
    }
    return max_profit;
}
int main()
{
    int a[10],n;
    cout<<"Enter the no of days\n";
    cin>>n;
    cout<<"Enter the prices of stock\n";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"The maximum profit is : "<<BSSTK(a,n);
}
/*
array = 7,1,5
buy = 7 mp = 0
if buy > p[1] = 7>1
buy=p[1] buy = 1
buy = 1 mp = 0 
buy > p[2] = 1>5 no .
else = 5-1 > mp = 4>0
mp = 4.
*/