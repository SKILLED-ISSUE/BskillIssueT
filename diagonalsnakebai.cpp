#include<toolbox.h>

int main(){
	int col = 11, row = 5;
	line2(5,4,90,30);
	int currentSize = 1;
	int gameOver = 0;
	int colChange = 1, rowChange = 0;
	int posX = 8, posY = 6;
	int size = 0;
	int foodCol = 5+(rand()%90), foodRow = 4+(rand()%30);
	int clear = 0;
	int saveY[100], saveX[100];
	int Rear = -1, Front = -1;
	int time=100;
	while (1){
		gotoxy(1,1);
		printf("Score: %d",currentSize);
		gotoxy(posX,posY);
		printf("#");
		Sleep(time);	
		if (kbhit()){
			switch(getch()){
				case 'w':
					if (colChange != 0){
//						colChange = 0;	
						rowChange = -1;
					}
					
					break;
				case 'a':
					if (rowChange != 0){
						colChange = -1;
//						rowChange = 0;
					}
					
					break;
				case 's':
					if (colChange != 0){
//						colChange = 0;
						rowChange = 1;
					}
					
					break;
				case 'd':
					if (rowChange != 0){						
						colChange = 1;
//						rowChange = 0;			
					}
					break;
			}			
		}	
		
		posX += colChange;
		posY += rowChange;
		                  
//		int headY = posX;
//		int headX = posY;
//		
//		for (int i = 0; i < currentSize; i++){
//			if (headX == saveX[i] && headY == saveY[i])	{
//				gotoxy(20,1); printf("GO");
//				posX=90;
//			}
//		}
		
		if (Rear+1 > currentSize){
			clearportion(saveX[0],saveY[0],saveX[0],saveY[0]);
		}
		else{
			clearportion(saveX[Rear+1],saveY[Rear+1],saveX[Rear+1],saveY[Rear+1]);
		}
		
		if (Rear == currentSize){			
			Rear = -1;			
		}	
		
		Rear += 1;
		saveX[Rear] = posX;
		saveY[Rear] = posY;   
			
		
		
		if (posX == foodCol && posY == foodRow){
			foodCol = 5+(rand()%85);
			foodRow = 4+(rand()%26);
			currentSize++;	
			time-=1;		
		}
		
		
				
		printxy(foodCol,foodRow,"%");		
			
		if (posX == 90 || posX == 5 || posY == 4 || posY == 30){
			break;			
		}	
	}
	
	printxy (43,15,"Game Over");
	getch();
}