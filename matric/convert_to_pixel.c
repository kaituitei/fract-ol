#include "../fractol.h"

t_coor	*convert_to_pixel(t_data *img, t_coor *coor)
{
    t_coor	*new_coor;
    int		sx;
    int		sy;
    int		tx;
    int		ty;

    new_coor = (t_coor) malloc(sizeof(t_coor));
    sx = round((WIDTH - 1) / (X_MAX - X_MIN));
    sy = round((WIDTH - 1) / (Y_MAX - Y_MIN));
    tx = 960;
    ty = 540;
    new_cor->x_c = img->zoom * (sx * coor->x_c + tx) + img->cx * (1 - img->zoom);
    new_cor->y_c = img->zoom * (sy * coor->y_c + ty) + img->cx * (1 - img->zoom);
    return (new_coor);
}
