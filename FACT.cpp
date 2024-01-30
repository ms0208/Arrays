#include<iostream>
using namespace std;

//for short number
int main()
{
    long fact = 1;
    int n;
    cin>>n;
    int i = 0;
    while(i<n)
    {
        fact = fact * (i+1);
        i++;
    }
    cout<<fact;
}
// For long number.
