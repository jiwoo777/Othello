#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#include <conio.h>
#define N 6
#define true 1
 

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main(void) { 
    //초기 보드판 만들기// 
	int board[8][8] = {
     {0,0,0,0,0,0,0,0},
     {0,0,0,0,0,0,0,0},
     {0,0,0,0,0,0,0,0},
     {0,0,0,1,2,0,0,0},
     {0,0,0,2,1,0,0,0},
     {0,0,0,0,0,0,0,0},
     {0,0,0,0,0,0,0,0},
     {0,0,0,0,0,0,0,0}}; 
     
      int row, column;//가로줄 세로줄 변수 설정  
   
      for(row=0; row<8; row++)
      {
   	       	 
   	    for (column=0; column<8; column++)
   	    {   	    	
   	    	if(board[row][column] == 0)//돌 없는 빈공간 표시 
   	 	        printf("|_|");
   	 	   else if(board[row][column] == 1)// 흰돌 둔 곳 표시 
		        printf("|O|");
		   else if(board[row][column] == 2)// 검은돌 둔 곳 표시 
		    	printf("|X|");   
		   else if(board[row][column] == 3)// 커서 놓을 때 표시
		        printf("|+|"); 			
	    } 
	     printf("\n");   
      }
      return board[8][8]; 
      
     //돌 움직이기//      
      char Choice = 0;//선택한 지점 변수  정의  
      int x = 0, y = 0;//x좌표, y좌표 
	  int prev;//커서를 선택하기 전 모습 저장을 위한 변수? 
	    
      while(true)
      {
      	gotoxy(x,y);//변수 x와 y에 저장된 값으로 좌표를 이동
		prev=board[x,y];//선택 전 상태 저장 
		
		if(kbhit())
		{
		    Choice = getch();
		    board[x][y] = 3;//선택 시 |+| 출력 
			switch(Choice)
			{
				case 'w' : //위로 이동
				   y--;
				   break;
				case 's' : //아래로 이동
				   y++;
				   break;
				case 'a' : //왼쪽으로 이동
				   x--;
				   break;
				case 'd' : //오른쪽으로 이동 
				   x++;
				   break;         
			}
			Sleep(50); 
			system("cls");
		   }   
	  }
	  return 0;
	  
	  
	  //돌을 놓을 수 있는지 확인하기
	  
	  
	   
    }
    
    
void gotoxy(int x, int y)//커서 이동 함수  
{
	COORD Cursor={x,y};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Cursor);
 } 



