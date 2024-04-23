#include<stdio.h>
#include<math.h>
#include<ctype.h>
#include<string.h>
int prime(char n)
{
   if(n=='2'||n=='3'||n=='5'||n=='7') return 1;
   return 0;
}
int check(char s[])
{
    int l=strlen(s);
    
    for(int i=0;i<l/2;i++)
    {
        if (s[i] != s[l - i - 1])
			return 0;
        if(prime(s[i])==0)
        {
            return 0;
        }
    }
    return 1;
}
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        char s[501];
        scanf("%s", &s);
        if(check(s)) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}