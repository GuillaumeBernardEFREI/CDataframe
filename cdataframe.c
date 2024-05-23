//
// Created by guill on 21/04/2024.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "cdataframe.h"



CDATAFRAME *create_cdataframe(ENUM_TYPE *cdftype, int size){
    CDATAFRAME * cdf = (CDATAFRAME *) lst_create_list();
    for(int i = 0; i<size; i++){
        char* title = (char *)malloc(100*sizeof(char));
        title = "test";
        COLUMN* col = (COLUMN *) create_column(cdftype[i], title);
        LNODE* ptr_col = lst_create_lnode(col);
        lst_insert_tail((LIST *) cdf, ptr_col);
    }
    return cdf;
}

void delete_cdataframe(CDATAFRAME **cdf){
    LNODE *current = (*cdf)->head;
    while (current != NULL) {
        LNODE *next = current->next;
        COLUMN *col = (COLUMN *)current->data;
        delete_column(&col); //je pense qe c'est pas le bon argument
        free(current);
        current = next;
    }
    free(*cdf);
}


int get_cdataframe_cols_size(CDATAFRAME * cdf) {
    LNODE *current = (cdf)->head;
    int ctn = 0;
    while (current != NULL) {
        ctn ++;
        current = current -> next;
    }
    return ctn;
}

COLUMN * get_col(CDATAFRAME * cdf,int index){
    LNODE *current = (cdf)->head;
    int ctn = 1;
    while (ctn != index ) {
        current = current -> next;
        ctn ++;
    }
    return current;
}
