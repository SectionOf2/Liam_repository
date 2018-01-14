/*------------------------------------------------------------------------------*/
/*                                                                              */
/*      コンポーネント名 : マルバツゲーム	 	                                        */
/*                                                                              */
/*      ファイル名 : Maba_MaruBatu.c			                                       	*/
/*                                                                              */
/*		  機能概要：マルバツゲーム処理、判定、表示                                       */
/*                                                                              */
/*------------------------------------------------------------------------------*/
#include "Maba_header_c.h"
#include <stdio.h>
/*------------------------------------------------------------------------------*/
/*		機	能	  マルバツゲーム処理、判定、表示			                                 		*/
/*																		                                      		*/
/*		引き数		-                                                      						*/
/*		戻り値		void    					                                         						*/
/*------------------------------------------------------------------------------*/
main(void)
{
    U1 maba_err = 0;
    C1 maba_enteredNum = ' ';
    C1 maba_board[9] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
    printf("○×ゲーム\n");

    printf(" 1 | 2 | 3 \n");
    printf("___|___|___\n");
    printf(" 4 | 5 | 6 \n");
    printf("___|___|___\n");
    printf(" 7 | 8 | 9 \n");
    printf("   |   |   \n");

  while(1)
  {
    while(1) {
      printf("○先手：数字キーで指定");
      scanf("%c%*[^\n]",&maba_enteredNum);
      getchar();

      switch(maba_enteredNum) {
        case '1':
        if (maba_board[0] == ' ') {
          maba_board[0] = 'o';
        } else {
          maba_err = 1;
        }
        break;

        case '2':
        if (maba_board[1] == ' ') {
          maba_board[1]='o';
        } else {
          maba_err = 1;
        }
        break;

        case '3':
        if (maba_board[2] == ' ') {
          maba_board[2]='o';
        } else {
          maba_err = 1;
        }
        break;

        case '4':
        if (maba_board[3] == ' ') {
          maba_board[3] = 'o';
        } else {
          maba_err = 1;
        }
        break;

        case '5':
        if (maba_board[4] == ' ') {
          maba_board[4] = 'o';
        } else {
          maba_err = 1;
        }
        break;

        case '6':
        if (maba_board[5] == ' ') {
          maba_board[5] = 'o';
        } else {
          maba_err = 1;
        }
        break;

        case '7':
        if (maba_board[6] == ' ') {
          maba_board[6] = 'o';
        } else {
          maba_err = 1;
        }
        break;

        case '8':
        if (maba_board[7] == ' ') {
          maba_board[7] = 'o';
        } else {
          maba_err = 1;
        }
        break;

        case '9':
        if (maba_board[8] == ' ') {
          maba_board[8] = 'o';
        } else {
          maba_err = 1;
        }
        break;

        default : maba_err = 1;
      }
      if (maba_err == 1) {
      printf("もう一度入力してください");
      } else {
        break;
      }
    }

    printf(" 1 | 2 | 3 \n");
    printf(" %c | %c | %c \n", maba_board[0], maba_board[1], maba_board[2]);
    printf(" 4 | 5 | 6 \n");
    printf(" %c | %c | %c \n", maba_board[3], maba_board[4], maba_board[5]);
    printf(" 7 | 8 | 9 \n");
    printf(" %c | %c | %c \n", maba_board[6], maba_board[7], maba_board[8]);

    if (maba_board[6] == 'o' && maba_board[7] == 'o' && maba_board[8] == 'o' ||
       maba_board[3] == 'o' && maba_board[4] == 'o' && maba_board[5] == 'o' ||
       maba_board[0] == 'o' && maba_board[1] == 'o' && maba_board[2] == 'o' ||
       maba_board[6] == 'o' && maba_board[3] == 'o' && maba_board[0] == 'o' ||
       maba_board[7] == 'o' && maba_board[4] == 'o' && maba_board[1] == 'o' ||
       maba_board[8] == 'o' && maba_board[5] == 'o' && maba_board[2] == 'o' ||
       maba_board[6] == 'o' && maba_board[4] == 'o' && maba_board[2] == 'o' ||
       maba_board[8] == 'o' && maba_board[4] == 'o' && maba_board[0] == 'o')
       {
         printf("○　先手の勝ち\n");
         return 0;
       } else if  (maba_board[0] != ' ' && maba_board[1] != ' ' &&
                    maba_board[2] != ' ' && maba_board[3] != ' ' &&
                    maba_board[4] != ' ' && maba_board[5] != ' ' &&
                    maba_board[6] != ' ' && maba_board[7] != ' ' &&
                    maba_board[8] != ' ' ) {
         printf("引き分けです。\n");
         break;
       }


    while(1){
      maba_err=0;
      printf("×後手：数字キーで指定");
      scanf("%c%*[^\n]", &maba_enteredNum);
      getchar();

      switch(maba_enteredNum){
        case '1':
        if (maba_board[0]==' ') {
          maba_board[0] = 'x';
        } else {
          maba_err = 1;
        }
        break;

        case '2':
        if (maba_board[1] == ' ') {
          maba_board[1] = 'x';
        } else {
          maba_err = 1;
        }
        break;

        case '3':
        if (maba_board[2] == ' ') {
          maba_board[2] = 'x';
        } else {
          maba_err = 1;
        }
        break;

        case '4':
        if (maba_board[3] == ' ') {
          maba_board[3] = 'x';
        } else {
          maba_err = 1;
        }
        break;

        case '5':
        if (maba_board[4] == ' ') {
          maba_board[4] = 'x';
        } else {
          maba_err = 1;
        }
        break;

        case '6':
        if (maba_board[5] == ' ') {
          maba_board[5] = 'x';
        } else {
          maba_err = 1;
        }
        break;

        case '7':
        if (maba_board[6] == ' ') {
          maba_board[6] = 'x';
        } else {
          maba_err = 1;
        }
        break;

        case '8':
        if (maba_board[7] == ' ') {
        maba_board[7] = 'x';
        }else{
          maba_err = 1;
        }
        break;

        case '9':
        if (maba_board[8] == ' ') {
        maba_board[8] = 'x';
        } else {
          maba_err=1;
        }
        break;

        default :
        maba_err = 1;
      }
      if (maba_err == 1) {
      printf("もう一度入力してください");
      } else {
        break;
      }
    }

    printf(" 1 | 2 | 3 \n");
    printf(" %c | %c | %c \n", maba_board[0], maba_board[1], maba_board[2]);
    printf(" 4 | 5 | 6 \n");
    printf(" %c | %c | %c \n", maba_board[3], maba_board[4], maba_board[5]);
    printf(" 7 | 8 | 9 \n");
    printf(" %c | %c | %c \n", maba_board[6], maba_board[7], maba_board[8]);

    if (maba_board[6] == 'x' && maba_board[7] == 'x' && maba_board[8] == 'x' ||
       maba_board[3] == 'x' && maba_board[4] == 'x' && maba_board[5] == 'x' ||
       maba_board[0] == 'x' && maba_board[1] == 'x' && maba_board[2] == 'x' ||
       maba_board[6] == 'x' && maba_board[3] == 'x' && maba_board[0] == 'x' ||
       maba_board[7] == 'x' && maba_board[4] == 'x' && maba_board[1] == 'x' ||
       maba_board[8] == 'x' && maba_board[5] == 'x' && maba_board[2] == 'x' ||
       maba_board[6] == 'x' && maba_board[4] == 'x' && maba_board[2] == 'x' ||
       maba_board[8] == 'x' && maba_board[4] == 'x' && maba_board[0] == 'x')
       {
         printf("×　後手の勝ち\n");
         return 0;
       } else if  (maba_board[0] != ' ' && maba_board[1] != ' ' &&
                    maba_board[2] != ' ' && maba_board[3] != ' ' &&
                    maba_board[4] != ' ' && maba_board[5] != ' ' &&
                    maba_board[6] != ' ' && maba_board[7] != ' ' &&
                    maba_board[8] != ' ' ){
         printf("引き分けです。\n");
         break;
       }
   }
}
