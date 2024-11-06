#include <stdio.h>

// 遞歸函數計算 base^exponent
int power(int base, int exponent) {
    // 終止條件：當 exponent 為 1 時，返回 base
    if (exponent == 1) {
        return base;
    }
    else {
        // 遞歸步驟：返回 base * base^(exponent-1)
        return base * power(base, exponent - 1);
    }
}

int main() {
    int base, exponent;

    // 輸入底數和指數
    printf("請輸入底數 (base): ");
    scanf("%d", &base);
    printf("請輸入指數 (exponent): ");
    scanf("%d", &exponent);

    // 計算並輸出結果
    printf("%d 的 %d 次方是: %d\n", base, exponent, power(base, exponent));

    return 0;
}