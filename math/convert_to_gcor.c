#include "../fractol.h"

t_gcor	*convert_to_gcor(t_data *img, const int p_x, const int p_y)
{
    t_gcor	*gcor;

    gcor = offset_cal(p_x, p_y);
    if (!gcor)
	return (NULL);
    gcor->x = (img->m_x - gcor->x) / img->zoom;
    gcor->y = (img->m_y - gcor->y) / img->zoom;
    return (gcor);
}
