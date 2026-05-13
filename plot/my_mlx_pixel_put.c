#include "../fractol.h"

void	my_mlx_pixel_put(t_data *data, t_coor *coor, int color)
{
    char *dst;

    if ((coor->x_c < 0 || coor->x_c > 1980) || (coor->y_c < 0 || coor->y_c > 1080))
	return ;
    dst = data->addr + (coor->y_c * data->line_length + coor->x_c * (data->bits_per_pixel / 8));
    *(unsigned int*)dst = color;
}
