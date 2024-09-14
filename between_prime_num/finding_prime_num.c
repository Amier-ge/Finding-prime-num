#include<stdio.h>

void exchange(int a, int b);
void input_num(int *num1, int *num2);
void check_primeNum(int num1, int num2, int *prime_num);
void print_primeNum(int *prime_num);

int main() {

	int num1, num2;
	int prime_num[100] = {0};

	input_num(&num1, &num2);
	check_primeNum(num1, num2, prime_num);
	print_primeNum(prime_num);

	return 0;
}

void exchange(int a, int b){

	int temp;

	temp = a;
	a = b;
	b = temp;
}

void input_num(int *num1, int *num2){

	puts("Which number do you want to see prime numbers between?");
	printf("Input Two numbers : ");
	scanf("%d%d", num1, num2);

	if(*num1 > *num2) exchange(*num1, *num2);
}

void check_primeNum(int num1, int num2, int *prime_num){

	int i, j, index = 0;

	for(i = num1 + 1 ; i < num2 ; i++){

		for(j = 2 ; j < i ; j++){

			if(i % j == 0) break;

			else if(j == i - 1){
				*(prime_num + index) = i;
				index++;
			}
		}
	}

}

void print_primeNum(int *prime_num){

	int i = 0;

	while( *(prime_num + i) != 0) {
		printf("%d ", *(prime_num + i) );
		i++;
	}
	printf("\n");
}