#include<stdio.h>
int main()
{
	char text[100];
    char *ch;
    scanf("%s",text);
    ch =text;
    int i=0;
    while(text[i]!='\0')
    {
        if(text[i]>='A'&& text[i]<='Z')
        {
            text[i]+=32;
        }
        else if(text[i]>='a'&& text[i]<='z')
        {
            text[i]-=32;
        }
        i++;
    }
    printf("%s",ch);
    
	return 0;
}