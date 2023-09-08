#include<stdio.h>


void vuln()
{
	char buf[64];
	scanf("%s", buf);
}

int main()
{
	vuln();
}
