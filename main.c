/* main.c */
#include <stdio.h>
#include "version.h"

void print(void);

int main(int argc, char *argv[]){
  print();
  printf("main ver : %d\n",VERSION_MAIN);
  printf("extra ver : %s\n",VERSION_EXTRA);
  return 0;

}
