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
   /*
   On prend une pierre
   On regarde à dans les 4 directions
   Si même couleur, répéter l'algorythme sur la pierre suivante
   Si couleur differente ou si hors du tableau, ne rien faire et s'arrêter.
   Si vide, ajouter la position à la liste si elle n'y est pas déjà
   */

   list<pos> lib;
   for (int i=0; i<listPierres.size(); i++)
   {
    /* On veut compter les cases libres à l'exterieur du groupe*/
   }
   return 0;
}
