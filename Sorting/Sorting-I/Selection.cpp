#include<bits/stdc++.h>
using namespace std;

/*
Here is the implementation of Selection Sort algorithm in C++.
Selection Sort is an in-place comparison sorting algorithm that divides the input list into two parts: a sorted and an unsorted region.
It repeatedly selects the smallest (or largest, depending on sorting order) element from the unsorted region and moves it to the end of the sorted region.
Time Complexity: O(n^2) in all cases (best, average, worst)
Space Complexity: O(1) as it is an in-place sorting algorithm 
*/

int main() {
    vector<int> arr = {13,46,24,52,20,9};
    int n=arr.size();

    cout<<"Before selection sort: " << "\n";
    for (int i=0; i<n; i++) cout<<arr[i]<<" ";
    cout<<"\n";

    for (int i=0; i<n-1; i++) {
        int min=i;
        for (int j=i+1; j<n; j++) if (arr[j] < arr[min]) min = j;
        swap(arr[i], arr[min]);
    }

    cout << "After selection sort: " << "\n";
    for (int i=0; i<n; i++) cout<<arr[i]<<" ";
    cout<<"\n";

    return 0;
}