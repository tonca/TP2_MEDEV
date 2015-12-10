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
    for ( group::iterator iter = grp.begin(); iter != grp.end(); iter++ ){
        this->listPierres.push_back(grp.listPierres[iter]);
    }
    //détruire l'autre groupe
    grp.~group();

}

int group::liberte()
{
   list<pos> lib;
   for (int i=0; i<listPierres.size(); i++)
   {

   }
}
