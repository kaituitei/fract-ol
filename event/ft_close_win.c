#include "../fractol.h"

int	ft_close_win(t_data *data)
{
    ft_printf("End program\n");
    mlx_destroy_image(data->mlx, data->img);
    mlx_destroy_window(data->mlx, data->mlx_win);
    free(data->mlx);
    exit(1);
    return (0);
}
