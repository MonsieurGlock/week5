#include <stdio.h>
int main(){
    char a[30];
    char *p;
    scanf("%s",a);
    p = a;
    while(*p != '\0'){
        if(*p >= 'A' && *p <='Z'){
            *p = (*p - 'A')+'a';
            printf("%c",*p);
        }
        else if(*p >= 'a' && *p <='z'){
            *p = (*p - 'a')+'A';
            printf("%c",*p);
        }
        p++;
    }
    return 0;
}