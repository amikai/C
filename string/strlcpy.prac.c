/*
 * See: 1. man 3 strlcpy  
 *      2. man 3 strncpy
 *
 * How to compile: gcc -lbsd strlcpy.prac.c
 */
#include <bsd/stdio.h>
#include <bsd/stdlib.h>
#include <bsd/string.h>
void strlcpyPrac() {
    char str1[16];
    char str2[24] = "good job.";
    char str3[64] = "I am handsome man.";
    
    if(strlcpy(str1, str2, sizeof(str1)) < sizeof(str1))
        printf("%s\n", str1);
    else
        printf("str2 is too long.\n");

    if(strlcpy(str1, str3, sizeof(str1)) < sizeof(str1))
        printf("%s\n", str1);
    else
        printf("str3 is too long.\n");
}

int main() {
        
    strlcpyPrac();

    return 0;
}
