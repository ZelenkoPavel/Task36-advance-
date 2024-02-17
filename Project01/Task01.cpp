#include <iostream>

using namespace std;

#define vertically 3
#define horizontally 6


void random_init_matrix(int matrix[vertically][horizontally], int max, int min);
string convert_matrix_to_string(int matrix[vertically][horizontally]);

int counting_saddle_points(int matrix[vertically][horizontally]);

int main() {
	int max = 5, min = 1;

	///////////////Check///////////////
	int matrix[vertically][horizontally] = {{2, 3, 3, 4, 5, 6},
											{1, 3, 3, 3, 3, 3},
											{1, 3, 3, 4, 5, 6}};

	cout << convert_matrix_to_string(matrix) << endl;

	cout << "Result - " << counting_saddle_points(matrix) << endl;
	///////////////Check///////////////


	
	random_init_matrix(matrix, max, min);

	cout << convert_matrix_to_string(matrix) << endl;

	cout << "Result - " << counting_saddle_points(matrix) << endl;

	return 0;
}