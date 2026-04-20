#include "exercice1.h"
#include <stdio.h>

void saisir_tableau(Medicament tab[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Medicament %d\n", i + 1);
        printf("Name: ");
        scanf("%s", tab[i].nom);
        printf("Expiration Date (YYYYMMDD): ");
        scanf("%d", &tab[i].date_peremption);
    }
}

void echange(Medicament *n1, Medicament *n2)
{
    Medicament temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}

void tri_bulles(Medicament tab[])
{
    for (int i = 0; i < 80 - 1; i++)
    {
        for (int j = 0; j < 80 - i; j++)
        {
            if (tab[j].date_peremption > tab[j + 1].date_peremption)
            {
                echange(&tab[j], &tab[j + 1]);
            }
        }
    }
}
