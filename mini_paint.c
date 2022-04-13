#include <math.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct s_bg
{
	int w;
	int h;
	char *matrice;
} t_bg;

typedef struct s_shape
{
	char type;
	float x;
	float y;
	float radius;
	char shape_char;
} t_shape;


int in_shape(t_shape *shape, float x, float y)
{
	float distance;
	float distance_sqrt;

	distance_sqrt = sqrtf((x - shape->x) * (x - shape->x) + (y - shape->y) * (y - shape->y));
	distance = distance_sqrt - shape->radius;
	if (distance <= 0.00000000)
	{
		if (distance <= -1.00000000)
			return (1);
		return (2);
	}
	else 
		return (0);
}

void update_bg(t_bg *bg, t_shape *shape, int i, int j)
{
	int inside;

	inside = in_shape(shape, (float)i, (float)j);
	if (inside == 2 || (inside == 1 && shape->type == 'C'))
	{
		bg->matrice[i + j * bg->w] = shape->shape_char;
	}
}

int check_update(t_bg *bg, t_shape *shape)
{
	int i =0;
	int j;
	if (shape->radius <= 0.00000000 || (shape->type != 'c' && shape->type != 'C'))
		return(1);
	while (i < bg->w)
	{
		j = 0;
		while (j < bg->h)
		{
			update_bg(bg, shape, i, j++);
		}
		i++;
	}	
	return (0);
}

void print_matrice (t_bg bg)
{
	int i = 0;

	while (i < bg.h)
	{
		write(1, bg.matrice + (i * bg.w), bg.w);
		write(1, "\n", 1);
		i++;
	}
}

int execute(FILE *file)
{
	int ret_scan;
	t_bg bg;
	t_shape shape;
	char bg_char;
	int i = 0;

	ret_scan = fscanf(file, "%d %d %c\n", &bg.w, &bg.h, &bg_char);
	if (ret_scan == 3)
	{
		if (bg.w < 1 || bg.w > 300 || bg.h < 1 || bg.h > 300)
			return(1);
		bg.matrice = (char *)malloc(bg.h * bg.w);
		if (!bg.matrice)
			return (1);
		while(i < bg.w * bg.h)
		{
			bg.matrice[i] = bg_char;
			i++;
		}

		ret_scan = fscanf(file, "%c %f %f %f %c\n", &shape.type, &shape.x, &shape.y, &shape.radius, &shape.shape_char);
		while (ret_scan == 5)
		{
			if (check_update(&bg, &shape))
			{
				free(bg.matrice);
				return (1);
			}
			ret_scan = fscanf(file, "%c %f %f %f %c\n", &shape.type, &shape.x, &shape.y, &shape.radius, &shape.shape_char);
		}

		if (ret_scan == -1)
		{
			print_matrice(bg);
			free(bg.matrice);
			return (0);
		}
		else
		{
			free(bg.matrice);
			return (1);
		}
	}
	else
	{
		free(bg.matrice);
		return (1);
	}
}

int main(int ac, char **av)
{
	FILE *file;

	if(ac == 2)
	{
		file = fopen(av[1], "r");
		if(file && !execute(file))
		{
			fclose(file);
			return (0);
		}
		else
		{
			write(STDOUT_FILENO, "Error: Operation file corrupted\n", 32);
			fclose(file);
			return(1);
		}
	}
	else
	{
		write(STDOUT_FILENO, "Error: argument\n", 16);
		fclose(file);
		return (1);
	}
}