#include <stdio.h>

int main(){
  char food[5];
  printf("Enter favorite food: ");
  // scanf会导致缓冲区溢出
  // 如果忘了限制scanf读取字符串的长度，用户就可以输入远远超出程序空间的数据
  // 多余的数据会写到计算机还没有分配好的内存中 segmentation fault
  scanf("%s\n", food);

  // 像这样限制读取的长度，就不会导致 segmentation fault
  // scanf("%3s", food);
  printf("Favorite food: %s\n", food);


  // fgets也可以用来输入文本数据，但是它要求你必须给出最大长度
  fgets(food, sizeof(food), stdin);

  printf("Favorite food: %s\n", food);

  return 0;
}