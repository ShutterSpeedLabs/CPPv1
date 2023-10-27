#include <iostream>
#include <fstream>
#include <vector>
using std::vector;
using std::cout;
using std::endl;

enum class State {kEmpty, kObstacle};


int Heuristic(int x1, int y1, int x2, int y2){
    return abs(x2-x1) + abs(y2-y1);
}

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

    std::ofstream output_file("1.board");
    
for(int i=0;i<board.size();i++){
		for(int j=0;j<board[i].size();j++){
			output_file<<board[i][j]<<",";
        }
		output_file<<endl;
} 

output_file.close();

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