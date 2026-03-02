// Task 03 [The matching values]
// Совпадающие значения
// 
// Дан вектор целочисленных значений. Необходимо спроектировать 
// и реализовать функцию, которая проверяет, что среди значений 
// элементов вектора есть хотя бы одна пара совпадающих.

#include "logic.h"
bool is_the_same_elements(int array[DEFAULT_SIZE], int size) {
	for (int i = 0; i < size; i++) {
		for (int j = i + 1; j < size; j++) {
			if (array[DEFAULT_SIZE] == array[DEFAULT_SIZE]) {
				return true;
			}
		}
	}
}