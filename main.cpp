#include <iostream>
#include <iomanip>
using namespace std;

void InitializeBoard(char board[3][3]);
void show_board(char board[3][3]);

int main(){
	char board[3][3];
	InitializeBoard(board);
    show_board(board);
    return 0;
}

void show_board(char board[3][3]){
	int col;  //PROC - the column in the 2D array
	int row;  //PROC - the row in the 2D array

	//Place the number headers above the columns
	cout << setw(10) << "1" << setw(8) << "2" << setw(9) << "3\n";

	//Place the numbers and lines for the board
	for(row = 0; row < 3; row++)
	{
		cout << setw(7)<< "["<< row + 1 << "][1] | "<< "["<< row + 1;
		cout <<"][2] | " <<"["<< row + 1 << "][3]" << endl;
		cout << setw(14)<< "|"<< setw(9) << "|"  << endl;

		for(col = 0; col < 3; col++)
		{
			switch(col)
			{
				case 0:   cout  << row + 1 << setw(9) << board[row][col];
						  cout  << setw(4) << "|";
						  break;

				case 1:   cout << setw(4) << board[row][col];
						  cout << setw(5) << "|";
						  break;

				case 2:   cout << setw(4) << board[row][col] << endl;
						  break;

				default:  cout << "ERROR!\n\n";
			}
		}

		cout << setw(14)<< "|"<< setw(10) << "|\n";

		//If the row is not 2, then ouput a row of -
		if(row != 2)
		{
			cout << setw(32) << "--------------------------\n";
		}
	}
	cout << endl << endl;
}

void InitializeBoard(char board[3][3])
{
	int col;       //PROC - the column in the array
	int row;       //PROC - the row in the array

	for(row = 0; row < 3; row++)
	{
		for(col = 0; col < 3; col++)
		{
			//Initialize the element to an empty space
			board[row][col] = ' ';
		}
	}
}
