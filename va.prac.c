#include <stdio.h>
#include <stdarg.h>

int max_int(int n, ...)
{
    va_list ap;
    int i, current, largest;
    
    va_start(ap, n);
    largest = va_arg(ap, int);
    for(i = 1 ; i < n ; i++){
        current = va_arg(ap, int);
        if(current > largest)
            largest = current;
    }

    va_end(ap);
    return largest;
}

int main()
{
    printf("%d\n" ,max_int(5,100,1000,1,2,3));
}
