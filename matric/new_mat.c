#include "../fractol.h"

int	**new_mat(size_t rows, size_t cols)
{
   int		**new_mat;
   size_t	i;

   new_mat = (int **) malloc(sizeof(int *) * rows);
   if (!new_mat)
   {
       ft_printf("Can't create matrix\n");
       return (0);
   }
   i = 0;
   while (i++ < cols)
   {
       new_mat[i] = (int *) malloc(sizeof(int) * cols);
       if (!new_mat[i])
       {
	   ft_printf("Can't create matrix\n");
	   return (0);
       }
       ft_memset(new_mat[i], 0, 4 * cols);
   }
   return (new_mat);
}
