#ifndef FRACTOL_H
# define FRACTOL_H
# include <mlx.h>
# include <math.h>

# define MAX_ITER 500

typedef struct s_data
{
    void	*img;
    char	*addr;
    int		bits_per_pixel;
    int		line_length;
    int		endian;
}		t_data;

void	my_mlx_pixel_put(t_data *data, int x, int y, int color);

// mandelbrot
void	calc_mandelbrot(t_data *img, double x_c, double y_c);
void	plot_mandelbrot(t_data *img);

#endif
