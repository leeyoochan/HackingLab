#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void jump_to_here()
{
	execve("/bin/sh", NULL, NULL);
}

int main(int argc, char** argv) 
{
	int num;
	char buf[64];
	puts("Canary");

	while(1)
	{
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
				puts("Err\n");
				return 0;
		}
	}
	return 0;
}
