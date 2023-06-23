#ifndef _CALC_H_
#define _CALC_H_

#include <stdlib.h>
#include <stdio.h>

/**
 * struct op - op struct
 * @op: operator
 * @f: function associated
 */

typedef struct op
{
	char *op;
	int(*f)(int x, int y);
} op_t;

int op_ad(int x, int y);
int op_sub(int x, int y);
int op_mul(int x, int y);
int op_div(int x, int y);
int op_mod(int x, int y);
int (*get_op_funct(char *s))(int, int);

#endif
