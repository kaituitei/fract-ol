#include "fractol.h"

void	ft_mandelbrot_hook(void *para)
{
    t_data	*fractol;

    data = (t_data *)para;
    fractol = (t_fractol *)para;
    if (mlx_is_key_down(fractol->mlx, MLX_KEY_ESCAPE))
	    mlx_close_window(fractol->mlx);
    if (mlx_is_key_down(fractol->mlx, MLX_KEY_UP))
    {
	    fractol->shift_y -= (0.1 * fractol->zoom);
	    plot_mandelbrot(fractol);
    }
    if (mlx_is_key_down(fractol->mlx, MLX_KEY_DOWN))
    {
	    fractol->shift_y += (0.1 * fractol->zoom);
	    plot_mandelbrot(data);
    }
    if (mlx_is_key_down(fractol->mlx, MLX_KEY_LEFT))
    {
	    fractol->shift_x -= (0.1 * fractol->zoom);
	    plot_mandelbrot(fractol);
    }
    if (mlx_is_key_down(fractol->mlx, MLX_KEY_RIGHT))
    {
	    fractol->shift_x += (0.1 * fractol->zoom);
	    plot_mandelbrot(fractol);
    }
}
