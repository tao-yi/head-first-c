#include <stdio.h>
#include "island.h"

int main() {
  island *start = NULL;
  island *prev = NULL;
  island *next = NULL;
  char *names[] = {"Amity", "Craggy", "Isla Nublar", "Shutter"};

  size_t l = sizeof(names) / sizeof(names[0]);

  int i = 0;
  while ( i < l ) {
    next = create(names[i]);
    if (start == NULL) {
      start = next;
    }
    if (prev != NULL) {
      prev->next = next;
    }
    prev = next;
    ++i;
  }

  display(start);

  release(start);
}
