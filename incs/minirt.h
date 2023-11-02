
#ifndef MINIRT_H
# define MINIRT_H

#include <math.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../libft/incs/get_next_line.h"
#include "../libft/incs/libft.h"
#include "../libft/incs/ft_printf.h"
#include "../mlx_linux/mlx.h"
#include "vectors.h"
#include "keycodes.h"
#include "structs.h"




// ALLOC MEMORY
int 		alloc_struct_mem(t_all **all);

// INIT VARS
int			init_vars(t_all *all);

// START PROGRAM FLOW
int			start_mlx(t_all *all);



// DRAWING
void		put_pixel_coord(t_all *all, int x, int y, int color);
void		put_pixel_original(t_data *data, int x, int y, int color);
int			start_draw(t_all *all);
t_vec3 		canvas_to_viewport(int Cx, int Cy, t_viewport *viewp);

// KEY HOOKS
int			key_hook(int keycode, t_all *all);

// RAY
t_ray		init_ray(t_vec3 origin, t_vec3 direction);
void 		intersect_ray_sphere(t_ray r, t_sphere sphere, float *t1, float *t2);
int			trace_ray(t_ray r, float t_min, float t_max, t_scene scene);

// FREE MEMORY
void 		free_mem(t_all *all);

// EXIT PROGRAM
void 		exit_prog(t_all *all, char *str);


#endif