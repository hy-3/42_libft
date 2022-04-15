#include <stdio.h>
#include <stddef.h>
#include <string.h>

#include "../libft.h"

int main() {
	printf("-- 1 --\n");
	unsigned long size_1 = 3;
    char d1[5] = "";
    char s1[5] = "ABC";
    unsigned long r1 = strlcpy(d1, s1, size_1);
    printf("[Original]\n r1: %lu, d1: %s\n", r1, d1);

    char d2[5] = "";
    char s2[5] = "ABC";
    unsigned long r2 = ft_strlcpy(d2, s2, size_1);
    printf("[My]\n r2: %lu, d2: %s\n", r2, d2);

	printf("-- 2 --\n");
    unsigned long size_2 = 20;
    char d3[50] = "AAAAA";
    char s3[50] = "the cake is a lie !\0I'm hidden lol\r\n";
    unsigned long r3 = strlcpy(d3, s3, size_2);
    printf("[Original]\n r3: %lu, d3: %s\n", r3, d3);

    char d4[50] = "AAAAA";
    char s4[50] = "the cake is a lie !\0I'm hidden lol\r\n";
    unsigned long r4 = ft_strlcpy(d4, s4, size_2);
    printf("[My]\n r4: %lu, d4: %s\n", r4, d4);

    return 0;
}