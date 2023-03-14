#include <stdio.h>

int main(int argc, char* argv[]) {
	printf("I'm a Bot. Wha't your name?\n");
	char name[20];
	scanf("%s", name);
	printf("Hello, %s! How old are you?\n", name);
	int age;
	scanf("%d", &age);
	printf("You are looking younger! "
		"I thought you are %d!\n", age);
	return 0;
}
