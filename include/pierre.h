#ifndef PIERRE_H
#define PIERRE_H


class pierre
{
   public:
      pierre(couleur, position);
      virtual ~pierre();
   protected:
      bool couleur;
      int x;
      int y;
   private:
};

#endif // PIERRE_H
