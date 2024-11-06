#include <stdio.h>

// ���k��ƭp�� base^exponent
int power(int base, int exponent) {
    // �פ����G�� exponent �� 1 �ɡA��^ base
    if (exponent == 1) {
        return base;
    }
    else {
        // ���k�B�J�G��^ base * base^(exponent-1)
        return base * power(base, exponent - 1);
    }
}

int main() {
    int base, exponent;

    // ��J���ƩM����
    printf("�п�J���� (base): ");
    scanf("%d", &base);
    printf("�п�J���� (exponent): ");
    scanf("%d", &exponent);

    // �p��ÿ�X���G
    printf("%d �� %d ����O: %d\n", base, exponent, power(base, exponent));

    return 0;
}