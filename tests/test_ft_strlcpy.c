#include <stdio.h>
#include <stddef.h>
#include <string.h>

#include "../libft.h"

int main() {
	printf("-- 1 --\n");
	size_t size_1 = 3;
    char d1[10] = "123";
    char s1[10] = "123";
    size_t r1 = strlcpy(d1, s1, size_1);
    printf("[Original]\n r1: %lu, d1: %s\n", r1, d1);

    char d2[10] = "123";
    char s2[10] = "123";
    size_t r2 = ft_strlcpy(d2, s2, size_1);
    printf("[My]\n r2: %lu, d2: %s\n", r2, d2);


	printf("-- 2 --\n");
    unsigned long size_2 = 0;
    char d3[10] = "123";
    char s3[10] = "123";
    unsigned long r3 = strlcpy(d3, s3, size_2);
    printf("[Original]\n r3: %lu, d3: %s\n", r3, d3);

    char d4[10] = "123";
    char s4[10] = "123";
    unsigned long r4 = ft_strlcpy(d4, s4, size_2);
    printf("[My]\n r4: %lu, d4: %s\n", r4, d4);

    return 0;
}