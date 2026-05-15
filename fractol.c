#include <mlx.h>
#include "fractol.h"

int	main(void)
{
	t_data	img;
	void	*mlx;
	void	*mlx_win;

	mlx = mlx_init();
	mlx_win = mlx_new_window(mlx, WIDTH, HEIGHT, "Hello world!");
	img.img = mlx_new_image(mlx, WIDTH, HEIGHT);
	img.addr = mlx_get_data_addr(img.img, &img.bits_per_pixel, &img.line_length, &img.endian);
	img.zoom = 1.0;
	img.cx = WIDTH / 2;
	img.cy = HEIGHT / 2;
	img.max_iter = MAX_ITER;
	img.m_x = 0;
	img.m_y = 0;
	plot_mandelbrot(&img);
	mlx_put_image_to_window(mlx, mlx_win, img.img, 0, 0);
	mlx_loop(mlx);
}

