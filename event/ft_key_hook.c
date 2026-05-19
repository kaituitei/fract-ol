#include "../fractol.h"

int	ft_key_hook(int key_code, void *data)
{
    t_data	*fractal;

    fractal = data;
    ft_printf("key code: %d\n", key_code);
    if (key_code == ESC)
    {
	ft_printf("Exit program\n");
	exit(1);
    }
    else if (key_code == w)
	fractal->y_offset += 100 / fractal->zoom;
    else if (key_code == s)
	fractal->y_offset -= 100 / fractal->zoom;
    else if (key_code == a)
	fractal->x_offset -= 100 / fractal->zoom;
    else if (key_code == d)
	fractal->x_offset += 100 / fractal->zoom;
    plot_mandelbrot(fractal);
    printf("x_offset: %f\ny_offset: %f\n", fractal->x_offset, fractal->y_offset);
    ft_printf("Listening..\n");
    return (0);
}
