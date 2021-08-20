#include <stdio.h>
#include <stdlib.h>
#include "island.h"
#include <string.h>

// 这里使用字符指针而不是字符数组，以为字符指针不会限制字符串的长度
island *create(char *name) {
  // 会在heap创建一个新的island struct
  island *i = (island *) malloc(sizeof(island));
  // 如果传入的name是字符数组，则它有可能在别处被修改
  // 为了防止出错，必须复制name数组
  i->name = strdup(name);
  i->opens = "09:00";
  i->closes = "17:00";
  i->next = NULL;
  return i;
}

void display(island *start) {
  island *i = start;
  for (;i!=NULL;i=i->next) {
    printf("Name: %s open: %s-%s\n", i->name, i->opens, i->closes);
  }
}

void release(island *start) {
  island *i = start;
  island *next = NULL;
  for (;i!=NULL; i=next) {
    next = i->next;
    // 首先释放 strdup() 创建的name字符串
    free(i->name);
    // 只有先释放name，才能释放island结构
    // 如果先释放了island结构，就再也找不到name去释放了。
    free(i);
  }
}