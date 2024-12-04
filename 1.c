#include <stdio.h>

int main(){
    char a[8]={'A','M','I','T','E','S','H'};
    for (int i = 0; i < 7; i++)
    {
        printf("%c", a[i]);
    }
    printf("\n");
    char b[]="AIMBOT";
    for (int i = 0; i < 6; i++)
    {
        printf("%c", b[i]);
    }
    printf("\n");
    printf("%s\n", b);
    return 0;
}