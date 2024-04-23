#include<stdio.h>
#include<math.h>
#include<ctype.h>
#include<string.h>

int main(){
    char s[200];
    gets(s);
    char b[200];
    scanf("%s", &b);
    char a[100][100];
    int l=0;
    char *token= strtok(s," ");
    while(token!=NULL)
    {
        strcpy(a[l++],token);
        token=strtok(NULL," ");
    }
    for(int i=0;i<l;i++)
    {
        if(strcmp(a[i],b)!=0) printf("%s ", a[i]);
    }
    return 0;
}