/* Matrix lib */
#ifndef __MATRIX_H__
#define __MATRIX_H__

typedef struct _Matrix Matrix;

struct _Matrix {
    // Variables
    int rows, columns;
    float **data;

    int len;
};

/* Constructors */
Matrix* matrix_new_with_args(const int rows, const int columns);

Matrix* matrix_new(void);

Matrix* matrix_new_with_matrix(const Matrix *m);

/* Deconstructor */
void matrix_free(Matrix *m);

/* Operators */
void matrix_equal(register Matrix *a, const Matrix *b);

void matrix_subtract(register Matrix *a, const Matrix *b);

void matrix_multiply(register Matrix *a, const Matrix *b);

/* Functions */
Matrix* matrix_fromArray(const float* arr);

const float* matrix_toArray(const Matrix *m);

void matrix_randomize(register Matrix *m);

void matrix_add_matrix(register Matrix *a, const Matrix *b);

void matrix_add_float(register Matrix *a, const float n);

void matrix_multiply_scalar(register Matrix *m, const float n);

void matrix_map(register Matrix *m,  float (*func)(float));

void matrix_print(const Matrix *m);

/* Static functions */
Matrix* matrix_transpose_static(const Matrix *m);

Matrix* matrix_multiply_static(const Matrix *a, const Matrix *b);

Matrix* matrix_subtract_static(const Matrix *a, const Matrix *b);

Matrix* matrix_map_static(const Matrix *m, float (*func)(float));

#endif /* __MATRIX_H__ */
