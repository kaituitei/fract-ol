#include "../fractol.h"

int	calc_mandelbrot(t_gcor *gcor) 
{
    double	x;
    double	y;
    int		iter;
    double	x_temp;

    x = 0;
    y = 0;
    iter = 0;
    if (!gcor)
	return (MAX_ITER);
    while ((x * x) + (y * y) <= 4 && iter < MAX_ITER) // escape time algorithm
    {
	x_temp = (x * x) - (y * y) + gcor->x;
	y = 2 * x * y + gcor->y;
	x = x_temp;
	iter++;
    }
    free(gcor);
    return (iter);
}
