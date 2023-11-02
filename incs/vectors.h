#ifndef VECTORS_H
# define VECTORS_H

# include "minirt.h"

typedef struct s_vec3
{
	double	x;
	double	y;
	double	z;
}	t_vec3;


t_vec3	vec3(double x, double y, double z);
float	vec3_dot(t_vec3 v1, t_vec3 v2);
t_vec3 	vec3_subtract(t_vec3 v1, t_vec3 v2);

#endif