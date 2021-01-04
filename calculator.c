#include<stdio.h>

int Squared(int a, int b) {
	int result = a;
	for (int i = 0; i < b-1; i++) {
		result *= a;
	}
	return result;
}

int main(void) {
	int first_num, second_num;
	char Operator;
	int result=0;

	while (1) {
		printf("수식을 입력하시오:");
		scanf_s("%d %c %d", &first_num, &Operator, 1, &second_num);

		switch (Operator)
		{
		case '+':
			result = first_num + second_num;
			break;
		case '-':
			result = first_num - second_num;
			break;
		case '*':
			result = first_num * second_num;
			break;
		case '/':
			result = first_num / second_num;
			break;
		case '^':
			result=Squared(first_num,second_num);
			break;
		}

		printf("결과: %d\n", result);
	}
	return 0;

}