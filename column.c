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
    col->index = (unsigned long long int *)malloc(sizeof(int));
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
    col->index[col->size]=(col->size);
    if(col->data==NULL){
        (col->data)=(COL_TYPE **)malloc (sizeof(int)*col->max_size);
    }

    switch (col->column_type) {
        case UINT:
            (col->data[col->size])->uint_value = *( unsigned int*)value;
            break;
        case INT:
            //printf("%d\n",*( int*)value);
            (col->data)[col->size]=(COL_TYPE *)malloc (sizeof(COL_TYPE));
            ((col->data)[col->size])->int_value= *((int *)value);
            //((col->data)[col->size])->int_value = *( int*)value;

            //printf("szszs%d\n",*( int*)value);



            //col->data[col->size] = ;
            //*((int*)col->data[col->size])= *((int*)value);

            //(col->data[col->size])->int_value=0;




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

    union column_type *value  = (col->data[i]);
    printf("%d",value->uint_value);
    printf("op");
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
        //printf("\n %d ",(int)col->index[i+1]);
        convert_value(col,(int)(col->index[i+1]),str,30);
        printf("[%d] %s\n",i,str);
    }
}
int check_egality(ENUM_TYPE column_type, void *val1,void *val2){
    switch (column_type) {
        case UINT:
            return *(unsigned int *) val1 == *(unsigned int *) val2;
        case INT:
            return *(int *) val1 == *(int *) val2;
        case CHAR:
            return *(char *) val1 == *(char *) val2;
        case FLOAT:
            return *(float *) val1 == *(float *) val2;
        case DOUBLE:
            return *(double *) val1 == *(double *) val2;
        case STRING:
            return strcmp(*(char **) val1, *(char **) val2);
        case STRUCTURE:
            //custom equality check
            return 1;
    }
}
int occurence(COLUMN *col, void *x){
    int occ=0;
    for(int i=0;i<col->size;i++){
        if(check_egality(col->column_type,x,&(col->data[i]))){
            occ++;
        }
    }
    return occ;
}