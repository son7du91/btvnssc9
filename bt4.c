#include <stdio.h>

int main() {
    int array[100];
    int currentLength = 0; 
    int choice;
    while (1) {
        printf("\n--- MENU ---\n");
        printf("1. Nhập vào mảng\n");
        printf("2. Hiển thị mảng\n");
        printf("3. Thêm phần tử\n");
        printf("4. Sửa phần tử\n");
        printf("5. Xóa phần tử\n");
        printf("6. Thoát\n");
        printf("Lựa chọn của bạn: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1: {
                printf("Nhập số phần tử muốn nhập (tối đa 100): ");
                scanf("%d", &currentLength);
                if (currentLength > 100 || currentLength < 0) {
                    printf("Số phần tử không hợp lệ!\n");
                } else {
                    for (int i = 0; i < currentLength; i++) {
                        printf("Nhập phần tử thứ %d: ", i + 1);
                        scanf("%d", &array[i]);
                    }
                }
                break;
            }
            case 2: { 
                if (currentLength == 0) {
                    printf("Mảng trống!\n");
                } else {
                    printf("Mảng hiện tại: ");
                    for (int i = 0; i < currentLength; i++) {
                        printf("%d ", array[i]);
                    }
                    printf("\n");
                }
                break;
            }
            case 3: {
                if (currentLength >= 100) {
                    printf("Mảng đã đầy, không thể thêm phần tử mới!\n");
                } else {
                    int value, position;
                    printf("Nhập giá trị cần thêm: ");
                    scanf("%d", &value);
                    printf("Nhập vị trí cần thêm (0 đến %d): ", currentLength);
                    scanf("%d", &position);
                    if (position < 0 || position > currentLength) {
                        printf("Vị trí không hợp lệ!\n");
                    } else {
                        for (int i = currentLength; i > position; i--) {
                            array[i] = array[i - 1];
                        }
                        array[position] = value;
                        currentLength++;
                        printf("Đã thêm phần tử!\n");
                    }
                }
                break;
            }
            case 4: {
                if (currentLength == 0) {
                    printf("Mảng trống, không thể sửa!\n");
                } else {
                    int position, newValue;
                    printf("Nhập vị trí cần sửa (0 đến %d): ", currentLength - 1);
                    scanf("%d", &position);

                    if (position < 0 || position >= currentLength) {
                        printf("Vị trí không hợp lệ!\n");
                    } else {
                        printf("Nhập giá trị mới: ");
                        scanf("%d", &newValue);
                        array[position] = newValue;
                        printf("Đã sửa phần tử!\n");
                    }
                }
                break;
            }
            case 5: {
                if (currentLength == 0) {
                    printf("Mảng trống, không thể xóa!\n");
                } else {
                    int position;
                    printf("Nhập vị trí cần xóa (0 đến %d): ", currentLength - 1);
                    scanf("%d", &position);
                    if (position < 0 || position >= currentLength) {
                        printf("Vị trí không hợp lệ!\n");
                    } else {
                        for (int i = position; i < currentLength - 1; i++) {
                            array[i] = array[i + 1];
                        }
                        currentLength--;
                        printf("Đã xóa phần tử!\n");
                    }
                }
                break;
            }
            case 6: {
                printf("Thoát chương trình.\n");
                return 0;
            }
            default: {
                printf("Lựa chọn không hợp lệ, vui lòng thử lại!\n");
                break;
            }
        }
    }
    return 0;
}
