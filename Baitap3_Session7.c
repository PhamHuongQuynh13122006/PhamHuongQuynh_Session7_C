/*Bai 3 : Khai bao va gan gia tri cho mang so nguyen có 5 phan tu, in ra tat ca cac phan tu la so chan trong mang, neu khong co thi in ra mang khong chua so chan */

int main() {
    int n;
    printf("Input the number of elements in array: ");
    scanf("%d", &n);

    int arr[n];
    int i = 0;
    do {
        printf("Input the element at index %d: ", i + 1);
        scanf("%d", &arr[i]);
        i++;
    } while (i < n);

    printf("The elements in array are: ");
    i = 0;
    do {
        printf("%d ", arr[i]);
        i++;
    } while (i < n);

    return 0;
}