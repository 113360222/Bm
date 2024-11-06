#include <stdio.h>

// ���j��ơA�N��L�q���v�l���ʨ�ؼаv�l
void hanoi(int n, char source, char target, char auxiliary) {
    if (n == 1) {
        // �u���@�Ӷ�L�ɡA��������
        printf("Move disk 1 from %c to %c\n", source, target);
        return;
    }

    // ���ʫe n-1 �Ӷ�L�q���v�l�컲�U�v�l
    hanoi(n - 1, source, auxiliary, target);

    // ���ʲ� n �Ӷ�L�q���v�l��ؼаv�l
    printf("Move disk %d from %c to %c\n", n, source, target);

    // ���� n-1 �Ӷ�L�q���U�v�l��ؼаv�l
    hanoi(n - 1, auxiliary, target, source);
}

int main() {
    int n;

    // ��J��L�ƶq
    printf("�п�J��L���ƶq: ");
    scanf("%d", &n);

    // �I�s���j��ƨӸѨM���D
    printf("�H�U�O���ʶ�L���B�J�G\n");
    hanoi(n, 'A', 'C', 'B');  // 'A' �����v�l�A'C' ���ؼаv�l�A'B' �����U�v�l

    return 0;
}