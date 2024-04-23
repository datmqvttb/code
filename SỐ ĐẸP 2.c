#include <stdio.h>
#include <string.h>

int isBeautifulNumber(char *num) {
  int len = strlen(num);
  if (num[0] != '8' || num[len - 1] != '8') {
    return 0;
  }
  int sum = 0;
  for (int i = 0; i < len; i++) {
    if (num[i] < '0' || num[i] > '9') {
      return 0;
    }
    sum += num[i] - '0';
  }
  return sum % 10 == 0;
}

int main() {
  int t;
  scanf("%d", &t);
  while (t--) {
    char num[501];
    scanf("%s", num);

    if (isBeautifulNumber(num)) {
      printf("YES\n");
    } else {
      printf("NO\n");
    }
  }

  return 0;
}