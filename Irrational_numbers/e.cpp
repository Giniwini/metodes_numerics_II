#include <iostream>
#include <math.h>
#include<fstream>
#include<stdlib.h>
#include<time.h>

using namespace std;

////////////////////GEN�S L�INEZ I ORIOL TEIXID�. OBTENCI� DEL N�MERO E//////////////////////////
//////////////// a partir de de raonaments de desintegraci� at�mica (o an�legs)/////////////////
/////////////////// N=N0�exp(-pt) llavors per un t=p es complir� N0/N=e ///////////////////////

int main()
{	int n, x, f, t=200, N0=7000000, N, s;
	double e;
	
	srand(time(NULL));

	N=N0;
	
	for(s=1; s<=t; s++){//per un temps t=1/p (cada iteraci� d'aquest for equival a una unitat de temps)

	for(n=1; n<=N; n++){//totes les partcules tenen p=1/100 de desistegrasr-se.
	
	x=rand()%t;//t=1/p			
	if(x==0){ N=N-1;}}//si x=0 vol dir que aquesta part�cula es desintegra i passem a tenir N=N-1 part�cules
	                       
		}
		
	e=N0*pow(N,-1);
		
	cout<<"e obtingut  "<<e<<"  e real "<<2.718281828;
	
		cin.ignore(); return 0;}
		
		 
