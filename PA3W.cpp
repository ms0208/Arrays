// Parting a array in 3 way .
#include<iostream>
using namespace std;
void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

void threeWayPartition(int arr[], int n, int lowVal, int highVal) {
    int start = 0, end = n - 1;

    for (int i = 0; i <= end;) {
        if (arr[i] < lowVal) {
            if (i == start) {
                start++;
                i++;
            }
            else
                swap(arr[i++], arr[start++]);
        }
        else if (arr[i] > highVal)
            swap(arr[i], arr[end--]);
        else
            i++;
    }
}

int main() {
    int arr[] = {3,4,5,6,1,2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int lowVal = 4, highVal = 5;

    threeWayPartition(arr, n, lowVal, highVal);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
/*
*/