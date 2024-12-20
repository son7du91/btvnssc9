#include <stdio.h>
int main() {
    int array[100];
    int currentLength;
    printf("Nhập số phần tử (tối đa 100): ");
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
    int value, addIndex;
    printf("Nhập giá trị cần thêm: ");
    scanf("%d", &value);
    printf("Nhập vị trí cần thêm (từ 0 đến 99): ");
    scanf("%d", &addIndex);
    if (addIndex < 0 || addIndex >= 100) {
        printf("Vị trí không hợp lệ!\n");
    } else {
        if (addIndex >= currentLength) {
            array[addIndex] = value;
            currentLength = addIndex + 1;
        } else {
            for (int i = currentLength; i > addIndex; i--) {
                array[i] = array[i - 1];
            }
            array[addIndex] = value;
            currentLength++;
        }
        printf("Mảng sau khi thêm: ");
        for (int i = 0; i < currentLength; i++) {
            printf("%d ", array[i]);
        }
        printf("\n");
    }

    return 0;
}
