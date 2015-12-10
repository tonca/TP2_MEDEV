#include <cstdlib>
#include <iostream>
#include <list>

#ifndef GROUP_H
#define GROUP_H

class pierre;

class group
{
   public:
      group(pierre* pierre);
      virtual ~group();
      int liberte();
      void absorb(group* groupe);

   protected:
      std::list<pierre*> listPierres;

   private:
};

#endif // GROUP_H
