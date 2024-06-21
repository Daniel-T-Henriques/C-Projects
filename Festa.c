#include <stdio.h>
#include <Windows.h>

#define T_FESTA 100
int main(){
	int i, tempo_padrao[3], opc_padrao;
	int j;
	
	//mencionando as funcoes
	void letreiro();
	
	puts("BEM VINDO A FESTA!");
	printf("Escolha o padrao (numero de 1 a 3): ");
	scanf("%i", &opc_padrao);
	
	system("cls");
	
	if (opc_padrao == 1){
		tempo_padrao[0] = 300;
		tempo_padrao[1] = 300;
		tempo_padrao[2] = 300;
	}
	
	if (opc_padrao == 2){
		tempo_padrao[0] = 200;
		tempo_padrao[1] = 200;
		tempo_padrao[2] = 200;
	}
	
	if (opc_padrao == 3){
		tempo_padrao[0] = 300;
		tempo_padrao[1] = 550;
		tempo_padrao[2] = 800;
	}
	
	for (i=0; i<=T_FESTA; i++){
		//CORES
		if ((i%6)==0){system("color 2");}
		if ((i%6)==1){system("color 3");}
		if ((i%6)==2){system("color 4");}
		if ((i%6)==3){system("color 5");}
		if ((i%6)==4){system("color 6");}
		if ((i%6)==5){system("color 7");}
		
		letreiro();
		
		Sleep(tempo_padrao[i%3]);
		
		system("cls");
	}
}

void letreiro(){
	puts("=================================================");
	puts("===OOOOOO==OOOOOO===OOOOO==OOOOOOO===OOOO====O===");
	puts("===O=======O=======O==========O=====O====O===O===");
	puts("===O=======O=======O==========O=====O====O===O===");
	puts("===OOOOO===OOOOO====OOOO======O=====O====O===O===");
	puts("===O=======O============O=====O=====OOOOOO===O===");
	puts("===O=======O============O=====O=====O====O=======");
	puts("===O=======OOOOOO==OOOOO======O=====O====O===O===");
	puts("=================================================");
}