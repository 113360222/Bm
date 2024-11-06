#include <stdio.h>

// 非遞迴 Fibonacci 函數
unsigned long long int fibonacci(unsigned int n) {
    unsigned long long int a = 0, b = 1, temp;

    if (n == 0) {
        return a;  // F(0) = 0
    }
    else if (n == 1) {
        return b;  // F(1) = 1
    }

    // 從 F(2) 開始計算
    for (unsigned int i = 2; i <= n; i++) {
        temp = a + b;
        a = b;
        b = temp;
    }

    return b;  // 返回第 n 個 Fibonacci 數字
}

int main() {
    unsigned int n = 0;
    unsigned long long int fib;

    // 顯示 Fibonacci 數字直到它超過 unsigned long long int 類型的最大範圍
    printf("顯示 Fibonacci 數字直到它超過 unsigned long long int 類型的最大值:\n");

    // 輸出 Fibonacci 數字直到它超過 unsigned long long int 的最大值
    while (1) {
        fib = fibonacci(n);

        // 顯示當前 Fibonacci 數字
        printf("第 %u 個 Fibonacci 數字: %llu\n", n, fib);

        // 檢查 Fibonacci 數字是否超過 unsigned long long int 的最大值
        if (fib > 0 && fib + 1 < fib) {  // 溢出檢查
            break;
        }
        if (n == 100) goto end;
        n++;  // 計算下一個 Fibonacci 數字
    }
    end:
   
    return 0;
}