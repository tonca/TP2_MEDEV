#include "group.h"

using namespace std;

class pierre;

group::group(pierre* pierre)
{
   //ctor
   this->listPierres.push_back(pierre);
}

group::~group()
{
   //dtor
}

void absorb(group grp)
{
   //absorber un autre groupe et en inclure les membres


}

struct pos {int x; int y; };

int liberte()
{
   list<pos> lib;
   for (int i=0; i<listPierre.size; i++)
   {

   }
}
