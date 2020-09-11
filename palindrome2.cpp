#include <stdio.h>
int main(){
    int k=0;
    char a[30];
    char *p1,*p2;
    p1 = a;
    p2 = a;
    scanf("%s",a);
    while(*p2 != '\0'){
        p2++;
    }
    p2 = p2-1;
    while(p1 < p2){
        //printf("%c\n",*p1);
        //printf("%c\n",*p2);
        if(*p1 != *p2){
            printf("Not palindrom");
            k = 0;
            break;
        }
        if(*p1 == *p2){
            k = 1;
        }
        p1++;
        p2--;
    }
    if(k == 1){
        printf("Palindrom");
    }
    return 0;
}