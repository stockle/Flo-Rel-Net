#ifndef UTILS_H
#define UTILS_H

#include "florel.h"

#ifndef BIT_WIDTH
	#define BIT_WIDTH 21
#endif

typedef struct s_status {
	bool success;
	bool running;
	bool failure;
} t_status;

typedef struct s_float21 {
	unsigned int sign: 1;
	unsigned int value: 20;
} float21;


typedef struct s_lock {
	pthread_mutex_t lock;
} t_lock;

t_lock 		*new_lock(void);
t_status 	*new_status(bool initial_status);
float21 	*new_float21(void);
void 		free_float21(float21 *value);

float 		float21_to_float(float21 num);
float21 	*float_to_float21(float num);

#endif