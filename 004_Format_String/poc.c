#include<stdio.h>

void jump_to_here()
{
	system("/bin/sh");
}

void vuln()
{
	char buf[64];
	read(0, buf, 64);
	printf(buf);

	exit(0);	
}

int main()
{
	vuln();
}
