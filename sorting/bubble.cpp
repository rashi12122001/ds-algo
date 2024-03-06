#include <iostream>
using namespace std;

void bubble_sort(int arr[], int n) {
    for (int j = n - 1; j >= 0; j--) {
    int hua_kya=0;
        for (int i = 0; i < j; i++) { 
            if (arr[i] > arr[i + 1]) {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
                hua_kya=1;
            }
        }
        if(hua_kya==0){
        break;
    }
}

int main() {
    int arr[5] = {5, 8, 14, 19, 0};
    bubble_sort(arr, 5);
    cout << "output" << endl;
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << endl;
    }

    return 0;
}