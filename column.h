
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
    // index valid
    // 0 : no index
    // -1 : invalid index
    // 1 : valid index
    int valid_index;
    // direction de tri Ascendant ou Déscendant
    // 0 : ASC
    // 1 : DESC
    int sort_dir;
    // array of integers
};
typedef struct column COLUMN;

COLUMN *create_column(ENUM_TYPE type, char *title);
int insert_value(COLUMN *col, void *value);
void delete_column(COLUMN **col);
void print_col(COLUMN *col);
void convert_value(COLUMN *col, unsigned long long int i, char *str, int size);
//void sort(COLUMN* col, int sort_dir);
void print_col_by_index(COLUMN *col);
void erase_index(COLUMN *col);
int check_index(COLUMN *col);
void update_index(COLUMN *col);
int occurence(COLUMN *col, void *val);
void * get_val_at_index(COLUMN *col, void *ind);
int  higher(COLUMN *col, void *val);
int  lower(COLUMN *col, void *val);
int search_value_in_column(COLUMN *col, void *val);
#endif COLUMN_H
