#include <stdio.h>

int giaiThua(int n) {
    int ketQua = 1;  
    
    if (n < 0) {
        printf("Giai thua khong ton tai.\n");
        return -1;
    }
    for (int i = 1; i <= n; i++) {
        ketQua *= i;
    }

    return ketQua;
}

int main() {
    int n;
    printf("Nhap mot so nguyen: ");
    scanf("%d", &n);
    
    int ketQua = giaiThua(n);
    if (ketQua != -1) {
        printf("Giai thua cua %d la: %d\n", n, ketQua);
    }

    return 0;
}

