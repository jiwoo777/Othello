#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main(void) { 

   int board[8][8] = {//보드판 만들기 
     {0,0,0,0,0,0,0,0},
     {0,0,0,0,0,0,0,0},
     {0,0,0,0,0,0,0,0},
     {0,0,0,1,2,0,0,0},
     {0,0,0,2,1,0,0,0},
     {0,0,0,0,0,0,0,0},
     {0,0,0,0,0,0,0,0},
     {0,0,0,0,0,0,0,0}}; 
     
      int i, j;
   
      for(i=0; i<8; i++)
      {
   	       	 
   	    for (j=0; j<8; j++)
   	    {   	    	
   	    	if(board[i][j] == 0)//돌 없는 빈공간 표시 
   	 	        printf("|_|");
   	 	   else if(board[i][j] == 1)// 흰돌 둔 곳 표시 
		        printf("|O|");
		   else if(board[i][j] == 2)// 검은돌 둔 곳 표시 
		    	printf("|X|");   		
	    } 
	     printf("\n");
      }
      return board[8][8]; 
    }
   





