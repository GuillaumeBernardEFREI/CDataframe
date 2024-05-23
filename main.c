#include <stdio.h>
#include "column.h"
#include <stddef.h>
#include "cdataframe.h"
#include <stdlib.h>
int main() {
    CDATAFRAME * cdataframe= NULL;
    ENUM_TYPE *cdftype=NULL;
    char columns_titles[32][100]= {'\0'};
    int choice=0;
    do{
        printf("****** CDataframe / Guillaume & Samuel ******\n 1 - Create CDataFrame \n 2 - Display\n 3 - insert value\n 4 - Delete CDataFrame \n 5 - Quit\n");
        do {
            scanf("%d", &choice);
        }while(choice<=0 || choice >5);
        if(choice==5){
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
                    printf("\n*** Column %d title : ",n+1);
                    scanf("%s",columns_titles[n]);
                    *(cdftype + n) = col_type;
                }
                cdataframe = create_cdataframe(cdftype, number_of_col);
                for(int n=0;n<number_of_col;n++){
                    get_col(cdataframe,n)->title=columns_titles[n];
                }
                //display_columns_titles(cdataframe);


            }
            else{
                printf("Error - A CDataframe already exists; delete it before creating a new one.\n");
            }
        }
        else if (choice==2) {
            int displayOption = 0;
            printf(" 1 - Display entire dataframe \n 2 - Display xth column\n 3 - display the dataframe from the xth row x to the yth row \n 4 - display value at (x,y)\n");
            do {
                scanf("%d", &displayOption);
            } while (displayOption > 4);

            if (displayOption == 1) {
                0;
            } else if (displayOption == 2) {
                int n_col = 0;
                printf("\ncolumn index : ");
                do {
                    scanf("%d", &n_col);
                } while (n_col - 1 > get_cdataframe_cols_size(cdataframe));
                printf("\n%s", get_col(cdataframe, n_col - 1)->title);
                print_col_by_index(get_col(cdataframe, n_col - 1));


            } else if (displayOption == 3) {

            } else if (displayOption == 4) {
            }
        } else if (choice==3){
            int insertOption=0;
            printf(" 1 - insert row \n 2 - set value at (x,y)\n 3 - append value a xth column");
            do{
                scanf("%d",&insertOption);
            } while (insertOption<=0 || insertOption>3);
            if(insertOption==1) {
            }
            else(insertOption==1)
        } else if (choice==4){
            delete_cdataframe(&cdataframe);
            cdataframe= NULL;

        }



    }while(1);

    printf("Quit succeed");
    return 0;
}
