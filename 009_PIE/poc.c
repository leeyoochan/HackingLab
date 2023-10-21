#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char** argv) 
{
	int num;
	char buf[64];
	puts("PIE");

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
				return 0;
		}
	}
	return 0;
}
