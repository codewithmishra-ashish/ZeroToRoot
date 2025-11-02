#include<bits/stdc++.h>
using namespace std;

/*
Here is the implementation of Bubble Sort algorithm in C++.
Bubble Sort is a simple comparison-based sorting algorithm that repeatedly steps through the list, compares adjacent elements and swaps them if they are in the wrong order.
The pass through the list is repeated until the list is sorted.
Time Complexity: O(n^2) in all cases (best, average, worst)
Space Complexity: O(1) as it is an in-place sorting algorithm   
*/

int main() {
    vector<int> arr = {13,46,24,52,20,9};
    int n=arr.size();

    cout<<"Before selection sort: " << "\n";
    for (int i=0; i<n; i++) cout<<arr[i]<<" ";
    cout<<"\n";

    for(int i=n-1; i>=0; i--)
    {
        for(int j=0; j<i; j++) if(arr[j]>arr[j+1]) swap(arr[j],arr[j+1]);
    }

    cout << "After bubble sort: " << "\n";
    for (int i=0; i<n; i++) cout<<arr[i]<<" ";
    cout<<"\n";

    return 0;
}