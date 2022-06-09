#include <iostream>
#include <cstdlib>
#include <Windows.h>

#define width 70
#define height 30

using namespace std;

int x = 10, y = 10;

void board()
{
    for (int i = 0; i < height; i++)
    {
        cout << "\t\t#";
        for (int j = 0; j < width - 2; j++)
        {
            if (i == 0 || i == height - 1)
            { 
                cout << "#";
            }            
            else if (i == y && j == x)
            {
            cout << "O";
            }
            else
            {
                cout << " ";
            }
        }
        cout << "#\n";
    }
}
int main()
{
    while (true)
    {
        board();
        x++;
        // system("cls");
        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), { 0, 0 });
    }
}

