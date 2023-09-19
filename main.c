
int main() {
    int *ptr;
    ptr = (int *)malloc(10 * sizeof(int));

    if (ptr == NULL) {
        printf("Khong du bo nho de cap phat.");
        return 1; // Thoát với mã lỗi 1
    }

    for (int i = 0; i < 10; i++) {
        printf("Nhap phan tu thu %d cua mang: ", i);
        scanf("%d", ptr + i);
    }

    for (int j = 0; j < 10; j++) {
        printf("\n%d", *(ptr + j));
    }

    // Sau khi sử dụng xong, bạn cần giải phóng bộ nhớ đã cấp phát bằng hàm free
    free(ptr);

    return 0;
}