/* Extract tokens from string
 * 
 */

#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "I am a handsome-handsome man, but you are not.";
    char* pch;

    pch = strtok(str, " ,-.");
    while(pch != NULL) {
        printf("%s\n", pch);
        pch = strtok(NULL, " ,-.");
    }
    return 0;
}
