#include <stdio.h>

int main() {
    int array[100];
    int currentLength;
    printf("Nhập số phần tử(tối đa 100): ");
    scanf("%d", &currentLength);
    if (currentLength > 100 || currentLength < 0) {
        printf("Số phần tử không hợp lệ!\n");
        return 1;
    }
    for (int i = 0; i < currentLength; i++) {
        printf("Nhập phần tử thứ %d: ", i + 1);
        scanf("%d", &array[i]);
    }
    printf("Mảng sau khi nhập: ");
    for (int i = 0; i < currentLength; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
    int removeIndex;
    printf("Nhập vị trí cần xóa (từ 0 đến %d): ", currentLength - 1);
    scanf("%d", &removeIndex);
    if (removeIndex < 0 || removeIndex >= currentLength) {
        printf("Vị trí không hợp lệ!\n");
    } else {
        for (int i = removeIndex; i < currentLength - 1; i++) {
            array[i] = array[i + 1];
        }
        currentLength--;
        printf("Mảng sau khi xóa: ");
        for (int i = 0; i < currentLength; i++) {
            printf("%d ", array[i]);
        }
        printf("\n");
    }
    return 0;
}
