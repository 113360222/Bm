#include <stdio.h>
#include <ctype.h>  

char toggle_case(char c)
{
    // 判斷字母的大小寫，並進行轉換
    if (c >= 'a' && c <= 'z') {
        return c - 'a' + 'A';  // 小寫轉大寫
    }
    else if (c >= 'A' && c <= 'Z') {
        return c - 'A' + 'a';  // 大寫轉小寫
    }
    else {
        return c;  // 如果不是字母，直接返回原字符
    }
}

int main() {
    char input;
    printf("請輸入一個字母: ");
    scanf("%c", &input);

    // 呼叫toggle_case函數並輸出結果
    char result = toggle_case(input);
    printf("更改大小寫後的字母是: %c\n", result);

    return 0;
}