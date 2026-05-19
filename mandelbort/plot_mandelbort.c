#include "../fractol.h"

void	plot_mandelbrot(t_data *img)
{
    int	p_x;
    int	p_y;
    int	iter;

    p_x = 0;
    printf("Re-plotting\n");
    while (p_x < WIDTH)
    {
	p_y = 0;
	while (p_y < HEIGHT)
	{
	   iter = calc_mandelbrot(img, convert_to_complex(img, p_x, p_y));
	   if (iter == img->max_iter)
		my_mlx_pixel_put(img, p_x, p_y, 0x00000000);
	   else
	       my_mlx_pixel_put(img, p_x, p_y, get_color(iter));
	   p_y++;
	}
	p_x++;
    }
    printf("x_offset:%f\ny_offset:%f\n", img->x_offset, img->y_offset);
    mlx_put_image_to_window(img->mlx, img->mlx_win, img->img, 0, 0);
}
