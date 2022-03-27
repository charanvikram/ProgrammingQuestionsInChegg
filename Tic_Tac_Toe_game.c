#include<stdio.h>
// To show the Tic-tac-toe board
void show(char* ptr_board,int size){
	for(int i=1;i<=size;i++){
		if(i%3==0){
			printf("%c",*(ptr_board+i-1));
			printf("\n");
		}
		else{
			printf("%c ",*(ptr_board+i-1));
		}
	}
}
// Condition Checking for player-1
int check_board_for_player1(char board[],int size,char player1){
	if((board[0]==player1)&&(board[1]==player1)&&(board[2]==player1)){
		return 1;
	}
	else if((board[3]==player1)&&(board[4]==player1)&&(board[5]==player1)){
		return 1;
	}
	else if((board[6]==player1)&&(board[7]==player1)&&(board[8]==player1)){
		return 1;
	}
	else if((board[0]==player1)&&(board[3]==player1)&&(board[6]==player1)){
		return 1;
	}
	else if((board[1]==player1)&&(board[4]==player1)&&(board[7]==player1)){
		return 1;
	}
	else if((board[2]==player1)&&(board[5]==player1)&&(board[8]==player1)){
		return 1;
	}
	else if((board[0]==player1)&&(board[4]==player1)&&(board[8]==player1)){
		return 1;
	}
	else if((board[2]==player1)&&(board[4]==player1)&&(board[6]==player1)){
		return 1;
	}
	else{
		return 0;
	}
}

// Condition checking for player-2

int check_board_for_player2(char board[],int size,char player2){
	if((board[0]==player2)&&(board[1]==player2)&&(board[2]==player2)){
		return 1;
	}
	else if((board[3]==player2)&&(board[4]==player2)&&(board[5]==player2)){
		return 1;
	}
	else if((board[6]==player2)&&(board[7]==player2)&&(board[8]==player2)){
		return 1;
	}
	else if((board[0]==player2)&&(board[3]==player2)&&(board[6]==player2)){
		return 1;
	}
	else if((board[1]==player2)&&(board[4]==player2)&&(board[7]==player2)){
		return 1;
	}
	else if((board[2]==player2)&&(board[5]==player2)&&(board[8]==player2)){
		return 1;
	}
	else if((board[0]==player2)&&(board[4]==player2)&&(board[8]==player2)){
		return 1;
	}
	else if((board[2]==player2)&&(board[4]==player2)&&(board[6]==player2)){
		return 1;
	}
	else{
		return 0;
	}
}
//Non conditional cases are 1 & 2. Since, checking starts from 3,4,5...9.
void nonConditionalCheckingCases(char board[],int size,char player1,char player2){
	int position;
	int check_starts=0;
	if(check_starts==0){
		printf("Player-1(X):-enter the position you want to insert your character:");
		scanf("%d",&position);
		//position=nonModificationInBoard(modify,mod_size);
		board[position-1]=player1;
		show(board,size);
		printf("Player-2(Y):-enter the position you want to insert your character:");
		scanf("%d",&position);
		board[position-1]=player2;
		show(board,size);
	}
}

// Code for players Shuffling 
void board_Game(char board[],int size,char player1,char player2){
	int position;
	int special_checking=0;
	for(int i=3;i<=size;i++){
		if(i&1){
			printf("Player-1(X):-enter the position you want to insert your character:");
			scanf("%d",&position);
			board[position-1]=player1;
			show(board,size);
			int returned_value1 = check_board_for_player1(board,size,player1);
			if(returned_value1==1){
				special_checking =1;
				printf("Player-1(X) won the game\n");
				break;
			}		
		}
		else{
			printf("Player-2(Y):-enter the position you want to insert your character:");
			scanf("%d",&position);
			board[position-1]=player2;
			show(board,size);
			int returned_value2 = check_board_for_player2(board,size,player2);
			if(returned_value2==1){
				special_checking=1;
				printf("Player-2(Y) won the game\n");
				break;
			}	
		}
	}
	// Special case to find the tie of a game.
	if(special_checking==0){
		printf("The game has tie between you!!");
	}
}

/*void nonModificationInBoard(int modify[],int mod_size,int position,int *count_ptr){
		int dummy = *count_ptr;
		for(int i=0;i<size;i++){
			if(modify[i]==position){
				printf("Already the position was filled,Kindly ensure and place your character\n");
				break;
			}
		}
		modify[dummy]=postion;
		*count_ptr+=1;
}
* */
		

int main(){
	char board[]={'1','2','3','4','5','6','7','8','9'};
	//int count =0;
	int size = 9;
	//int modify[]={-1,-1,-1,-1,-1,-1,-1,-1,-1};
	//int mod_size=9;
	char player1='X',player2='Y';
	show(board,size);
	//Selecting symbols for their game.
	//printf("Enter the character for player-1:");
	//scanf("%c",&player1);
	//printf("Enter the character for other player:");
	//scanf("%c",&player2);
	nonConditionalCheckingCases(board,size,player1,player2);
	board_Game(board,size,player1,player2);		
	return 0;
}
