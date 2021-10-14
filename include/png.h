#ifndef PNG_H_
#def PNG_H_

#include <stdio.h>
#include "common.h"

/*Accepts a FILE* `png_file` and copies the created RGBA array to `dest`.
 *If `dest` is NULL, it allocates the memory for it using malloc and sets the `dest_size` appropriately.
 *Return value is the pointer to the RGBA array if successful, otherwise NULL  
 */
void* png_to_rgba(FILE* png_file, void* dest, size_t* dest_size);

#endif // PNG_H_
