#include<stdio.h>
#include<math.h>
#include<ctype.h>
#include<string.h>
void slove()
{
    char s[500];
    scanf("%s", &s);
    int l=strlen(s);
    int turn=0;
    int i=0, j=l-1;
    while(i<=j)
    {
        if(i==j&&turn==0) turn=1;
        if(s[i]!=s[j]) turn++;
        i++;j--;
    }
    if(turn ==1) printf("YES\n");
    else printf("NO\n");
}
int main(){
    int t;
    scanf("%d", &t);
    while(t--)
    slove();
    return 0;
}