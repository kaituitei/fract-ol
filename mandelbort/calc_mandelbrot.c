#include "../fractol.h"

void	calc_mandelbrot(t_data *img, double x_c, double y_c) // x_c, y_c = real position on coordinate system
{
    double	x;
    double	y;
    int		iter;
    double	x_temp;
    int		color;

    x = 0;
    y = 0;
    iter = 0;
    while ((x * x) + ( y * y) <= 4 && iter < MAX_ITER) // escape time algo
    {
	x_temp = (x * x) - (y * y) + x_c;
	y = 2 * x * y + y_c;
	x = x_temp;
	iter++;
    }
    if (iter == MAX_ITER)
    {
	color = 0x00FF0000;
	my_mlx_pixel_put(img, convert_to_pixel(img, x_c, y_c), color);
    }
    else
    {
	color = 0x00000000;
	my_mlx_pixel_put(img, convert_to_pixel(img, x_c, y_c), color);
    }
}
