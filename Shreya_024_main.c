#include <stdint.h>
#include <assert.h>
#include "test.h"
#include "test2.c"





int main()
{
	int32_t data[] = {1130,1330,1430,1530};
	Heap heap = heap_new(data, 10);
	heap_insert(&heap, 1630);
	
	assert(heap_get_min(&heap) == 1130);
	assert(heap_extract_min(&heap) == 1130);
	
	

	return 0;
}


