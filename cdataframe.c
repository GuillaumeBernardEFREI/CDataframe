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
        current = next;
    }
    lst_delete_list(*cdf);
}


int get_cdataframe_cols_size(CDATAFRAME *cdf) {
    LNODE *current = (*cdf).head;
    int ctn = 0;
    while (current != NULL) {
        current = current->next;
        ctn++;
    }
    return ctn;

}
void display_columns_titles(CDATAFRAME *cdf)
{
    LNODE *current = (*cdf).head;
    while (current != NULL) {
        printf(" %s             ",current->data->title);
        current = current->next;

    }
    printf("\n");

}
COLUMN * get_col(CDATAFRAME * cdf,int index){
    LNODE *current = (*cdf).head;
    for(int i=0;i<index;i++) {
    current = current->next;
    }
    return  current->data;
}

/*
void delete_row(CDATAFRAME *cdf, int index){
    int size = get_cdataframe_cols_size(cdf);
    for (int i = 0; i < size; i++){
        COL_TYPE * col = LNODE
        while(col->data!=NULL) {

        }
    }
}

*/