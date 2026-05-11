#include "fractol.h"

void	plot_mandelbrot(t_data *img)
{
    double	x_c;
    double	y_c;


    x_c = -9.6;
    while (x_c < 9.6)
    {
	y_c = -5.4;
	while (y_c < 5.4)
	{
	   calc_mandelbrot(img, x_c, y_c);
	   y_c += 0.01;
	}
	x_c += 0.01;
    }
}
