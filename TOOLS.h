#include<stdio.h>
#include<windows.h>

//change color
short cc = 7;
void ccolor(int k)
{
    HANDLE hConsole;
    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    SetConsoleTextAttribute(hConsole,k);
}
//change position
void cpos(short _x,short _y)
{
    HANDLE hConsole;
    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD dwPos;
    dwPos.X = _x;
    dwPos.Y = _y;

    SetConsoleCursorPosition(hConsole, dwPos);
}

