#include <windows.h>
#include <stdio.h>

int main(void) {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO csbi;

    system("cls");

    if (GetConsoleScreenBufferInfo(hConsole, &csbi)) {
        SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
    }

    printf("> Jumlah anak: jumlah saudara+1");
    return 0;
}
