#ifndef EXERCICE_1_H
#define EXERCICE_1_H

typedef struct
{
    char nom[50];
    int date_peremption;
} Medicament;

void echange(Medicament *n1, Medicament *n2);
void saisir_tableau(Medicament tab[], int n);
void tri_bulles(Medicament tab[]);

#endif