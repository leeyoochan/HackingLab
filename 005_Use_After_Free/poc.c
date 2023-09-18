#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct memo
{
        void (*func)(char *);
        char data[28];
}MEMO;

MEMO *pointer[5];

void jump_to_here() {
	system("/bin/sh");
}

void print(char *data)
{
        printf("%s\n", data);
}

void start() 
{
	// ALLOC TWO OBJECTS
	char *p = malloc(32);
       	// FREE p
	free(p);

	pointer[0] = (MEMO *)malloc(sizeof(MEMO));
        memset(pointer[0], 0, sizeof(MEMO));
        pointer[0]->func = print;


        // INPUT DATA
	read(0, p, 32);

	// CAT DATA
  	pointer[0]->func(pointer[0]->data);
 }

int main(int argc, char** argv) {
  /* no warning */
  start();
  return 0;
}
