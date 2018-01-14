/* strpbrk reurns a pointer to the leftmost character in the first argument
 * that matchs any character in the second argument, and it returns NULL if
 * no match is found.
 */
#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "This is a sample string";
    char key[] = "aeiou";
    char* pch = str;
    
    pch = strpbrk(str, key);
    while (pch != NULL) {
        printf("%s\n", pch);
        pch = strpbrk(pch + 1, key);
    }
    
    return 0;
}
