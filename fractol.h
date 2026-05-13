#ifndef FRACTOL_H
# define FRACTOL_H
# include <mlx.h>
# include <math.h>
# include <unistd.h>
# include <stdio.h>
# include "libft/libft.h"
# include "ft_printf/ft_printf.h"

# define MAX_ITER 500
# define WIDTH 1920
# define HEIGHT 1080
# define X_MIN -9.6
# define X_MAX 9.6
# define Y_MIN -5.4
# define Y_MAX 5.4

typedef struct s_data
{
    void	*img;
    char	*addr;
    int		bits_per_pixel;
    int		line_length;
    int		endian;
    double	zoom;
    int		cx;
    int		cy;
}		t_data;

typedef struct s_coor
{
    int	x_c;
    int	y_c;
}		t_coor;

//plot
void	my_mlx_pixel_put(t_data *data, t_coor *coor, int color);

// mandelbrot
void	calc_mandelbrot(t_data *img, double x_c, double x_y); // x_c, y_c = real position on coordinate system
void	plot_mandelbrot(t_data *img);

//matrix
t_coor	*convert_to_pixel(t_data *img, double x_c, double x_y);
int	**new_mat(size_t rows, size_t cols);

#endif
