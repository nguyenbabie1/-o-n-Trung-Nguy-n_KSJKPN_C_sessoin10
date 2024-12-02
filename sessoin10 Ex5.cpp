#include <stdio.h>

void insertionSort(int arr[], int n){

    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

int binarySearch(int arr[], int n, int key) {
    int left = 0, right = n - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == key)
            return mid;
        else if (arr[mid] > key)
            right = mid - 1;
        else
            left = mid + 1;
    }

    return -1; 
}
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {9, 0, 8, 2, 0, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Mang ban dau: \n");
    printArray(arr, n);
    insertionSort(arr, n);

    printf("Mang sau khi sap xep theo thu tu tang dan: \n");
    printArray(arr, n);

    int key;
    printf("Nhap phan tu con tim: ");
    scanf("%d", &key);
    int result = binarySearch(arr, n, key);

    if (result != -1)
        printf("Phan tu %d tim thay tai vi tri %d trong mang.\n", key, result + 1);
    else
        printf("Phan tu %d khong ton tai trong mang.\n", key);

    return 0;
}

