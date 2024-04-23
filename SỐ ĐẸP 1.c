#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#define ll long long
#include <ctype.h>
void swap(char *a, char *b)
{
    int tmp=*a;
    *a=*b;
    *b=tmp;
}
void daonguocchuoi(char s[]){
	char tmp;
	for(int i=0,j=strlen(s)-1;i<j;i++,j--){
		swap(&s[i],&s[j]);
	}
}
int main(){
	int t;
	scanf("%d", &t);
	getchar();
	while(t--){
	char s[500];
	scanf("%s", s);
	char c[500];
	int t=0;
	strcpy(c,s);
	daonguocchuoi(s);
	for(int i=0,j=strlen(s)-1;i<j;i++,j--)
		if(s[i]%2!=0) t++;
	if(strcmp(c,s)==0&&t==0) printf("YES\n");
	else printf("NO\n");
}
	return 0;
}
