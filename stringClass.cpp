//classe pour mieux gérer les chaines de caraactères en c
#include <iostream>
#include <cstring>
using namespace std;
class Strings
{
private:
    char *chaine;
    int tailleMem;
    int nbCarac;
    char *alloue(int Longueur);

public:
    Strings (const char *Chn);
    Strings (const Strings &Source);
    //Strings (const char * Chn="");
    Strings (char Carac);
    Strings (int LgrChn);
    ~Strings ();

    char AccessChaine()const{return *chaine;};
     int AccesTaille()const{return tailleMem;};

};

int main()
{
    //Strings S0;
    Strings S1(15);
    const Strings S2("abc");
    char Chn[]= "ijklm";
    Strings S3(Chn);
    Strings S4(S3);
    char hello;
    hello= S2.AccessChaine();
    cout<<hello<<endl;

}

char *Strings::alloue(int Longueur)
{
    if(Longueur<0)
        {
            cerr<<"impossible d'allouer l'espace \n"; exit(1);
        }
    tailleMem= Longueur+1;
    char *P= new char(tailleMem);

    if(!P){cerr<<"Echec d'allocation \n"; exit(2);}

    return P;
}

Strings::Strings(const char *Chn)
    {
        nbCarac= strlen(Chn);
        chaine= alloue(nbCarac);
        strcpy(chaine, Chn);
    }

Strings::~Strings()
    {
        delete[] chaine;

    }

Strings::Strings(int LgrChn)
    {
        nbCarac= 0;
        chaine= alloue(LgrChn);
        chaine[0]='\0';
    }

Strings::Strings(const Strings& Source)
    {
        nbCarac= Source.nbCarac;
        chaine=alloue(Source.nbCarac);
        strcpy(chaine, Source.chaine);
    }

Strings::Strings(char Carac)
    {
        nbCarac= 1;
        chaine= alloue(nbCarac);
        *chaine= Carac;
        *(chaine+1)='\0';
    }
