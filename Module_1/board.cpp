#include <iostream>
#include <vector>
using std::vector;
using std::cout;
using std::endl;

void PrintBoard(vector<vector<int>> board);
//void ReadboardFile


int main()
{
    vector<vector<int>> board =    {{0, 1, 0, 0, 0, 0},
                                    {0, 1, 0, 0, 0, 0},
                                    {0, 1, 0, 0, 0, 0},
                                    {0, 1, 0, 0, 0, 0},
                                    {0, 0, 0, 0, 0, 0}};
    PrintBoard(board);
    
 return 0;
}




void PrintBoard(vector<vector<int>> board)
{
    for(int i=0;i<board.size();i++)
    {
        for(int j=0;j<board[i].size();j++)
        {
            cout<<board[i][j] << " ";
        }
        cout << endl;
    }
}
