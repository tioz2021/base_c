#include <stdio.h>
#include <string.h>

#define SIZE 50

struct pp {
	char name[SIZE];
	int age;
};

int main(int argc, char *argv[]) {
	struct pp all_ppl[SIZE];
	int n;
	printf("Введите количество людей для заполнения: ");
	scanf("%d", &n);
	all_ppl[n];

	for(int i = 0; i < n; ++i) {
		char name[SIZE];
		int age;

		printf("Введите Имя: ");
		scanf("%s", name);
		strcpy(all_ppl[i].name, name);

		printf("Введите Возраст: ");
		scanf("%d", &age);
		all_ppl[i].age = age;
	}
	printf("\n");

	for(int i = 0; i < n; ++i) {
		printf("Имя человека по номеру %d :%s\n", i+1, all_ppl[i].name);
		printf("Возраст человека по номеру %d :%d\n", i+1, all_ppl[i].age);
		printf("\n");
	}
	return 0;
}
