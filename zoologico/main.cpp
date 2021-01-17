#include <iostream>
using namespace std;

int main(void) {
  char animal[20];
  int op,m,r,a,cont=0,cont1=0,cont2=0,cm,pm,tm,tpp,tpp1,tpp2,tpp3,tttm=0,tttr=0,ttta=0,tttpm=0,tttpr=0,tttpa=0;
  int rp,cr,pr;
  int ca,pa,av;

  do
  {

  cout<<"////////////////////ZOOLOGICO//////////////////////\n\n";
  cout<<"MENU"<<endl;
  cout<<"1. Mamiferos"<<endl;
  cout<<"2. Reptiles"<<endl;
  cout<<"3. Aves"<<endl;
  cout<<"4. Numero de animales y peso total"<<endl;
  cout<<"5. SALIR"<<endl;
  cout<<"Escoja una opcion:"<<endl;
  cin>>op;
  switch(op)
  {
    case 1:
    cout<<"MAMIFEROS\n";

    cout<<"Ingrese el numero de animales mamiferos:\n";
    cin>>m;
    while(cont<m)
    {
      cout<<"Mamifero:"<<cont+1<<endl;
      cout<<"Ingrese el nombre del mamifero:\n";
      cin>> animal;

      cout<<"Cuantos "<<animal<<" son: \n";
      cin>>cm;

      cout<<"Peso de cada "<<animal<<" en kg: \n";
      cin>>pm;
      cont=cont+1;
      tttpm=tttpm+(pm*cm);

      tttm=tttm+cm;



    }
    break;
    case 2:
    cout<<"REPTILEs\n";

    cout<<"Ingrese el numero de REPTILES:\n";
    cin>>rp;
    while(cont1<rp)
    {
      cout<<"REPTIL"<<cont1+1<<endl;
      cout<<"Ingrese el nombre del mamifero:  \n" ;
      cin>>animal;

      cout<<"Cuantos "<<animal<<" son: \n ";
      cin>>cr;

     cout<<"Peso de cada "<<animal<<" en kg: \n";
     cin>>pr;
      cont1=cont1+1;

      tttr=tttr+cr;
      tttpr=tttpr+(pr*cr);

    }
    break;

    case 3:
    cout<<"AVES\n";

    cout<<"Ingrese el numero de aves:\n";
    cin>>av;
    while(cont2<av)
    {
      cout<<"AVE"<<cont2+1<<endl;
     cout<<"Ingrese el nombre del AVE:  \n" ;
      cin>>animal;

      cout<<"Cuantos "<<animal<<" son: \n ";
      cin>>ca;

      cout<<"Peso de cada "<<animal<<" en kg: \n";
      cin>>pa;
      cont2=cont2+1;

      ttta=ttta+ca;
      tttpa=tttpa+(pa*ca);

    }
    break;
    case 4:
    tm=tttm+tttr+ttta;
    tpp=tttpm+tttpr+tttpa;

    cout<<"El numero de animales total es es:"<<tm<<endl;
    cout<<"El peso total es:"<<tpp<<endl;
    break;

    case 5:
    cout<<"ADIOS"<<endl;
  }
  }while(op!=5);

  return 0;
}
