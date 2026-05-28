#include<bits/stdc++.h>
using namespace std;

// Bubble Sort Function
void sort(int A[], int n)
{
    int temp;

    for(int i = 0; i < n - 1; i++){

        for(int j = 0; j < n - 1 - i; j++){

            if(A[j] > A[j + 1]){

                temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
        }
    }
}

// Binary Search Function
int binarySearch(int A[], int n, int key)
{
    int low = 0;
    int high = n - 1;

    while(low <= high){

        int mid = (low + high) / 2;

        if(key == A[mid]){
            return mid;
        }

        else if(key > A[mid]){
            low = mid + 1;
        }

        else{
            high = mid - 1;
        }
    }

    return -1;
}

int main()
{
    int n;

    cout << "Enter the size of the array: ";
    cin >> n;

    int A[n];

    cout << "Enter the elements into the array:\n";

    for(int i = 0; i < n; i++){

        cout << "A[" << i << "]: ";
        cin >> A[i];
    }

    // Sorting the array
    sort(A, n);

    cout << "The sorted array is:\n";

    for(int i = 0; i < n; i++){
        cout << A[i] << " ";
    }

    int key;

    cout << "\nEnter the key element to be searched: ";
    cin >> key;

    // Calling Binary Search Function
    int result = binarySearch(A, n, key);

    if(result != -1){

        cout << "The element is found at index " << result << endl;
        cout << "A[" << result << "] = " << A[result];
    }

    else{

        cout << "Element not found!";
    }

    return 0;
}