//255 studdento nr
#ifndef EILE_H
#define EILE_H
#define ERROR_CODE_OUT_OF_MEMORY 1;
typedef int data;

typedef struct duomenys struktura;

typedef struct galva *eile;


eile SukurtiTuscia ();
int IdetiElementa(eile a, data elementas);// grazina 1, jei nebuztenka vietos. Grazina 0, jei viskas gerai
int ElementuSkaicius (eile a);
void PanaikintiEile(eile a);
void PanaikintiElementa(eile a);
void SpausdintiEile(eile a);
data Pirmas(eile a);
int Tuscia (eile a);// jei grazina 1 tai eile tuscia, jei 0

#endif
