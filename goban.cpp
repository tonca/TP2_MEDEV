#include "goban.h"

goban::goban()
{
   //ctor
}

goban::~goban()
{
   //dtor
}

int goban::identifier(pos position) //renvoie 0 si vide, 1 si blanc, 2 si noir
{
   list<pierre*>::iterator it;
   for (it=pierres.begin(); it!=pierres.end(); it++)
   {
      //it.pos

   }
   return 0;
}
