#include <stdio.h>
#include <stdlib.h>
//This program Created By Soui for github SouiInSpace
//This program is free but dont delete the coopyright thank you ^^
// https://github.com/SouiInSpace
int main()
{
    // Déclaration des variables
    int n,i=0; //Une variable pour le chiffre a entré, et une valeur pour le compte de la boucle
    float s; //le résultat seras un chiffre à virgule


do
{   //Valeur à entrer
    printf ("Entrez le nombre de terme n : ");
    scanf ("%d", &n);
    }while (n<1);

    //Debut boucle
    for (s=0.0, i=1 ; i<=n ; i++)
    s += (float)1/i;
    printf("La somme des %d premiers termes est %f \n", n, s);
    return 0;
}
