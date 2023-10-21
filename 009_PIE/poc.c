#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void jump_to_here()
{
	system("/bin/sh");
}

int main(int argc, char** argv) 
{
	int num;
	char buf[64];
	puts("Stack Canary Bypass Training!");

	while(1)
	{
		printf(" > ");
		scanf("%d", &num);
		switch(num)
		{
			// Input
			case 1:
				read(0, buf, 200);
				break;
			case 2:
				printf("%s\n", buf);
				break;
			default:
				return 0;
		}
	}
	return 0;
}
