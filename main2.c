#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main(void) { 

   int board[8][8] = {//������ ����� 
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
   	    	if(board[i][j] == 0)//�� ���� ����� ǥ�� 
   	 	        printf("|_|");
   	 	   else if(board[i][j] == 1)// �� �� �� ǥ�� 
		        printf("|O|");
		   else if(board[i][j] == 2)// ������ �� �� ǥ�� 
		    	printf("|X|");   		
	    } 
	     printf("\n");
      }
      return board[8][8]; 
    }
   





