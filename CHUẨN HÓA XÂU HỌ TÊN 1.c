#include<stdio.h>
#include<math.h>
#include<ctype.h>
#include<string.h>
void slove()
{
    char s[105];
    gets(s);
    char a[105][105];
    int t=0;
    char *token= strtok(s, " ");
    while(token!=NULL)
    {
        strcpy(a[t++],token);
        token=strtok( NULL ," ");
    }
    for(int i=0;i<t;i++)
    {
        if(a[i][0]>='a'&&a[i][0]<='z') a[i][0]-=32;
        for(int j=1;j<strlen(a[i]);j++)
        {
            if(a[i][j]>='A'&&a[i][j]<='Z') a[i][j]+=32;
        }
        printf("%s ", a[i]);
    }
    printf("\n");
}
int main(){
    int n;
    scanf("%d", &n);
    getchar();
    while(n--) slove();
    return 0;
}