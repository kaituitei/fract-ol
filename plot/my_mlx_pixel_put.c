#include "../fractol.h"

void	my_mlx_pixel_put(t_data *data, const int p_x, const int p_y, int color)
{
    char *dst;

    if ((p_x < 0 || p_y > 1980) || (p_x < 0 || p_y > 1080))
	return ;
    dst = data->addr + (p_y * data->line_length + p_x * (data->bits_per_pixel / 8));
    *(unsigned int*)dst = color;
}
