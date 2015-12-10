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
      if((*it)->getX() == position.x && (*it)->getY() == position.y )
      {
         if((*it)->getCouleur()) return 2;
         else return 1;
      }
   }
   return 0;
}

//Méthode qui renvoie true si une pierre a été ajoutée au goban
//false sinon
bool goban::addPierre(pierre* Pierre)
{
   pos position = {Pierre->getX(), Pierre->getY()};
   if(identifier(position)==0)
      {
         pierres.push_back(Pierre);
         return true;
      }
   else return false;

}
