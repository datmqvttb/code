#include<stdio.h>
#include<math.h>
#include<ctype.h>
#include<string.h>

int main(){
    char s[205], a[51][51];
    gets(s);
    for(int i=0;i<strlen(s);i++)
    {
        if(s[i]>='A'&&s[i]<='Z') s[i]+=32;
    }
    int n=0;
    char *token =strtok(s, " ");
    while(token!= NULL)
    {
        strcpy(a[n++],token);
        token=strtok(NULL," ");
    }
    for(int i=0;i<n;i++)
    {
        if(i==n-1) printf("%s", a[i]);
        else printf("%c", a[i][0]);
    }
    printf("@ptit.edu.vn");
    return 0;
}