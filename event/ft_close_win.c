#include "fractol.h"

int	ft_close_win(int keycode, t_data *img)
{
    (void *)keycode;
    mlx_destroy_window(img->mlx, img->win);
    return (0);
}
