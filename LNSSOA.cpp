
#include <bits/stdc++.h>
using namespace std;


int findLongestConseqSubseq(int arr[], int n)
{
	int ans = 0, count = 0;  //{1,2,3,2}

	sort(arr, arr + n); // {1,2,2,3}

	vector<int> v; // vector are use to remove dulplicate element.
	v.push_back(arr[0]); // v = 1 insert at last

	for (int i = 1; i < n; i++) { // 
		if (arr[i] != arr[i - 1]) // 2 != 1
			v.push_back(arr[i]); // v.pushback = 2 // 1,2,3
	}
	for (int i = 0; i < v.size(); i++) {


		if (i > 0 && v[i] == v[i - 1] + 1) // 2 == 1+1 , 3 == 2+1.
			count++;
		
		else
			count = 1;

		
		ans = max(ans, count);
	}
	return ans;
}

int main()
{
	int arr[] = { 1,2,3,2 };
	int n = sizeof arr / sizeof arr[0];
	cout << "Length of the Longest contiguous subsequence "
			"is "
		<< findLongestConseqSubseq(arr, n);
	return 0;
}

