#include "../fractol.h"

int	calc_mandelbrot(t_complex *complex) 
{
    double	x;
    double	y;
    int		iter;
    double	x_temp;

    x = 0;
    y = 0;
    iter = 0;
    if (!complex)
    {
	free(complex);
	return (MAX_ITER);
    }
    while ((x * x) + (y * y) <= 4 && iter < MAX_ITER) // escape time algorithm
    {
	x_temp = (x * x) - (y * y) + complex->real;
	y = 2 * x * y + complex->i;
	x = x_temp;
	iter++;
    }
    free(complex);
    return (iter);
}
