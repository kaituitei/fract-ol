#include "../fractol.h"

t_gcor	*offset_cal(const int p_x, const int p_y)
{
    t_gcor	*offset;

    offset = (t_gcor *) malloc(sizeof(t_gcor));
    if (!offset)
	return (NULL);
    offset->x = X_MIN + (p_x / WIDTH) * (X_MAX - X_MIN);
    offset->y = Y_MAX - (p_y / HEIGHT) * (Y_MAX- Y_MIN);
    return (offset);
}
