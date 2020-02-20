#include <stdio.h>
#include <stdlib.h>
#include "menu.h"
int main(int argc, char ** argv)
{
    system("chcp 65001");// Permet de mettre le code en UTF-8 les accent et tous // 1252
    system("cls");// on efface ne marche que sur windows
    menu();
    return 0;
}

