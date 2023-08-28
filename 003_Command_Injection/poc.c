#include<stdio.h>

int main()
{
	char addr[64];
	char buf[100];
	scanf("%s", addr);

	sprintf(buf, "ping %s", addr);
	printf("Command : %s\n", buf);
	system(buf);
}
