#include <iostream>
#include <string>
using namespace std;

 //Fonction qui transforme un nombre en chiffre romain.
string convertirEnRomain(int nombre)
{
    // Chaîne qui contiendra le résultat final
    string resultat = "";

    // Liste de valeurs particulières des chiffres romains 
    int valeurs[] = {
        1000, 900, 500, 400,
        100, 90, 50, 40,
        10, 9, 5, 4, 1
    };

    // Symboles associés aux valeurs, il y'en a 13

    string symboles[] = {
        "M", "CM", "D", "CD",
        "C", "XC", "L", "XL",
        "X", "IX", "V", "IV", "I"
    };

    // Parcours des symboles, test pour les différentes valeurs jusqu'à la bonne
    for(int i = 0; i < 13; i++)
    {
        
         //Tant que le nombre est supérieur à la valeur actuelle, on ajoute le symbole correspondant.
        
        while(nombre >= valeurs[i])
        {
            resultat += symboles[i];
            nombre -= valeurs[i];
        }
    }
    return resultat;
}
int main()
{
    int nombre;
    cout << "=== Convertisseur vers les chiffres romains ===" << endl;
    cout << endl;

    // Demande un nombre à l'utilisateur
    cout << "Entrez un nombre entre 1 et 3999 : ";
    cin >> nombre;

    // Vérification de la validité du nombre choisi
    if(nombre < 1 || nombre > 3999)
    {
        cout << "Erreur : le nombre doit être compris entre 1 et 3999." << endl;
        return 1;
    }

    // Affichage du résultat
    cout << endl;
    cout << "Equivalent romain : "
         << convertirEnRomain(nombre)
         << endl;
    return 0;
}
