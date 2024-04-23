#include<stdio.h>
#include<math.h>
#include<ctype.h>
#include<string.h>
int check(char a[])
{
    if(a[7] > a[6] && a[8] > a[7] && a[10] > a[8] && a[11] > a[10]) return 1;
    if(a[6]==a[7]&&a[7]==a[8]&&a[10]==a[11]) return 1;
    for(int i=6;i<12;i++)
    {
        if(i!=9)
        if(a[i]!='6'&&a[i]!='8') return 0;
    }
    return 1;
}
int main(){
    int t;
    scanf("%d", &t);
    getchar();
    while (t--)
    {
        char s[100];
        gets(s);
        if(check(s)) printf("YES\n");
        else printf("NO\n");
    }
    
    return 0;
}