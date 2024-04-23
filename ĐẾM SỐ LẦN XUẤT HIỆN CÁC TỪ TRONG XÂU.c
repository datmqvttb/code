#include<stdio.h>
#include<math.h>
#include<ctype.h>
#include<string.h>

int main(){
    char a[105][105];
    int n=0;
    while (scanf("%s", &a[n])!=-1)
    {
        int l=strlen(a[n]);
        for(int i=0;i<l;i++)
            if(a[n][i]>='A'&&a[n][i]<='Z') a[n][i]+=32;
        n++;
    }
    for(int i=0;i<n;i++)
    {
        if(a[i][0]!=0)
        {
            int s=1;
            for (int j = i+1; j < n; j++)
            {
                if(strcmp(a[i],a[j])==0)
                {
                    s++;
                    a[j][0]=0;
                }
            }
           printf("%s %d\n", a[i], s ); 
        }
    }
    return 0;
}