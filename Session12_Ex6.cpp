#include <stdio.h>

int kiemTraSoHoanHao(int n) {
    int tong = 0;
    
    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0) {
            tong += i;
        }
    }

    if (tong == n) {
        return 1; 
    }
    return 0;  
}

int main() {
    int so1, so2;

    printf("Nhap vao so thu nhat: ");
    scanf("%d", &so1);
    printf("Nhap vao so thu hai: ");
    scanf("%d", &so2);

    if (kiemTraSoHoanHao(so1)) {
        printf("%d la so hoan hao.\n", so1);
    } else {
        printf("%d khong phai la so hoan hao.\n", so1);
    }

    if (kiemTraSoHoanHao(so2)) {
        printf("%d la so hoan hao.\n", so2);
    } else {
        printf("%d khong phai la so hoan hao.\n", so2);
    }

    return 0;
}

