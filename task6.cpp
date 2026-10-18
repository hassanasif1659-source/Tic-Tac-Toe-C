//Read a finished 3×3 board using scanf(" %c", &board[i][j]) (characters X, O, or -). Check
//all rows, columns, and both diagonals, then print the winner or declare a draw.

#include <stdio.h>

int main(){
	char board[3][3] ;
	char winner = '-';
	for(int i=0;i<=2;i++){
	for(int j = 0 ;j <= 2 ; j++){
	printf("Enter (X - 0 or -) :");
	scanf(" %c" , &board[i][j]);
	}	
	printf("\n");
	}
	for(int i=0;i<=2;i++){
	for(int j = 0 ;j <= 2 ; j++){
	printf(" %c" , board[i][j]);
	
	}	
	printf("\n");
	}
	for(int i=0;i<=2;i++){
		if(board[i][0]==  board[i][1] && board[i][1] == board[i][2] && board[i][0]!='-' ){
		winner = board[i][0];
		}
	
}
for(int i=0;i<=2;i++){
		if(board[0][i]==  board[1][i] && board[1][i] == board[2][i] && board[0][i]!='-' ){
		winner = board[0][i];
		}
}
	if(board[0][0]==  board[1][1] && board[1][1] == board[2][2] && board[0][0]!='-' ){
		winner = board[1][1];
		}
		if(board[0][2]==  board[1][1] && board[1][1] == board[2][0] && board[0][2]!='-' ){
		winner = board[2][0];
		}
		if(winner!='-'){
			printf("\n %c wins\n",winner);
		}
		else{
			printf("Draw\n");
		}
}