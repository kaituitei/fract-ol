#include "../fractol.h"

t_gcor	*offset_cal(const int p_x, const int p_y)
{
    t_gcor	*offset;

    offset = (t_gcor *) malloc(sizeof(t_gcor));
    if (!offset)
	return (NULL);
    offset->x = X_MIN + (p_x - X_MIN) / X_MAX - X_MIN * WIDTH;
    offset->y = Y_MAX - (p_y - Y_MIN) / Y_MAX - Y_MIN * HEIGHT;
    return (offset);
}
