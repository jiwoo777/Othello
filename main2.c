#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#include <conio.h>
#define N 6
#define true 1
 

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main(void) { 

	int board[8][8] = {//�ʱ� ������ ����� 
     {0,0,0,0,0,0,0,0},
     {0,0,0,0,0,0,0,0},
     {0,0,0,0,0,0,0,0},
     {0,0,0,1,2,0,0,0},
     {0,0,0,2,1,0,0,0},
     {0,0,0,0,0,0,0,0},
     {0,0,0,0,0,0,0,0},
     {0,0,0,0,0,0,0,0}}; 
     
      int row, column;//������ ������ ���� ����  
   
      for(row=0; row<8; row++)
      {
   	       	 
   	    for (column=0; column<8; column++)
   	    {   	    	
   	    	if(board[row][column] == 0)//�� ���� ����� ǥ�� 
   	 	        printf("|_|");
   	 	   else if(board[row][column] == 1)// �� �� �� ǥ�� 
		        printf("|O|");
		   else if(board[row][column] == 2)// ������ �� �� ǥ�� 
		    	printf("|X|");   		
	    } 
	     printf("\n");
      }
      return board[8][8]; 
      
      
      char Choice = 0;//������ ����  ����  
      int x = 0, y = 0;//x��ǥ, y��ǥ   
      while(true)
      {
      	gotoxy(x,y);//���� x�� y�� ����� ������ ��ǥ�� �̵�
		printf("+");//Ŀ�� ǥ��
		if(kbhit())
		{
		    Choice = getch();
			switch(Choice)
			{
				case 'w' : //���� �̵�
				   y--;
				   break;
				case 's' : //�Ʒ��� �̵�
				   y++;
				   break;
				case 'a' : //�������� �̵�
				   x--;
				   break;
				case 'd' : //���������� �̵� 
				   x++;
				   break;         
			}
			Sleep(50); 
			system("cls");
		   }   
	  }
	  return 0;
    }
    
    
void gotoxy(int x, int y)//Ŀ�� �̵� �Լ�  
{
	COORD Cursor={x,y};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Cursor);
 } 



