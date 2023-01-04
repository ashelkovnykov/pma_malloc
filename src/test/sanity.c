#include <stdlib.h>
#include <stdio.h>

#include "../malloc.h"

//==============================================================================
// Functions
//==============================================================================

int
main(int argc, char** argv) {

  void *ptr_1;
  void *ptr_2;
  void *ptr_3;
  void *ptr_4;
  void *ptr_5;
  void *ptr_6;
  void *ptr_7;
  void *ptr_8;
  void *ptr_9;
  void *ptr_0;

  if (pma_init(argv[1])) {
    fprintf(stderr, "not sane\n");
    return -1;
  };

  ptr_1 = pma_malloc(16);
  ptr_2 = pma_malloc(32);
  ptr_3 = pma_malloc(64);
  ptr_4 = pma_malloc(128);
  ptr_5 = pma_malloc(256);
  ptr_6 = pma_malloc(512);
  ptr_7 = pma_malloc(1024);
  ptr_8 = pma_malloc(2048);
  ptr_9 = pma_malloc(4096);
  ptr_0 = pma_malloc(8192);

  pma_free(ptr_1);
  pma_free(ptr_2);
  pma_free(ptr_3);
  pma_free(ptr_4);
  pma_free(ptr_5);
  pma_free(ptr_6);
  pma_free(ptr_7);
  pma_free(ptr_8);
  pma_free(ptr_9);
  pma_free(ptr_0);

  printf("sane\n");

  return 0;
}
