/*............TASK 3.........
............TIC-TAC-TOE GAME............
Build a simple console-based Tic-Tac-Toe game that
allows two players to play against each other*/


#include <iostream>
#include <vector>

using namespace std;
void printBoard(const vector<vector<char>> &board)
{
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            cout << board[i][j];
            if (j < 2)
                cout << " | ";
        }
        cout << endl;
        if (i < 2)
            cout << "---------" << endl;
    }
}
bool checkWin(const vector<vector<char>> &board, char player)
{
    for (int i = 0; i < 3; ++i)
    {
        if (board[i][0] == player && board[i][1] == player && board[i][2] == player)
            return true;
        if (board[0][i] == player && board[1][i] == player && board[2][i] == player)
return true;
    }
    if (board[0][0] == player && board[1][1] == player && board[2][2] == player)
        return true;
    if (board[0][2] == player && board[1][1] == player && board[2][0] == player)
        return true;

    return false;
}
bool isBoardFull(const vector<vector<char>> &board)
{
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            if (board[i][j] != 'X' && board[i][j] != 'O')
                return false;
        }
    }
    return true;
}
void game()
{
    vector<vector<char>> board(3, vector<char>(3, ' '));
    bool player1Turn = true;
    int row, col;

    while (true)
    {
cout << "Welcome to Tic Tac Toe!" << endl;
        printBoard(board);
        char currentPlayer = (player1Turn) ? 'X' : 'O';
        cout << "Player " << currentPlayer << ", enter row (0, 1, 2) and column (0, 1, 2) to make your move: ";
        cin >> row >> col;
        if (row < 0 || row >= 3 || col < 0 || col >= 3 || board[row][col] != ' ')
        {
            cout << "Invalid move. Try again." << endl;
            continue;
        }
        board[row][col] = currentPlayer;
        if (checkWin(board, currentPlayer))
        {
            printBoard(board);
            cout << "Player " << currentPlayer << " wins!" << endl;
            break;
        }
        if (isBoardFull(board))
        {
            printBoard(board);
            cout << "It's a draw!" << endl;
            break;
        }
        player1Turn = !player1Turn;
    }
}
int main()
{
    int choice;
    do
    {
        cout << "Enter 1 to start a new game(Enter 0 to stop playing) : ";
        cin >> choice;
        if (choice)
        {
            game();
        }
    } while (choice);
    cout << "Thank you for playing.Hope you had fun";
return 0;
}

