#ifndef ALUNO_H
#define ALUNO_H
#include<string>
#include<vector>

using namespace std;

class Aluno{
    private:
      string nome;
      int matricula;
      vector <int> notas;
    public:
      Aluno (string, int, vector<int>);
      float CalculaMedia();
      int RetornaMax();
      int RetornaMin();
      string getNome() const;
      int getMatricula() const;
      vector <int> getNotas() const;
      bool operator<(const Aluno& outro) const;
};


#endif