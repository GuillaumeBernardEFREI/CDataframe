#include "column.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


COLUMN *create_column(ENUM_TYPE type, char *title){
    COLUMN * col = ( COLUMN *) malloc(sizeof(COLUMN));
    col->size=0;
    col->max_size=256;
    col->column_type=type;
    col->title=title;
    col->data=NULL;
    col->index = NULL;
    return col;
}


void print_col(COLUMN *col){
    for(int i=0;i<col->size;i++){
        char str[30];
        convert_value(col,i,str,30);
        printf("[%d] %s\n",i,str);
    }
}


int insert_value(COLUMN *col, void *value){
    if(col->size>=col->max_size)
    {
        col->data = realloc(col->data,col->max_size+256);
        //put something to prevent the error return 0;
        col->max_size+=256;
    }
    //*(int*)malloc (sizeof(int));

    if(col->data==NULL){
        (col->data)=(COL_TYPE **)malloc (sizeof(int)*col->max_size);
    }
    if (col->index==NULL) {
        col->index = (unsigned long long int *) malloc(sizeof(unsigned long long int) * 256);
    }
    col->index[col->size]=(col->size);

    (col->data)[col->size] = (COL_TYPE *) malloc(sizeof(COL_TYPE));



    switch (col->column_type) {
        case UINT:
            (col->data[col->size])->uint_value = *( unsigned int*)value;
            break;
        case INT:
            ((col->data)[col->size])->int_value = *((int *) value);
            break;
        case CHAR:
            (col->data[col->size])->char_value = *(char*)value;
            break;
        case FLOAT:
            (col->data[col->size])->float_value = *(float*)value;
            break;
        case DOUBLE:
            (col->data[col->size])->double_value = *(double*)value;
            break;
        case STRING:
            (col->data[col->size])->string_value = (char *)value;
            break;
        case STRUCTURE:
            (col->data[col->size])->struct_value = value;
            break;
    }
    col->size++;
    return 1;
}


/**
* @brief: Free the space allocated by a column
* @param1: Pointer to the column
*/
void delete_column(COLUMN **col){
// attributes of the colomn
    free((**(col)).title);
    free(&((**(col)).size));
    free(&((**(col)).max_size));
    free(((**(col)).index));
    free(&((**(col)).valid_index));
    free(&((**(col)).sort_dir));


// now we free up the colomn's space
    free(*col);
    free(col);

}

/**
* @brief: Convert a value into a string
* @param1: Pointer to the column
* @param2: Position of the value in the data array
* @param3: The string in which the value will be written
* @param4: Maximum size of the string
*/
void convert_value(COLUMN *col, unsigned long long int i, char *str, int size) {
    COL_TYPE *value  = (col->data[i]);
    switch (col->column_type) {
        case UINT:
            snprintf(str, size,"%d", value->uint_value);
            break;
        case INT:
            snprintf(str,size, "%d", value->int_value);
            break;
        case CHAR:
            *str=value->char_value;
            break;
        case FLOAT:
            snprintf(str,size, "%f", value->float_value);
            break;
        case DOUBLE:
            snprintf(str, size,"%f", value->double_value);
            break;
        case STRING:
            snprintf(str, size,"%s", value->string_value);
            break;
        case STRUCTURE:
            //how you want to print your custom struct
            break;
        case NULLVAL:
            break;
    }
}
void print_col_by_index(COLUMN *col){
    for(int i=0; i<col->size-1;i++){
        char str[30];

        convert_value(col,(int)(col->index[i]),str,30);
        printf("[%d] %s\n",i,str);
    }
}

void * get_val_at_index(COLUMN *col, int ind){
    if(col->index==NULL){return NULL;}
    return col->data[col->index[ind]];
}

int is_inferior(ENUM_TYPE column_type, void *val1,union column_type *val2){
    //perform val1<val2

    switch (column_type) {
        case UINT:
            return *(unsigned int *) val1 < (val2)->uint_value;
        case INT:
            return *(int *) val1 < (val2)->int_value;
        case CHAR:
            return *(char *) val1 < (val2)->char_value;
        case FLOAT:
            return *(float *) val1 < (val2)->float_value;
        case DOUBLE:
            return *(double *) val1 < (val2)->double_value;
        case STRING:
            for(int i=0;i<100;i++){
                if((*(char **) val2)[i]==0){
                    return 0;
                }
                if((*(char **) val1)[i]==0){
                    return 1;
                }
                if((*(char **) val2)[i]>(*(char **) val1)[i]){
                    return 0;
                }
            }
        case STRUCTURE:
            //custom inferiority check depending on your structure
            return 1;
    }
    return 0;

}

int check_egality(ENUM_TYPE column_type, void *val1,union column_type *val2){
    switch (column_type) {
        case UINT:
            return *(unsigned int *) val1 == (val2)->uint_value;
        case INT:
            return *(int *) val1 == (val2)->int_value;
        case CHAR:
            return *(char *) val1 == (val2)->char_value;
        case FLOAT:
            return *(float *) val1 == (val2)->float_value;
        case DOUBLE:
            return *(double *) val1 == (val2)->double_value;
        case STRING:
            return strcmp(*(char **) val1, val2->string_value);
        case STRUCTURE:
            //custom equality check depending on your structure
            return 1;
    }
    return 0;
}

int search_value_in_column(COLUMN *col, void *val){
    for(int i=0; i<col->size-1;i++){

        if(check_egality(col->column_type,val,(col->data[col->index[i]]))){
            return i;
        }
    }
    return -1;
}
int lower(COLUMN *col, void *x){
    int count=0;
    for(int i=0;i<col->size;i++){
        if(is_inferior(col->column_type,(col->data[i]),x) && !check_egality(col->column_type,x,(col->data[i]))){
            count++;
        }
    }
    return count;
}

int higher(COLUMN *col, void *x){
    int count=0;
    for(int i=0;i<col->size;i++){
        if(is_inferior(col->column_type,x,(col->data[i])) && !check_egality(col->column_type,x,(col->data[i]))){
            count++;
        }
    }
    return count;
}
int occurence(COLUMN *col, void *x){
    int occ=0;
    for(int i=0;i<col->size;i++){
        if(check_egality(col->column_type,x,(col->data[i]))){
            occ++;

        }
    }
    return occ;
}