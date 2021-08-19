#include <stdio.h>

int main() {
  // 声明指针变量 *cards
  // 在常量区创建字符串字面值，常量区是只读的内存区域
  // char *cards = "JQK";

  // 也会在常量区创建一个字符串字面值 "JQK"
  // 但是也会在栈上创建一个数组并且
  // 复制字符串内容到数组中 {'J', 'Q', 'K', '\0'}
  char cards[] = "JQK";
  char a_card = cards[2];
  // bus error，字符串无法更新
  cards[2] = cards[1];
  puts(cards);
  return 0;
}