#include <stdio.h>

int tinhTong(int a, int b) {
    return a + b;
}

int main() {
    int so1, so2;
    
    printf("Nhap so thu nhat: ");
    scanf("%d", &so1);
    
    printf("Nhap so thu hai: ");
    scanf("%d", &so2);
    
    int ketQua = tinhTong(so1, so2);
    printf("Tong  hai so : %d\n", ketQua);
    
    return 0;
}

