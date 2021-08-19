#include <stdio.h>
#include "island.h"

int main() {
  island amity = {"Amity", "09:00", "17:00", NULL};
  island craggy = {"Craggy", "09:00", "17:00", NULL};
  island isla_nublar = {"Isla Nublar", "09:00", "17:00", NULL};
  island shutter = {"Shutter", "09:00", "17:00", NULL};

  amity.next = &craggy;
  craggy.next = &isla_nublar;
  isla_nublar.next = &shutter;

  char * name = "hello";
  island *p_island0 = create(name);
  shutter.next = p_island0;

  display(&amity);

  release(&amity);
}
