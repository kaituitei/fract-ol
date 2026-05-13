#include "../fractol.h"

t_coor	*convert_to_pixel(t_data *img, double x_c, double y_c)
{
    t_coor	*new_coor;
    int		sx;
    int		sy;
    int		tx;
    int		ty;

    new_coor = (t_coor *) malloc(sizeof(t_coor));
    sx = round((WIDTH - 1) / (X_MAX - X_MIN));
    sy = round((WIDTH - 1) / (Y_MAX - Y_MIN));
    tx = WIDTH / 2;
    ty = HEIGHT / 2;
    new_coor->x_c = img->zoom * (sx * x_c + tx) + img->cx * (1 - img->zoom);
    new_coor->y_c = img->zoom * (sy * y_c + ty) + img->cx * (1 - img->zoom);
    return (new_coor);
}
