//#include "group.h"

class group;

#ifndef PIERRE_H
#define PIERRE_H

class pierre
{
   public:
      pierre(bool couleur, int x, int y, group* grp);
      virtual ~pierre();
      pos position;

   protected:
      bool couleur;
      int x;
      int y;
      group* grp;
   private:
};

#endif // PIERRE_H
