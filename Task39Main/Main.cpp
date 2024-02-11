#include <iostream>
#include <string>

using namespace std;

#define N 3
#define M 3

string convert_matrix_to_string(int matrix[N][M]);

bool null_matrix_check(int matrix[N][M]);
bool diagonal_matrix_check(int matrix[N][M]);
bool unit_matrix_check(int matrix[N][M]);

bool reverse_diagonal_matrix_check(int matrix[N][M]);
bool reverse_unit_matrix_check(int matrix[N][M]);

int main() {
    int matrix[N][M] = { {1, 0, 0}, {0, 1, 0}, {0, 0, 1} };

    cout << convert_matrix_to_string(matrix) << endl;

    cout << "This is null matrix?: " << null_matrix_check(matrix) << endl;

    cout << "This is diagonal matrix?: " << diagonal_matrix_check(matrix) << endl;

    cout << "This is a unit matrix?: " << unit_matrix_check(matrix) << endl << endl;


    cout << "This is reversed diagonal matrix?: " << reverse_diagonal_matrix_check(matrix) << endl;

    cout << "This is reversed unit matrix?: " << reverse_unit_matrix_check(matrix) << endl;

    return 0;
}