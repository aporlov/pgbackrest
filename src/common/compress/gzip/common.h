/***********************************************************************************************************************************
Gzip Common
***********************************************************************************************************************************/
#ifndef COMMON_COMPRESS_GZIP_COMMON_H
#define COMMON_COMPRESS_GZIP_COMMON_H

#include <stdbool.h>

/***********************************************************************************************************************************
Gzip extension
***********************************************************************************************************************************/
#define GZIP_EXT                                                    "gz"

/***********************************************************************************************************************************
Functions
***********************************************************************************************************************************/
int gzipError(int error);
int gzipWindowBits(bool raw);

#endif