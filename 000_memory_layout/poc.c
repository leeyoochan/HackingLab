#include<stdio.h>
#include<unistd.h>

int uninitialized;
const int initialized = 10;

int main()
{
	void *heap = malloc(1024);
	int stack = 1024;
	int pid = getpid();
	char buf[64];

	sprintf(buf, "cat /proc/%d/maps", pid);
	system(buf);
	
	printf("================================================\n");
	printf("Address of function : 0x%lX\n", &main);
	printf("Address of initialized data : 0x%lX\n", &initialized);	
	printf("Address of uninitialized data : 0x%lX\n", &uninitialized);	

	printf("Address of heap data : 0x%lX\n", heap);
	printf("Address of stack data : 0x%lX\n", &stack);
}
