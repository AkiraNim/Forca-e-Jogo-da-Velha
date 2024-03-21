#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>
void ticTacToeLoop(char ticTacToe[3][3]){
	/*essa primeira funcao serve apenas pra zerar todos os parametros caso o jogador queira jogar mais uma vez*/
		ticTacToe[0][0]='1';
		ticTacToe[0][1]='2';
		ticTacToe[0][2]='3';
		ticTacToe[1][0]='4';
		ticTacToe[1][1]='5';
		ticTacToe[1][2]='6';
		ticTacToe[2][0]='7';
		ticTacToe[2][1]='8';
		ticTacToe[2][2]='9';
		
}
void ticTacToePrint(char ticTacToe[3][3]){
	/*essa segunda funcao serve pra imprimir o jogo da velha sempre que chamada*/
	int line, column;
			printf("\n\n\n   ###JOGO DA VELHA####\n\n\n");
			for(line = 0; line <3; line++){
				for(column = 0; column <3; column++){
					printf("    %c  ", ticTacToe[line][column]);         
					if(column < 2){
						printf("|");
					}
					if(column == 0){
						printf("");
					}
				}
				if(line < 2){
					printf("\n  ---------------------\n");
				}
			}
		printf("\n\n\n");
		
}	

int main(){
	int plays;
    char ticTacToe[3][3];
    char continue_='s';
    char lineChoose, charChoose, winner;
		while(continue_=='s'){
			system("cls");
			winner='n';
			ticTacToeLoop(ticTacToe);
			while(winner=='n'){
				
				system("cls");
				ticTacToePrint(ticTacToe);
				printf("\n\nDigite qual lugar vai jogar: ");
    			scanf("%c", &lineChoose);	
				fflush(stdin);
    			switch(lineChoose){
    			
	    			case '1':
	    				if(ticTacToe[0][0]=='1' && ticTacToe[0][0]!='\n'){
	    					fflush(stdin);
	    					plays++;
	    					printf("\nX ou O ?\n");
	    					do{
	    						scanf("%c", &charChoose);
	    						ticTacToe[0][0]=charChoose;
						}while(charChoose=='\n');
	    					
	    					
	    						break;
						}
	    				else{
	    					printf("\nEste local ja foi jogado ou opção invalida\n");
	    					system("pause");
	    						break;
						}
	    			case '2':
	    				if(ticTacToe[0][1]=='2'){
	    					plays++;
	    					fflush(stdin);
	    					printf("\nX ou O ?\n");
	    					do{
	    						scanf("%c", &charChoose);
	    						ticTacToe[0][1]=charChoose;
						}while(charChoose=='\n');
	    					
	    						break;
						}
	    				else{
	    					printf("\nEste local ja foi jogado\n");
	    					system("pause");
	    						break;
						}
	    			case '3':
	    				if(ticTacToe[0][2]=='3'){
	    					plays++;
	    					fflush(stdin);
	    					printf("\nX ou O ?\n");
	    					do{
	    						scanf("%c", &charChoose);
	    						ticTacToe[0][2]=charChoose;
						}while(charChoose=='\n');
	    					
	    						break;
						}
	    				else{
	    					printf("\nEste local ja foi jogado\n");
	    					system("pause");
	    						break;
						}
	    			case '4':
	    					if(ticTacToe[1][0]=='4'){
	    						plays++;
	    					fflush(stdin);
	    					printf("\nX ou O ?\n");
	    					do{
	    						scanf("%c", &charChoose);
	    						ticTacToe[1][0]=charChoose;
						}while(charChoose=='\n');
	    					
	    					
	    						break;
						}
	    				else{
	    					printf("\nEste local ja foi jogado\n");
	    					system("pause");
	    						break;
	    				}
					case '5':
	    				if(ticTacToe[1][1]=='5'){
	    					plays++;
	    					fflush(stdin);
	    					printf("\nX ou O ?\n");
	    					do{
	    						scanf("%c", &charChoose);
	    						ticTacToe[1][1]=charChoose;
						}while(charChoose=='\n');
	    					
	    						break;
						}
	    				else{
	    					printf("\nEste local ja foi jogado\n");
	    					system("pause");
	    						break;
	    				}
					case '6':
	    				if(ticTacToe[1][2]=='6'){
	    					plays++;
	    					fflush(stdin);
	    					printf("\nX ou O ?\n");
	    					do{
	    						scanf("%c", &charChoose);
	    						ticTacToe[1][2]=charChoose;
						}while(charChoose=='\n');
	    					
	    						break;
						}
	    				else{
	    					printf("\nEste local ja foi jogado\n");
	    					system("pause");
	    						break;
	    				}
					case '7':
	    				if(ticTacToe[2][0]=='7'){
	    					plays++;
	    					fflush(stdin);
	    					printf("\nX ou O ?\n");
	    					do{
	    						scanf("%c", &charChoose);
	    						ticTacToe[2][0]=charChoose;
						}while(charChoose=='\n');
	    					
	    						break;
						}
	    				else{
	    					printf("\nEste local ja foi jogado\n");
	    					system("pause");
	    						break;
	    				}
					case '8':
	    				if(ticTacToe[2][1]=='8'){
	    					plays++;
	    					fflush(stdin);
	    					printf("\nX ou O ?\n");
	    					do{
	    						scanf("%c", &charChoose);
	    						ticTacToe[2][1]=charChoose;
						}while(charChoose=='\n');
	    					
	    						break;
						}
	    				else{
	    					printf("\nEste local ja foi jogado\n");
	    					system("pause");
	    						break;
	    				}
					case '9':
	    				if(ticTacToe[2][2]=='9'){
	    					fflush(stdin);
	    					plays++;
	    					printf("\nX ou O ?\n");
	    					do{
	    						scanf("%c", &charChoose);
	    						ticTacToe[2][2]=charChoose;
						}while(charChoose=='\n');
	    					
	    						break;
						}
	    				else{
	    					printf("\nEste local ja foi jogado\n");
	    					system("pause");
	    						break;
	    				}						    					
				}
				
				if(ticTacToe[0][0]==ticTacToe[0][1] && ticTacToe[0][1]==ticTacToe[0][2]) winner=ticTacToe[0][0];
					if (ticTacToe[1][0]==ticTacToe[1][1] && ticTacToe[1][1]==ticTacToe[1][2]) winner=ticTacToe[1][0];
						if (ticTacToe[2][0]==ticTacToe[2][1] && ticTacToe[2][1]==ticTacToe[2][2]) winner=ticTacToe[2][0];
				
				if(ticTacToe[0][0]==ticTacToe[1][0] && ticTacToe[1][0]==ticTacToe[2][0]) winner=ticTacToe[0][0];
					if(ticTacToe[0][1]==ticTacToe[1][1] && ticTacToe[1][1]==ticTacToe[2][1]) winner=ticTacToe[0][1];
						if(ticTacToe[0][2]==ticTacToe[1][2] && ticTacToe[1][2]==ticTacToe[2][2]) winner=ticTacToe[0][2];
				
				if(ticTacToe[0][0]==ticTacToe[1][1] && ticTacToe[1][1]==ticTacToe[2][2]) winner=ticTacToe[0][0];
					if(ticTacToe[0][2]==ticTacToe[1][1] && ticTacToe[1][1]==ticTacToe[2][0]) winner=ticTacToe[0][2];
				
				if(plays>8) break;
			}
			system("cls");
			ticTacToePrint(ticTacToe);
			if(winner!='n'){
				printf("O Ganhador foi o jogador: ' %c '\nDeseja continuar a jogar? ", winner);
				fflush(stdin);
				scanf("%c", &continue_);
				system("cls");
			}
			else{
				printf("Nao houve vencedor.\nDeseja continuar a jogar? ");
				fflush(stdin);
				scanf(" %c", &continue_);
				system("cls");
			}
		}
		printf("\n\n\nObrigado por jogar :)\n");
}
	

