#ifndef PONTO_H
#define PONTO_H
class Ponto{
    private:
      int x, y;

    public:
      Ponto(int x, int y);
      int getX() const;
      int getY() const;
      void setX(int x);
      void setY(int y);
};

#endif