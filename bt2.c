#include <stdio.h>

int main() {
    int array[] = {1, 2, 3, 4, 5};
    int size = sizeof(array) / sizeof(array[0]);
    printf("Mảng ban đầu: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
    int index, newValue;
    printf("Nhập vị trí cần sửa (0 đến %d): ", size - 1);
    scanf("%d", &index);
    if (index < 0 || index >= size) {
        printf("Vị trí không hợp lệ!\n");
    } else {
        printf("Nhập giá trị mới: ");
        scanf("%d", &newValue);
        array[index] = newValue;
        printf("Mảng sau khi sửa: ");
        for (int i = 0; i < size; i++) {
            printf("%d ", array[i]);
        }
        printf("\n");
    }
    return 0;
}
