#include <stdio.h>

int main(){
    int a, b;

    setbuf( stdout, NULL );

    printf("Enter a: \n");
    scanf("%d", &a);
    printf("Enter b: \n");
    scanf("%d", &b);

    printf("Before: a => %i, b => %i; \n", a, b);

    int temp = a;
    a = b;
    b = temp;

    printf("After: a => %i, b => %i; \n", a, b);

    return 0;

}