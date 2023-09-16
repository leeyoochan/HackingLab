#include<stdio.h>

void jump_to_here()
{
	system("/bin/sh");
}

void vuln()
{
	char buf[64];
	scanf("%64s", buf);
	printf(buf);
	
	printf("End\n");
}

int main()
{
	vuln();
}
