/* Header de la classe Goban

*/

#include "group.h"

#ifndef GOBAN_H
#define GOBAN_H

using namespace std;

class goban
{
   public:
      goban();
      virtual ~goban();
      int identifier(pos position); //renvoie 0 si vide, 1 si blanc, 2 si noir
      bool addPierre(pierre* Pierre);
      int getTaille();

   protected:
      list<pierre*> pierres;
      int taille;

   private:
};

#endif // GOBAN_H
