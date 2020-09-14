
#include <stdio.h>
#include <time.h>
#include <iostream>
using namespace std;
int main ()
{
  time_t timer;               //guarda el tiempo del computador en la variable llamada timer
  struct tm tk = {0};        //crea una estructura de tiempo y la guarda en una variable llamada tk
  double seconds;             

  tk.tm_hour = 0;            
  tk.tm_min = 0;             
  tk.tm_sec = 0;             
  int ano;                       // variable int aun no definida
  cout<<"digite el año:"; cin>> ano;       //imprime el mensaje "digite el año:" y define el valor de la varible int  anterior
  int mes;                       // variable int aun no definida
  cout<<"digite el mes:"; cin>> mes;        //imprime el mensaje "digite el mes:" y define el valor de la varible int  anterior
  int dias;                       // variable int aun no definida
  cout<<"digite el dia:"; cin>> dias; //imprime el mensaje "digite el dia:" y define el valor de la varible int  anterior
  tk.tm_year=ano-1900;       
  tk.tm_mon=mes-1;           
  tk.tm_mday=dias;           

  time(&timer);                  // convierte en tiempo unix lo de la varible timer

  seconds = difftime(timer,mktime(&tk)); //es una operacion de diferencial de tiempo entre la estructura tk y el timer en tiempo unix) 
  float dia=seconds/86400;        // operacion que convierte el tiempo unix (seg) en dias
  printf ("Has vivido %.f",dia);   // imprime el valor de la variable dia con una frase
  return 0;
}