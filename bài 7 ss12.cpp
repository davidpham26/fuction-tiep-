#include <stdio.h>

void taoMaTran(int hang, int cot, int matran[hang][cot]) {
    for (int i = 0; i < hang; i++) {
        for (int j = 0; j < cot; j++) {
            printf("Nhap gia tri cho phan tu matran[%d][%d]: ", i, j);
            scanf("%d", &matran[i][j]);
        }
    }
}

void inMaTran(int hang, int cot, int matran[hang][cot]) {
    for (int i = 0; i < hang; i++) {
        for (int j = 0; j < cot; j++) {
            printf("%d ", matran[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int hang, cot;
    printf("Nhap so hang: ");
    scanf("%d", &hang);
    printf("Nhap so cot: ");
    scanf("%d", &cot);

    int matran[hang][cot];
    taoMaTran(hang, cot, matran);
    inMaTran(hang, cot, matran);

    return 0;
}

