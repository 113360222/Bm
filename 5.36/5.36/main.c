#include <stdio.h>

// 遞迴函數，將圓盤從源釘子移動到目標釘子
void hanoi(int n, char source, char target, char auxiliary) {
    if (n == 1) {
        // 只有一個圓盤時，直接移動
        printf("Move disk 1 from %c to %c\n", source, target);
        return;
    }

    // 移動前 n-1 個圓盤從源釘子到輔助釘子
    hanoi(n - 1, source, auxiliary, target);

    // 移動第 n 個圓盤從源釘子到目標釘子
    printf("Move disk %d from %c to %c\n", n, source, target);

    // 移動 n-1 個圓盤從輔助釘子到目標釘子
    hanoi(n - 1, auxiliary, target, source);
}

int main() {
    int n;

    // 輸入圓盤數量
    printf("請輸入圓盤的數量: ");
    scanf("%d", &n);

    // 呼叫遞迴函數來解決問題
    printf("以下是移動圓盤的步驟：\n");
    hanoi(n, 'A', 'C', 'B');  // 'A' 為源釘子，'C' 為目標釘子，'B' 為輔助釘子

    return 0;
}