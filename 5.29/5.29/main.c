#include <stdio.h>

// 璸衡程そ计 (GCD)
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// 璸衡程そ计 (LCM)
int lcm(int a, int b) {
    // ㄏノそΑ LCM(a, b) = |a * b| / GCD(a, b)
    return (a * b) / gcd(a, b);
}

int main() {
    int num1, num2;
    printf("叫块ㄢ俱计: ");
    scanf("%d %d", &num1, &num2);

    // 璸衡块程そ计
    printf("ㄢ计 %d ㎝ %d 程そ计琌: %d\n", num1, num2, lcm(num1, num2));

    return 0;
}