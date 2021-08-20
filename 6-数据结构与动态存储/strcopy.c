#include <stdio.h>
#include <stdlib.h>

char *strcopy(char *s) {
  int len = 0;
  while (s[len] != '\0') {
    ++len;
  }

  char *clone = (char *)malloc(len + 1);
  int i;
  for (i = 0; s[i] != '\0'; i++) {
    clone[i] = s[i];
  }

  clone[i+1] = '\0';
  return clone;
}

int main() {
  // 常量区constants，在低位
  char *s_literal = "hello,world!";
  printf("*s_literal=%p\n", s_literal);

  // stack，在高位
  char s_array[] = "hello,world!";
  printf("*s_array  =%p\n", s_array);

  char *clone = strcopy(s_literal);

  printf("clone=%s\n", clone);
  printf("*clone    =%p\n", clone);

  return 0;
}