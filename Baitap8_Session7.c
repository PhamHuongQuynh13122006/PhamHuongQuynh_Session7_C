/*Bai 8 : viet truong trinh yeu cau nguoi dùng nhap vao so hang va so cot cua 1 mang 2 chieu .
Yeu cau nguoi dung nhap tung phan tu trong mang va in ra man hinh theo ma tran*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;

    printf("Input the number of elements in array: ");
    scanf("%d", &n);

    int *arr = (int*)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Invalid!!!\n");
        return 1;
    }

    int i = 0;
    while (i < n) {
        printf("%d: ", i + 1);
        scanf("%d", &arr[i]);
        i++;
    }

    printf("The elements of array are: ");
    i = 0;
    while (i < n) {
        printf("%d ", arr[i]);
        i++;
    }

    free(arr);
    return 0;
}