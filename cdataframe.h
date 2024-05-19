
#include "column.h"
#include "list.h"
#ifndef CDATAFRAME_H
#define CDATAFRAME_H




typedef struct  {

}CDATAFRAME;



CDATAFRAME *create_cdataframe(ENUM_TYPE *cdftype, int size);

void delete_cdataframe(CDATAFRAME **cdf);

CDATAFRAME* load_from_csv(char *file_name, ENUM_TYPE *cdftype, int size);

void save_into_csv(CDATAFRAME *cdf, char *file_name);


#endif //CDATAFRAME_H
