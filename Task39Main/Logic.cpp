#define N 3
#define M 3

bool null_matrix_check(int matrix[N][M]) {
    bool result = true;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (matrix[i][j] != 0) {
                result = false;
                break;
            }
        }
        if (!result) {
            break;
        }
    }

    return result;
}
bool diagonal_matrix_check(int matrix[N][M]) {
    bool result = false;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (matrix[i][i] > 0) {
                result = true;
                break;
            }
        }
        if (!result) {
            break;
        }
    }

    return result;
}
bool unit_matrix_check(int matrix[N][M]) {
    bool result = true;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (matrix[i][i] != 1) {
                result = false;
                break;
            }
            else if (i != j && matrix[i][j] != 0) {
                result = false;
                break;
            }
        }
        if (!result) {
            break;
        }
    }

    return result;
}

bool reverse_diagonal_matrix_check(int matrix[N][M]) {
    bool result = false;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (matrix[i][i] == 0) {
                result = true;
                break;
            }
            else if (i != j && matrix[i][j] == 0) {
                result = false;
                break;
            }
        }
        if (!result) {
            break;
        }
    }

    return result;
}
bool reverse_unit_matrix_check(int matrix[N][M]) {
    bool result = false;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (matrix[i][i] == 0) {
                result = true;
                break;
            }
            else if (i != j && matrix[i][j] == 1) {
                result = true;
                break;
            }
        }
        if (!result) {
            break;
        }
    }

    return result;
}