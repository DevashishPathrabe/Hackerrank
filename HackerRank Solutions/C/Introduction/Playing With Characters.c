#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char ch;
    scanf("%c",&ch);
    char s[10];
    scanf("%s",s);
    char t;
    scanf("%c",&t);
    char sen[100];
    scanf("%[^\n]",sen);
    printf("%c\n",ch);
    printf("%s\n",s);
    printf("%s\n",sen);
    return 0;
}

