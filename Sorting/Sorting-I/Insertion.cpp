#include<bits/stdc++.h>
using namespace std;

/*
Here is the implementation of Insertion Sort algorithm in C++.
Insertion Sort is a simple comparison-based sorting algorithm that builds the final sorted array one item at a time.
It works by taking elements from the unsorted portion and inserting them into their correct position in the sorted portion.
Time Complexity: O(n^2) in all cases (best, average, worst) 
Space Complexity: O(1) as it is an in-place sorting algorithm
*/

int main() {
    vector<int> arr = {13,46,24,52,20,9};
    int n=arr.size();

    cout<<"Before selection sort: " << "\n";
    for (int i=0; i<n; i++) cout<<arr[i]<<" ";
    cout<<"\n";

    for (int i=0; i<n; i++) {
        int j=i;
        while(j>0 && arr[j-1]>arr[j]) {
            swap(arr[j], arr[j-1]);
            j--;
        }
    }

    cout << "After insertion sort: " << "\n";
    for (int i=0; i<n; i++) cout<<arr[i]<<" ";
    cout<<"\n";

    return 0;
}