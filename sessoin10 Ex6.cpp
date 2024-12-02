#include <stdio.h>

int main() {
    int arr[] = {9, 0, 8, 2, 0, 8};
    int n = sizeof(arr) / sizeof(arr[0]); 
    int key;
    printf("Nhap phan tu can tim: ");
    scanf("%d", &key);
    int positions[n];
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            positions[count] = i + 1;
            count++;
        }
    }

    // Ki?m tra n?u c? ph?n t? tr?ng v?i s? d? nh?p
    if (count > 0) {
        printf("Phan tu %d tim thay tai cac vi tri sau: \n", key);
        for (int i = 0; i < count; i++) {
            printf("V? tr? %d\n", positions[i]);
        }
    } else {
        printf("Phan tu %d khong ton tai trong mang.\n", key);
    }

    return 0;
}

