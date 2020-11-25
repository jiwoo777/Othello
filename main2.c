#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(void) { 

   int array[8][8]=
   {
     {0,0,0,0,0,0,0,0},
     {0,0,0,0,0,0,0,0},
     {0,0,0,0,0,0,0,0},
     {0,0,0,1,2,0,0,0},
     {0,0,0,2,1,0,0,0},
     {0,0,0,0,0,0,0,0},
     {0,0,0,0,0,0,0,0},
     {0,0,0,0,0,0,0,0}}; 
     
    int Board(int array[8][8])//판 그리기 함수 
   {
      int i, j;
   
      for(i=0; i<8; i++)
      {
   	    gotoxy(2,2+2*i);//좌표로 커서 이동 
   	 
   	    for (j=0; j<8; j++)
   	    {
   	    	if(array[i][j] == 0)//돌 없는 빈공간 
   	 	        printf("| |");
   	 	   else if(array[i][j] == 1)// 흰돌 둔 곳 
		        printf("|O|");
		   else if(array[i][j] == 2)// 검은돌 둔 곳 
		    	printf("|X|");
       	   else if (array[i][j] == 3)
		        printf("|_|" );//돌을 놓을 수 있는 자리 표시			
	    } 
	     printf("\n\n");
    	 gotoxy(35,9);
    	 printf("일시정지[K]");
	   
    } 
    return 0;

   }
}




