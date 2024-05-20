
#include "column.h"
#include "list.h"
#ifndef CDATAFRAME_H
#define CDATAFRAME_H

struct lnode_ {
    void *data; // Pointer to a column
    struct lnode_ *prev;
    struct lnode_ *next;
};
typedef struct lnode_ LNODE;

struct list_ {
    lnode *head;
    lnode *tail;
};
typedef struct list_ LIST;

typedef LIST CDATAFRAME;



CDATAFRAME *create_cdataframe(ENUM_TYPE *cdftype, int size);

void delete_cdataframe(CDATAFRAME **cdf);

CDATAFRAME* load_from_csv(char *file_name, ENUM_TYPE *cdftype, int size);

void save_into_csv(CDATAFRAME *cdf, char *file_name);


#endif //CDATAFRAME_H
