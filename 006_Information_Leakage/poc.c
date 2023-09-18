#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct memo
{
        char data[32];
        void (*func)(char *);
}MEMO;

MEMO *pointer[5];

void start() 
{
	// ALLOC TWO OBJECTS
        pointer[0] = (MEMO *)malloc(sizeof(MEMO));
        memset(pointer[0], 0, sizeof(MEMO));
        pointer[0]->func = printf;
        pointer[1] = (MEMO *)malloc(sizeof(MEMO));
        memset(pointer[1], 0, sizeof(MEMO));
        pointer[1]->func = printf;

        // INPUT DATA
	read(0, pointer[0]->data, 60);
  	printf("%s\n", pointer[0]->data);

	read(0, pointer[1]->data, 60);
  	pointer[1]->func(pointer[1]->data);
 }

int main(int argc, char** argv) {
  /* no warning */
  printf("Information Leakage\n");
  start();
  return 0;
}
