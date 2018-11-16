#include<stdio.h>
#include<stdlib.h>
#include"eile.h"

typedef int data;

typedef struct duomenys
{
  data narys;
  struktura* kitas;
}struktura;

typedef struct galva
{
  struktura *head;
  int kiekis;
} *eile;


eile SukurtiTuscia ()
{
  eile a=NULL;
  a = (eile)malloc (sizeof(eile));
  a->head=NULL;
  a->kiekis=0;
  return a;
}

int IdetiElementa (eile a, data elementas)
{
  struktura* naujas=NULL;
  struktura* old=NULL;
  struktura* sekantis=(a->head);
  naujas=(struktura*) malloc(sizeof(struktura));
  if(naujas==NULL)
  {
    return ERROR_CODE_OUT_OF_MEMORY;
  }
  naujas->narys=elementas;
  naujas->kitas=NULL;
  if(sekantis==NULL)
  {
    a->head=naujas;
    a->kiekis++;
    return 0;
  }

  while(sekantis!=NULL)
  {
    old=sekantis;
    sekantis=sekantis->kitas;
  }
  a->kiekis++;
  old->kitas=naujas;
  return 0;
}

int ElementuSkaicius (eile a)
{
  return a->kiekis;
}

void PanaikintiEile(eile a)
{
  struktura* del=NULL;
  del=a->head;
  while((a->head)!=NULL)
  {
    a->head=del->kitas;
    free(del);
    del=a->head;
  }

  return;
}

void PanaikintiElementa(eile a)
{
  struktura* del=NULL;
  del=a->head;
  a->head=del->kitas;
    free(del);
  a->kiekis--;
  return;
}

void SpausdintiEile(eile a)
{
  struktura* p=a->head;
  while(p!=NULL)
  {
    printf("%d \n", p->narys);
    p=p->kitas;
  }
}

data Pirmas(eile a)
{
  struktura *p=a->head;
  return p->narys;
}

int Tuscia (eile a)
{
  if(a->head==NULL)
    return 1;
}
