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

}
