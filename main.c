#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define days_in_year 365
enum days {sun=1, mon, tue, wed, thu, fri, sat};

int main(){
/*
	printf("hello world\n");
	getchar();
	printf("%d\n",1);
	getchar();
	int x_int = 0;
	printf("%zu\n",sizeof(int));
	char a[50] = "hello this is a string";
	printf("%s\n",a);
	int num = 0;
	switch(num){
		case 0:
			printf("Hey, your num is 0!\n");
			break;
		case 5:
			printf("Hey, your num is 5!\n");
			break;
		default:
			fputs("error!\n",stderr);
			exit(-1);
			break;
	}
*/
 int x = 0;
  printf("%p\n", (void *)&x);
	return(0);
}
