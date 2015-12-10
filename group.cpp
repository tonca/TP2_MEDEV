#include "group.h"


using namespace std;


group::group(pierre* Pierre)
{
   //ctor
   this->listPierres.push_back(Pierre);
}

group::~group()
{
   //dtor
}

void group::absorb(group* grp)
{
   //absorber un autre groupe et en inclure les membres
    list<pierre*>::iterator iter;
    for (iter = grp->listPierres.begin(); iter != grp->listPierres.end(); iter++ ){
        this->listPierres.push_back(*iter);
    }
    //détruire l'autre groupe
    grp->~group();

}

int group::liberte()
{
   list<pos> lib;

    //Pour chaque pierre du groupe
    //On regarde à dans les 4 directions
    //Si même couleur, ne rien faire et passer à la suivante
    //Si couleur differente ou si hors du tableau ou si à l'intérieur, ne rien faire et s'arrêter.
    //Si vide, ajouter la position à la liste si elle n'y est pas déjà
    //On renvoie la taille de la liste
   return 0;
}
