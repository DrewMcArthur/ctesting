#include<stdio.h>

int main(){
	long universe = 1L * 1024L * 1024L *1024L;
	printf("long numbdre is %ld\n", universe);

	char nul_byte = '\0';
	int care_percentage = 100 * nul_byte;
	printf("which means you should care %d%%.\n", care_percentage);

	return 0;
}
