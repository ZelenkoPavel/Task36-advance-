#include <iostream>

using namespace std;

#define vertically 3
#define horizontally 6

int counting_saddle_points(int matrix[vertically][horizontally]) {
	int quantity = 0;


	for (int i = 0; i < vertically; i++) {
		int min = 2147483648;
		int max = -2147483648;

		for (int l = 0; l < horizontally; l++) {
			for (int j = 0; j < horizontally; j++) {
				if (min > matrix[i][j]) {
					min = matrix[i][j];
				}
			}
			for (int k = 0; k < vertically; k++) {
				if (min > matrix[k][l]) {
					min = matrix[k][l];
				}
			}
			if (min == matrix[i][l] && max == matrix[i][l]) {
				quantity++;
			}
		}
	}

	return quantity;
}