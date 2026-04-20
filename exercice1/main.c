#include "exercice1.h"
#include <stdio.h>

int main()
{
    Medicament tab[80];
    saisir_tableau(tab, 80);
    tri_bulles(tab);
    printf("%d", tab);
}