#ifndef FileREADlib
#define FileREADlib

#include <stdio.h>
#include <sys/stat.h>
#include <cstdlib>
#include <cstring>
#include <ctype.h>
#include <assert.h>
#include <climits>

#include "error_allocator.h"


struct Text
{
    size_t  size_buffer;
    char*           str;
    size_t     position;
};



int    CreateBuffer(Text* buf, const char* input_file, err_allocator* err_alloc);
void   DeleteBuffer(Text* buf);

int    WriteFile(Text* buf, const char* output_file,  err_allocator* err_alloc);
int    ReadFile (Text* buf, const char* input_file, err_allocator* err_alloc);
size_t GetSizeFile         (const char* input_file,  err_allocator* err_alloc);


#endif