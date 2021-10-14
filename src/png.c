#include <stdio.h>
#include <assert.h>
#include "common.h"

void* png_to_rgba(FILE* png_file, void* dest, size_t* dest_size){
	//PNG format: https://en.wikipedia.org/wiki/Portable_Network_Graphics#File_format
	//Verify file header
	uint64_t header;
	assert( fread(&header, 8, 1, png_file) == 8 );
	if ( header != 0x89504E470D0A1A0A ) {
		return NULL;
	}

	assert( 0 && "Unimplemented" );
	return NULL;
}
