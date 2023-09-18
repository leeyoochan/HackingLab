#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void start() 
{
	char buf[32]; 
	read(0, buf, 200);
 }

int main(int argc, char** argv) 
{
	puts("Simple ROP");
	start();
	return 0;
}
