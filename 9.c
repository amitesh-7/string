#include <stdio.h>
#include <string.h>
int main(){
    char a[20];
    printf("Enter the string .\n");
    gets(a);
    printf("The reverse of the string is :\n");
    puts(strrev(a));
    return 0;
}