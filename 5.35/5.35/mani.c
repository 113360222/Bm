#include <stdio.h>

// �D���j Fibonacci ���
unsigned long long int fibonacci(unsigned int n) {
    unsigned long long int a = 0, b = 1, temp;

    if (n == 0) {
        return a;  // F(0) = 0
    }
    else if (n == 1) {
        return b;  // F(1) = 1
    }

    // �q F(2) �}�l�p��
    for (unsigned int i = 2; i <= n; i++) {
        temp = a + b;
        a = b;
        b = temp;
    }

    return b;  // ��^�� n �� Fibonacci �Ʀr
}

int main() {
    unsigned int n = 0;
    unsigned long long int fib;

    // ��� Fibonacci �Ʀr���쥦�W�L unsigned long long int �������̤j�d��
    printf("��� Fibonacci �Ʀr���쥦�W�L unsigned long long int �������̤j��:\n");

    // ��X Fibonacci �Ʀr���쥦�W�L unsigned long long int ���̤j��
    while (1) {
        fib = fibonacci(n);

        // ��ܷ�e Fibonacci �Ʀr
        printf("�� %u �� Fibonacci �Ʀr: %llu\n", n, fib);

        // �ˬd Fibonacci �Ʀr�O�_�W�L unsigned long long int ���̤j��
        if (fib > 0 && fib + 1 < fib) {  // ���X�ˬd
            break;
        }
        if (n == 100) goto end;
        n++;  // �p��U�@�� Fibonacci �Ʀr
    }
    end:
   
    return 0;
}