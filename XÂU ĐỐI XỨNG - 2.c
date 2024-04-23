#include<stdio.h>
#include<math.h>
#include<ctype.h>
#include<string.h>

int main(){
    char s[1000005];
    gets(s);
    printf("%d", strlen(s)-1);
    return 0;
}