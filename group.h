#include <cstdlib>
#include <iostream>
#include <list>
#include "pierre.h"

#ifndef GROUP_H
#define GROUP_H


struct pos {int x; int y; };

class group
{
   public:
      group(pierre* pierre);
      virtual ~group();
      int liberte();
      void absorb(group* grp);

   protected:
      std::list<pierre*> listPierres;

   private:
};

#endif // GROUP_H
