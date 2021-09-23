//  6. 改进13.7节的程序planet.c，
//  使它在对命令行参数和planets数组中的字符串进行比较时忽略大小写。

/* Checks planet names */
#include <ctype.h>
#include <stdio.h>
#include <string.h>

#define NUM_PLANETS 9

int yh_strcmp(const char* str1, const char* str2) {
    size_t str1_len = strlen(str1);
    size_t str2_len = strlen(str2);
    if (str1_len != str2_len) {
        return -1;
    } else {
        for (size_t i = 0; i != str1_len; ++i) {
            if (toupper(str1[i]) != toupper(str2[i])) {
                return -1;
            }
        }
        return 0;
    }
}

int main(int argc, char* argv[]) {
    char* planets[] = {"Mercury", "Venus",  "Earth",   "Mars", "Jupiter",
                       "Saturn",  "Uranus", "Neptune", "Pluto"};
    int i, j;
    for (i = 1; i < argc; i++) {
        for (j = 0; j < NUM_PLANETS; j++)
            if (yh_strcmp(argv[i], planets[j]) == 0) {
                printf("%s is planet %d\n", argv[i], j + 1);
                break;
            }
        if (j == NUM_PLANETS) printf("%s is not a planet\n", argv[i]);
    }
    return 0;
}