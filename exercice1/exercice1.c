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

int recherche_dichotomique(Medicament tab[], char nom[50])
{
    int trouve = 0;
    int droite = 80;
    int gauche = 0;

    while (trouve == 0)
    {
        int mid = (gauche + droite) / 2;
        if (tab[mid].nom == nom)
        {
            trouve == 1;
        }
        else if ()
    }

    return mid;
}