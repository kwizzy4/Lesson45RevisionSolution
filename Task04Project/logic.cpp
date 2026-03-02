// Task 04 [The swap of extreme elements]
// Обмен экстремальных элементов
// 
// Дан вектор целочисленных значений. Необходимо спроектировать 
// и реализовать функцию, которая меняет экстремальные элементы 
// вектора местами. Если экстремальных элементов несколько, 
// то необходимо поменять первые найденные элементы.

#include "logic.h"

void swap_extrem_elements(int array[DEFAULT_SIZE], int size) {
	if (size < 2) return;

	int minVal = array[0];
	int maxVal = array[0];
	int minIdx = 0;
	int maxIdx = 0;

	for (int i = 1; i < size; i++) {
		if (array[i] < minVal) {
			minVal = array[i];
			maxIdx = i;
		}
	}

	int temp = array[minIdx];
	array[minIdx] = array[maxIdx];
	array[maxIdx] = temp;
}