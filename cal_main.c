#include <stdio.h>
#include <stdlib.h>
#include <arithmetic.h>

int main(int argc, char *argv[])
{
    int a = atoi(argv[1]);
    int b = atoi(argv[2]);
    int c = atoi(argv[3]);
    int d = atoi(argv[4]);

    printf("<===============>\n");
    printf("<===============>\n");
    printf("<===============>\n");
    printf("<===============>\n");
    printf("%d + %d => %d\n", a, b, add(a, b));
    printf("%d - %d => %d\n", a, b, sub(a, b));
    printf("%d * %d => %d\n", a, b, mul(a, b));
    printf("%d / %d => %d\n", a, b, dur(a, b));
    printf("%d + %d => %d\n", c, d, add(c, d));
    printf("%d + %d => %d\n", c, d, sub(c, d));
    printf("%d * 2 => %d\n", a, double(a));
    
    printf("===============\n");

    return 0;
}
