// 25.  Rearrange array in positive and negaitve. in alternative way.
/* C++ program to rearrange
positive and negative integers
in alternate fashion while keeping
the order of positive and negative numbers. */
#include <bits/stdc++.h>
using namespace std;

// Utility function to right rotate all elements between
// [outofplace, cur] // cur -> current index.
void rightrotate(int arr[], int n, int outofplace, int cur)
{
	int tmp = arr[cur]; // tmp -> arr[cur] = element in current index store in tmp variable
	for (int i = cur; i > outofplace; i--)
		arr[i] = arr[i - 1]; 
	arr[outofplace] = tmp; // outofplace = current index. // swapping of element of current 
                              // swap in outofplace
}

void rearrange(int arr[], int n)
{
	int outofplace = -1; // no element in outofplace

	for (int index = 0; index < n; index++) {
		if (outofplace >= 0) {  
        /*
        at index = 0
        ofp = -1.
        arr[0] = -5   // ofp condition not satisfied.
        not work hence ofp = -1. 
        at index = 1
        initial arr[1] = -2 ofp = -1
        condition satisfied for ofp = -1 hence,
        // ofp = 1 
        at index = 2 
         inially ofp = 1  arr[2] = 5
            arr[index(2)] = 5 and  arr[ofp(1)] = -2 // condition satisfied
            if (((arr[index] >= 0) && (arr[outofplace] < 0)) this condition is satisfied.
            rightrotate(arr,4,1,2) is called  ofp = 1 , index = 2
            {
                int tpm = arr[2] = 5  , tpm = 5
                loop from -> 5 ,-2
                arr[2] = arr[1] => arr[2] = -2 
                arr[ofp] = arr[1] = tmp , arr[1] = 5
                //result -5 5 -2 2.
            }
        */
			if (((arr[index] >= 0) && (arr[outofplace] < 0)) 
				|| ((arr[index] < 0)
					&& (arr[outofplace] >= 0))) {
				rightrotate(arr, n, outofplace, index);

				// the new out-of-place entry is now 2 steps
				// ahead
				if (index - outofplace >= 2)
					outofplace = outofplace + 2;
				else
					outofplace = -1;
			}
		}

		// if no entry has been flagged out-of-place
		if (outofplace == -1) {
			// check if current entry is out-of-place
            /*
            if arr[index] >=0(positive or zero) and index is even -> index is ofp
            if arr[index] < 0(negative) and index is odd -> index is ofp
            -5 -2 5 2
            */
			if (((arr[index] >= 0) && (!(index & 0x01)))  // even  
				|| ((arr[index] < 0) && (index & 0x01))) { // odd 
				outofplace = index; 
                // at arr[0] = -5 , index = 0
                // -5 not work 
                /*
                at arr[1] = -2 , index = 1
                // -2 is work
                // ofp = 1 
                */
			}
		}
	}
}

// A utility function to print an array 'arr[]' of size 'n'
void printArray(int arr[], int n)
{
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
	cout << endl;
}

// Driver code
int main()
{

	int arr[] = { -5, -2,5,2,-3,6,3,-6};
	int n = sizeof(arr) / sizeof(arr[0]);

	cout << "Given array is \n";
	printArray(arr, n);
	
// Function Call
	rearrange(arr, n);

	cout << "Rearranged array is \n";
	printArray(arr, n);

	return 0;
}
