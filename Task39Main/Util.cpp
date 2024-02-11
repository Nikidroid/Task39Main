#include <iostream>
#include <string>

using namespace  std;

#define N 3
#define M 3

string convert_matrix_to_string(int matrix[N][M]) {
    string result;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            result += to_string(matrix[i][j]) + " ";
        }
        result += "\n";
    }
    return result;
}