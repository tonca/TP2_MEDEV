#include "group.h"


using namespace std;


group::group(pierre* Pierre)
{
   //constructeur du groupe. Ajout de la première pierre
   this->listPierres.push_back(Pierre);
}

group::~group()
{
   //dtor
}

void group::absorb(group* grp)
{
   //absorber un autre groupe et en inclure les membres
    list<pierre*>::iterator iter; //itterateur parcourant le groupe absorbé
    for (iter = grp->listPierres.begin(); iter != grp->listPierres.end(); iter++ ){
        //absorbtion des pierres
        this->listPierres.push_back(*iter);
    }
    //destruction du groupe absorbé
    grp->~group();

}

int group::liberte()
{
   //renvoie le nombre de libertés d'un groupe
   list<pos> lib;

    //Pour chaque pierre du groupe
    //On regarde à dans les 4 directions

    //Si même couleur, ne rien faire et passer à la suivante,

    //Si couleur differente ou si hors du tableau ou si à l'intérieur du groupe, ne rien faire et s'arrêter.

    //Si vide, ajouter la position à la liste si elle n'y est pas déjà
    //On renvoie la taille de la liste
   return 0;
}
