#include "../fractol.h"

int	ft_close_win(int keycode, t_data *data)
{
    (void)keycode;
    mlx_destroy_window(data->mlx, data->mlx_win);
    return (0);
}
