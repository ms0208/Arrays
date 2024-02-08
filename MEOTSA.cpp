// Merge of two array
#include<bits/stdc++.h>
using namespace std;

int main()
{
    /*
    int a1[10],n,i;
    cin>>n;
    for( i=0;i<n;i++)
    {
        cin>>a1[i];
    }
    sort(a1,a1+n);
    if(n % 2 !=0)
    {
        i = (n/2);
        cout<<a1[i];
    }
    else if(n % 2 ==0)
    {
        i = (n/2);
        cout<<(a1[i]+a1[i-1])/2;
    }*/
    // merge  of two  array equal/unequal size.
    int a2[10], a3[10], m;
    cin >> m;

    // Reading values for array a2
    for (int j = 0; j < m; j++) {
        cin >> a2[j];
    }

    // Reading values for array a3
    for (int k = 0; k < m; k++) {
        cin >> a3[k];
    }

    // Creating a map to store element frequencies
    map<int, int> mp;

    // Counting frequencies from array a2
    for (int j = 0; j < m; j++) {
        mp[a2[j]]++;
    }

    // Counting frequencies from array a3
    for (int j = 0; j < m; j++) {
        mp[a3[j]]++;
    }

    // Printing keys of the map along with their frequencies
    for (auto it = mp.begin(); it != mp.end(); ++it) {
        for (int j = 0; j < it->second; ++j) {
            cout << it->first << " ";
        }
    }

    return 0;
}
