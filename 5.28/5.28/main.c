#include <stdio.h>
#include <ctype.h>  

char toggle_case(char c)
{
    // �P�_�r�����j�p�g�A�öi���ഫ
    if (c >= 'a' && c <= 'z') {
        return c - 'a' + 'A';  // �p�g��j�g
    }
    else if (c >= 'A' && c <= 'Z') {
        return c - 'A' + 'a';  // �j�g��p�g
    }
    else {
        return c;  // �p�G���O�r���A������^��r��
    }
}

int main() {
    char input;
    printf("�п�J�@�Ӧr��: ");
    scanf("%c", &input);

    // �I�stoggle_case��ƨÿ�X���G
    char result = toggle_case(input);
    printf("���j�p�g�᪺�r���O: %c\n", result);

    return 0;
}