#include <iostream>
using namespace std;

int binarySearch(int arr[], int left, int right, int key) {

    while(left <= right) {

        int mid = (left + right) / 2;

        if(arr[mid] == key)
            return mid;

        else if(arr[mid] < key)
            left = mid + 1;

        else
            right = mid - 1;
    }

    return -1;
}

int main() {

    int arr[] = {1, 3, 5, 7, 9};
    int key = 7;

    int result = binarySearch(arr, 0, 4, key);

    if(result != -1)
        cout << "Element found at index " << result;
    else
        cout << "Element not found";

    return 0;
}
