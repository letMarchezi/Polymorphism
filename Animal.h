/*
Autor(es): 
Leticia Bossato Marchezi, RA: 791003, BCC
João Otavio Martini Korczovei, RA: 790913, BCC
Luana de Queiroz Garcia, RA: 740953, BCC
Luís Augusto Simas do Nascimento, RA: 790828, BCC
Vitor Caligaris Figueira, RA:790743, EnC

Data de Criação: 12/04/2021
Data de Atualização: 12/04/2021

Objetivos: Interface de Animal
*/

#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>
#include <iostream>
using namespace std;

namespace poo {
  //definicao de classe abstrata Animal
  class Animal {
    private:
      string nome;
      double peso;

    public:
      Animal(const string &, double = 0.0);
      virtual ~Animal();

      string getNome() const;
      double getPeso() const;

      void setNome(string);
      void setPeso(double);

      virtual string getEspecie() const = 0;
      virtual void imprime() const;
  };

};

#endif