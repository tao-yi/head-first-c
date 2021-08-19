#include <stdio.h>


// 传给函数的是指针
void fortune_cookie(char msg[]) {
  printf("Message reads: %s\n", msg);
  // sizeof on array function parameter will return size of 'char *' instead of 'char []'
  // 这里打印的是指针变量的大小罢了，在64位系统中占8字节
  printf("msg occupies %lu bytes\n", sizeof(msg));
}

int main() {
  // quote变量其实是其实是指针变量，指向字符串首字母的地址
  char quote[] = "Cookies make you fat";
  
  fortune_cookie(quote);
}