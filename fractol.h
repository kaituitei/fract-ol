#ifndef FRACTOL_H
# define FRACTOL_H
# include <mlx.h>
# include <math.h>
# include <unistd.h>
# include <stdio.h>
# include <stdint.h>
# include "libft.h"
# include "ft_printf.h"

# define MAX_ITER 100
# define WIDTH 1920.0
# define HEIGHT 1080.0
# define X_MIN -1.6
# define X_MAX 1.6
# define Y_MIN -0.9
# define Y_MAX 0.9

// KEY CODES
# define ESC 53
# define UP 126
# define DOWN 125
# define LEFT 123
# define RIGHT 124
# define R 15
# define C 8
# define H 4
# define J 38
# define P 35
# define M 46

typedef struct s_data
{
    void	*mlx;	
    void	*mlx_win;
    void	*img;
    char	*addr;
    int		bits_per_pixel;
    int		line_length;
    int		endian;
    double	zoom;
    int		cx;
    int		cy;
    int		max_iter;
    int		m_x; // mouse coordinate
    int		m_y; // mouse coordinate
}		t_data;

typedef struct s_pcor
{
    int	x_c;
    int	y_c;
}		t_pcor;

typedef struct s_complex 
{
    double	real;
    double	i;
}		t_complex;

// plot
void	my_mlx_pixel_put(t_data *data, const int p_x, const int p_y, int color);

// mandelbrot
int	calc_mandelbrot(t_complex *complex);
void	plot_mandelbrot(t_data *img);

// math
t_complex	*offset_cal(const int p_x, const int p_y);
t_complex	*convert_to_complex(t_data *img, const int p_x, const int p_y);
uint32_t	get_color(const int iter);

// event
int	ft_close_win(t_data *img);
int	ft_key_hook(int key_code, void *data);

#endif
