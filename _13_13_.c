// 修改第8章的编程题15，使其包含如下函数：
// void encrypt(char *message, int shift);
// 参数message指向一个包含待加密消息的字符串，shift表示消息中每个字母需要移动的位数。

// 已知的最古老的一种加密技术是凯撒加密（得名于Julius Caesar）。
// 该方法把一条消息中的每个字母用字母表中固定距离之后的那个字母来替代。
// （如果越过了字母Z，会绕回到字母表的起始位置。
// 例如，如果每个字母都用字母表中两个位置之后的字母代替，那么Y就被替换为A，Z就被替换为B。）
// 编写程序用凯撒加密方法对消息进行加密。
// 用户输入待加密的消息和移位计数（字母移动的位置数目）：
// Enter message to be encrypted: Go ahead, make my day.
// Enter shift amount (1-25): 3
// Encrypted message: Jr dkhdg, pdnh pb gdb.
// 注意，当用户输入26与移位计数的差值时，程序可以对消息进行解密：
// Enter message to be encrypted: Jr dkhdg, pdnh pb gdb.
// Enter shift amount (1-25): 23
// Encrypted message: Go ahead, make my day.
// 可以假定消息的长度不超过80个字符。不是字母的那些字符不要改动。
// 此外，加密时不要改变字母的大小写。
// 提示：为了解决前面提到的绕回问题，可以用表达式((ch - 'A') + n) % 26 + 'A'
// 计算大写字母的密码，其中ch存储字母，n存储移位计数。
// （小写字母也需要一个类似的表达式。）

#include <stdio.h>

void encrypt(char *message, int shift);

int main() {
    printf("Enter message to be encrypted: ");
    char str[100];
    gets(str);

    printf("Enter shift amount (1-25): ");
    int n;
    scanf("%d", &n);

    encrypt(str, n);

    printf("Encrypted message: %s\n", str);
    return 0;
}

void encrypt(char *message, int shift) {
    for (char *p = message; *p != '\0'; ++p) {
        if (*p >= 65 && *p <= 90) {
            *p = ((*p - 'A') + shift) % 26 + 'A';
        } else if (*p >= 97 && *p <= 122) {
            *p = ((*p - 'a') + shift) % 26 + 'a';
        }
    }
}