#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int key) {

    for(int i = 0; i < n; i++) {
        if(arr[i] == key)
            return i;
    }

    return -1;
}

int main() {

    int arr[] = {2, 4, 6, 8, 10};
    int key = 6;

    int result = linearSearch(arr, 5, key);

    if(result != -1)
        cout << "Element found at index " << result;
    else
        cout << "Element not found";

    return 0;
}
