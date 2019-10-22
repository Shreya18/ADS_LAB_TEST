#ifndef _INCLUDED_HEAP_
#define _INCLUDED_HEAP_

#include <stdint.h>
#define HEAP_MAX_SIZE 32

typedef struct _heap_ Heap;
typedef struct _event_ Event;



struct  _heap_
{
	uint32_t	size;
	int32_t		data[HEAP_MAX_SIZE]	;
	Heap *left;
	Heap *right;

};


struct _event_{

	int32_t aircraft_no;
	int32_t takeoff_time;
	int32_t landing_time;

};


Heap 		heap_new(int32_t data[], uint32_t len);
Heap*		heap_insert(Heap *heap, int32_t element);

int32_t		heap_get_min(Heap *heap);
int32_t		heap_extract_min(Heap *heap);

#endif