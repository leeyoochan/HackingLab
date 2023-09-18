#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct memo
{
        void (*func)(char *);
        char data[32];
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
        pointer[0] = (MEMO *)malloc(sizeof(MEMO));
        memset(pointer[0], 0, sizeof(MEMO));
        pointer[0]->func = print;
        pointer[1] = (MEMO *)malloc(sizeof(MEMO));
        memset(pointer[1], 0, sizeof(MEMO));
        pointer[1]->func = print;

        // INPUT DATA
	scanf("%s", pointer[0]->data);
        scanf("%s", pointer[1]->data);

	// CAT DATA
  	pointer[0]->func(pointer[0]->data);
  	pointer[1]->func(pointer[1]->data);
 }

int main(int argc, char** argv) {
  /* no warning */
  start();
  return 0;
}
