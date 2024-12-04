#include <stdio.h>
#include <string.h>
int main(){
    char a[20];
    printf("Enter your name .\n");
    gets(a);
    printf("You entered you name .\n");
    puts(a);
    printf("Enter anything .\n");
    char ch=getchar();
    printf("You entered .\n");
    putchar(ch);
    return 0;
}