#include <stdio.h>
#include <string.h>
int main(){
    char src[20];
    int n;
    char dest1[40];
    char dest2[40];
    printf("Enter the string .\n");
    gets(src);
    strcpy(dest1, src);
    printf("The entered string is :\n");
    puts(dest1);
    printf("Enter the string upto which it should be copied .\n");
    scanf("%d", &n);
    strncpy(dest2, src, n);
    puts(dest2);
    return 0;
}