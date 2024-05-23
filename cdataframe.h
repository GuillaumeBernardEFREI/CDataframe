
#include "column.h"
#include "list.h"

#ifndef CDATAFRAME_H



CDATAFRAME *create_cdataframe(ENUM_TYPE *cdftype, int size);

void delete_cdataframe(CDATAFRAME **cdf);

COLUMN * get_col(CDATAFRAME * cdf,int index);

int get_cdataframe_cols_size(CDATAFRAME * cdf);

CDATAFRAME* load_from_csv(char *file_name, ENUM_TYPE *cdftype, int size);

void save_into_csv(CDATAFRAME *cdf, char *file_name);


#endif //CDATAFRAME_H
