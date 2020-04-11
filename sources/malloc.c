#include "../includes/malloc.h"

m_block			*g_block = NULL;
f_list			*g_flist = NULL;


void			*my_malloc(size_t size) {
	void	*ptr;

	if (size <= 0)
		return NULL;
	ptr = NULL;
	if ((ptr = find_available_memory_chunk(size)) == NULL) {
		if ((ptr = allocate_new_block(size)) == NULL)
			return NULL;
	}
	dump_block();
	return ptr;
}

int				main(void) {
	return  0;
}
