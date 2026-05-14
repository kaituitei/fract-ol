#include "../fractol.h"

void	plot_mandelbrot(t_data *img)
{
    int	p_x;
    int	p_y;
    int	iter;

    p_x = 0;
    while (p_x < WIDTH)
    {
	p_y = 0;
	while (p_y < HEIGHT)
	{
	   iter = calc_mandelbrot(convert_to_gcor(img, p_x, p_y));
	   if (iter == img->max_iter)
		my_mlx_pixel_put(img, p_x, p_y, 0x00FF0000);
	   else
	       my_mlx_pixel_put(img, p_x, p_y, 0x00000000);
	   p_y++;
	}
	p_x++;
    }
}
