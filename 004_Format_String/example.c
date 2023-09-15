#include <stdio.h>

int main()
{
	char buf[32] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int count;

	printf("%s%n\n", buf, &count);

	printf("Count : %d\n", count);
}
