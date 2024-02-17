#include <iostream>

using namespace std;

#define vertically 3
#define horizontally 6

int counting_saddle_points(int matrix[vertically][horizontally]) {
	int quantity = 0;
	

	for (int i = 0; i < vertically; i++) {
		int index_row = -1;
		//int index_coulmn = -1;

		for (int j = 0; j < horizontally; j++) {
			int min_value_in_a_row = 2147483648;

			for (int j = 0; j < horizontally; j++) {
				if (min_value_in_a_row > matrix[i][j]) {
					min_value_in_a_row = matrix[i][j];
				}
			}
			for (int k = 0; k < horizontally; k++) {
				if (min_value_in_a_row == matrix[i][k] && k != index_row) {
					index_row = k;
					break;
				}
			}

			int max_value_in_the_column = min_value_in_a_row;
			int max = -2147483648;
			for (int g = 0; g < vertically; g++) {
				if (max < matrix[g][index_row]) {
					max = matrix[g][index_row];
				}
			}
			if (max = max_value_in_the_column && j == index_row) {
				quantity++;
			}
		}
	}

	return quantity;
}