#include <stdio.h>

int main() {
  int i;
  char d[21];
  scanf("%s", d);
  for (i = 0; d[i] != '\0'; i++) {
    printf("\'%c\'\n", d[i]);
  }

  return 0;
}
