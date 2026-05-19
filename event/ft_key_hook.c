#include "../fractol.h"

int	ft_key_hook(int key_code, void *data)
{
    t_data	*fractal;

    fractal = data;
    if (key_code == ESC)
	exit(1);
    else if (key_code == w)
	fractal->y_offset -= 1.0 / fractal->zoom;
    else if (key_code == s)
	fractal->y_offset += 1.0 / fractal->zoom;
    else if (key_code == a)
	fractal->x_offset += 1.0 / fractal->zoom;
    else if (key_code == d)
	fractal->x_offset -= 1.0 / fractal->zoom;
    plot_mandelbrot(fractal);
    return (0);
}
