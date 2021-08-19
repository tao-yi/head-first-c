#include <stdio.h>
#include <stdlib.h>

int main() {
  char card_name[3];
  puts("输入牌名: ");
  // 输入两个字符串
  scanf("%2s", card_name);
  int val = 0;
  if (card_name[0] == 'K') {
    val = 10;
  } else if (card_name[0] == 'Q') {
    val = 10;
  } else if (card_name[0] == 'J') {
    val = 10;
  } else if (card_name[0] == 'A') {
    // 将文本转换为数值
    val = 11;
  }else {
    val = atoi(card_name);
  }

  // 检查牌的点数是否在3和6之间
  if (val >= 3 && val <= 6) {
    puts("计数增加");
  }else if (val == 10) {
    puts("计数减少");
  }
  
  return 0;
}