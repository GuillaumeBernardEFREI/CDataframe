
#ifndef COLUMN_H
#define COLUMN_H

enum enum_type
{
    NULLVAL = 1 , UINT, INT, CHAR, FLOAT, DOUBLE, STRING, STRUCTURE
};
typedef enum enum_type ENUM_TYPE;

union column_type{
    unsigned int uint_value;
    signed int int_value;
    char char_value;
    float float_value;
    double double_value;
    char* string_value;
    void* struct_value;
};
typedef union column_type COL_TYPE ;


struct column {
    char *title;
    unsigned int size; //logical size
    unsigned int max_size; //physical size
    ENUM_TYPE column_type;
    COL_TYPE **data; // array of pointers to stored data
    unsigned long long int *index;
};
typedef struct column COLUMN;

COLUMN *create_column(ENUM_TYPE type, char *title); //done
int insert_value(COLUMN *col, void *value); // need to be done
void delete_column(COLUMN **col); //need to be done
void print_col(COLUMN *col); //done
void convert_value(COLUMN *col, unsigned long long int i, char *str, int size); //done
void print_col_by_index(COLUMN *col); //done
int occurence(COLUMN *col, void *val); //done
void * get_val_at_index(COLUMN *col, int ind); //done
int  higher(COLUMN *col, void *val); //done
int  lower(COLUMN *col, void *val); //done
int search_value_in_column(COLUMN *col, void *val); //done
//void rename(COLUMN *col);

#endif //COLUMN_H
