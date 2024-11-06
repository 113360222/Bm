#include <stdio.h>

// �p��̤j���]�� (GCD)
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// �p��̤p������ (LCM)
int lcm(int a, int b) {
    // �ϥΤ��� LCM(a, b) = |a * b| / GCD(a, b)
    return (a * b) / gcd(a, b);
}

int main() {
    int num1, num2;
    printf("�п�J��Ӿ��: ");
    scanf("%d %d", &num1, &num2);

    // �p��ÿ�X�̤p������
    printf("��ӼƦr %d �M %d ���̤p�����ƬO: %d\n", num1, num2, lcm(num1, num2));

    return 0;
}