#include <stdio.h>
int p,Edades[10] = {15,11,13,20,25,31,23,80,24,12};
const int RD = 18, US = 21;
int main(int argc, char *argv[]) {
	int MaRD=0,MeRD=0,MaUS=0,MeUS=0; 
	int MaxP=0,MinP=0,MaxE=0,MinE=0;
	MaxE = MinE = Edades[0];
	for(p=0; p<10; p++){
		if(Edades[p]>=RD){ MaRD++; }else{ MeRD++; }
		if(Edades[p]>=US){ MaUS++; }else{ MeUS++; }
		if(MaxE<Edades[p]){ MaxE=Edades[p]; MaxP = p+1; } 
		if(MinE>Edades[p]){ MinE=Edades[p]; MinP = p+1; }
	}
	printf("\nRD => Mayores:%d Menores: %d",MaRD,MeRD);
	printf("\nUS => Mayores:%d Menores: %d",MaUS,MeUS);
	printf("\n#%d es el mayor con %d años.",MaxP,MaxE);
	printf("\n#%d es el menor con %d años.",MinP,MinE);
	return 0;
}