#include<stdio.h>
#include<math.h>
#include<ctype.h>
#include<string.h>
int main(){
    int t;
    scanf("%d", &t);
    getchar();
    while (t--)
    {
        char c[200];
        gets(c);
        int count=0;
        if(c[0]!=' ') count =1;
        for(int i=0;i< strlen(c)-1;i++)
        {
           if(c[i]==' '&& c[i+1]!=' ') count++;
        }
        printf("%d\n", count);
    }
    

    return 0;
}