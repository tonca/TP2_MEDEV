//#include "group.h"

class group;

#ifndef PIERRE_H
#define PIERRE_H

class pierre
{
   public:
      pierre(bool couleur, int x, int y);
      virtual ~pierre();
      int getX();
      int getY();
      bool getCouleur();

   protected:
      bool couleur; //false si blanc et true si noir
      int x;
      int y;
      group* grp;
   private:
};

#endif // PIERRE_H
