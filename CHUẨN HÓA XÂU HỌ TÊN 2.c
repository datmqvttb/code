#include<stdio.h>
#include<math.h>
#include<ctype.h>
#include<string.h>
void chuanhoa(char s[])
{
    s[0]=toupper(s[0]);
    for(int i=1;i<strlen(s);i++)
        s[i]= tolower(s[i]);
}
void last(char s[]){
    for(int i=0;i<strlen(s);i++)
        s[i]= toupper(s[i]);
}
int main(){
    int t;
    scanf("%d",&t);
    getchar();
    while(t--)
    {
        char s[1000], a[20][50];
        gets(s);
        int n=0;
        char *token =strtok(s, " ");
        while(token!=NULL)
        {
            strcpy(a[n],token);++n;
            token=strtok(NULL, " ");
        }
        for(int i=1;i<n-1;i++)
        {
            chuanhoa(a[i]);
            printf("%s ",a[i]);
        }
        chuanhoa(a[n-1]);
        printf("%s, ", a[n-1]);
        last(a[0]);
        printf("%s\n", a[0]);
    }
    return 0;
}