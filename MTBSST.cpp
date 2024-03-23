#include <iostream>
using namespace std;

int maxProfit(int price[], int n)
{
	
	int* profit = new int[n];
	for (int i = 0; i < n; i++)
		profit[i] = 0;

	int max_price = price[n - 1];
	for (int i = n - 2; i >= 0; i--) {
		
		if (price[i] > max_price)
			max_price = price[i];

		
	
		profit[i]
			= max(profit[i + 1], max_price - price[i]);
	}


	int min_price = price[0];
	for (int i = 1; i < n; i++) {
	
		if (price[i] < min_price)
			min_price = price[i];

		profit[i] = max(profit[i - 1],
						profit[i] +(price[i] - min_price));
	}
	int result = profit[n - 1];

	delete[] profit; // To avoid memory leak

	return result;
}

// Driver code
int main()
{
	int price[] = { 2, 30, 15, 10, 8, 25, 80 };
	int n = sizeof(price) / sizeof(price[0]);
	cout << "Maximum Profit = " << maxProfit(price, n);
	return 0;
}
/*
i    max-price    price    profit
6       80         80        0
5       80         25        55
4       80          8        72
3       80         10        72
2       80         15        72
1       80         30        72
0       80          2        78

i  min-price     price    profit
0    2             2        0
1    2             30       100     max( 0, 72+(30-2)) = 100
2    2             15       100
3    2             10       100
4    2             8        100
5    2             25       100
6    2             80       100

ans = n-1 = 7-1  = a[6] = 100.

*/