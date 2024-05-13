#include <stdio.h>
#include "column.h"
#include <stddef.h>
int main() {

    COLUMN * col= create_column(INT,"text");
    int i=0;
    for(i=0;i<=30;i++){
        insert_value(col,&i);

    }

    print_col(col);

    return 0;
}
