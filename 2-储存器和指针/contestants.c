#include <stdio.h>

int main(){
  int contestants[] = {1,2,3};
  int *choice = contestants; // 指向1的地址
  contestants[0] = 2;
  contestants[1] = contestants[2];
  contestants[2] = *choice; // 1
  printf("我选 %i 号男嘉宾\n", contestants[2]);
  return 0;
}