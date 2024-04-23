#include<stdio.h>
#include<math.h>
#include<ctype.h>
#include<string.h>
#include<stdbool.h>

int main(){
    char s[200];
    gets(s);
    char a[100][100];
    int l=0;
    char *token= strtok(s," ");
    while(token!=NULL)
    {
        bool check = true;
        for (int i = 0; i < l; i++)
        {
            if (strcmp(token, a[i]) == 0)
            {
                check = false;
                break;
            }
        }

        if (check == true)
        {
            strcpy(a[l], token);
            l++;
        }
        token = strtok(NULL, " ");
    }
    for(int i=0;i<l;i++)
    {
      printf("%s ", a[i]);
    }
    return 0;
}