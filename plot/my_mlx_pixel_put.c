#include "../fractol.h"

void	my_mlx_pixel_put(t_data *data, t_coor *coor, int color)
{
    char *dst;

    dst = data->addr + (coor->y_c * data->line_length + coor->x_c * (data->bits_per_pixel / 8));
    *(unsigned int*)dst = color;
    free(coor);
}
