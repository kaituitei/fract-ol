#include "../fractol.h"

int	ft_key_hook(int key_code, void *data)
{
    t_data	*fractal;

    fractal = data;
    if (key_code == ESC)
    {
	ft_printf("Exit program\n");
	exit(1);
    }
    (void)fractal;
    ft_printf("Listening\n");
    return (0);
}
