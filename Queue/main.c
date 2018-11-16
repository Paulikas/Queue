#include<stdio.h>
#include"eile.h"

typedef int data;

typedef struct duomenys struktura;

typedef struct galva *eile;

int main()
{
  eile a;
  int k, i;
  data n;
  a=SukurtiTuscia(a);
  k=Tuscia(a);
  if(k==1)
    printf("eile tuscia \n");

  printf("iveskite kieki: ");
  scanf("%d", &k);
  if(k!=0)
  {
  for(i=0; i<k; i++)
    {
      printf("iveskite elementa: ");
      scanf("%d", &n);
      IdetiElementa(a, n);
    }
  }
  SpausdintiEile(a);
  if(k!=0)
    PanaikintiElementa(a);
  SpausdintiEile(a);
  k=ElementuSkaicius(a);
  printf("kiekis %d \n", k);

  if(k!=0){
  n=Pirmas(a);
  printf("pirmas %d \n", n);
  PanaikintiEile(a);
  }
  return 0;
}
