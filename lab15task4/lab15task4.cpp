// lab15task4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <stdio.h>

int main() {

	//масив на десять елементів
	int array[10], i, sum_of_array = 0;
	//виводимо завдання для користувача
	printf("Enter 10 numbers:\n");
	//вводимо десяти елементів масиву
	for (i = 0; i < 10; i++) {
		scanf_s("%d", &array[i]);
	}
	//сума елементів масиву
	for (i = 0; i < 10; i++) {
		sum_of_array += array[i];
	}
	//вивести результат
	printf("Sum:%d\n", sum_of_array);
	return 0;
}