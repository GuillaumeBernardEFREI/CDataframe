#include <stdio.h>
#include "column.h"
#include <stddef.h>
#include "cdataframe.h"
#include <stdlib.h>
int main() {
    CDATAFRAME * cdataframe= NULL;
    ENUM_TYPE *cdftype=NULL;
    int choice=0;
    do{
        printf("****** CDataframe / Guillaume & Samuel ******\n 1 - Create CDataFrame \n 2 - Display\n 3 - Delete CDataFrame \n 4 - Quit\n");
        do {
            scanf("%d", &choice);
        }while(choice<=0 || choice >4);
        if(choice==4){
            break;
        }
        else if(choice==1){
            if(cdataframe==NULL) {
                printf("-> How many column(s)?\n");
                int number_of_col = 0;
                do {
                    scanf("%d", &number_of_col);

                } while (number_of_col < 1);
                cdftype = (ENUM_TYPE *) malloc(sizeof(ENUM_TYPE) * number_of_col);
                for (int n = 0; n < number_of_col; n++) {
                    int col_type = 0;
                    do {
                        printf("\n*** Column %d type : ***\n 1 - UINT\n 2 - INT\n 3 - CHAR\n 4 - FLOAT\n 5 - DOUBLE\n 6 - STRING\n 7 - STRUCTURE\n",
                               n + 1);
                        scanf("%d", &col_type);
                        //ici bug
                    } while (col_type > 7);

                    *(cdftype + n) = col_type;
                }
                cdataframe = create_cdataframe(cdftype, number_of_col);
            }
            else{
                printf("Error - A CDataframe already exists; delete it before creating a new one.\n");
            }
        }
        else if (choice==2){
            int displayOption = 0;
            printf(" 1 - Display entire dataframe \n 2 - Display xth column\n 3 - display the dataframe from the xth row x to the yth row \n 4 - display value at (x,y)");
            do{
                scanf("%d",&displayOption);
            }while(displayOption>4);
            if(displayOption==1){

            }
            else if(displayOption==2){
                int n_col=0;
                do{
                    scanf("%d",&n_col);
                } while (n_col>= get_cdataframe_cols_size(cdataframe));
                print_col_by_index(get_col(cdataframe,n_col));

            }
            else if(displayOption==3){

            }
            else if(displayOption==4){

            }
        }



    }while(1);
    printf("Quit succeed");
}
