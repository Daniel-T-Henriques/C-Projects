#include <stdio.h>
#include <time.h>
#include <Windows.h>
#define T_SIM 4
void mensagem();

int main(){
	float s0[2], s[2], v0[2], g;
	int t;
	float s_anterior[2];
	//Nao defino aceleracao no eixo x
	
	mensagem();
	
	//Definindo valores das vars
	
	s0[0]=0; s0[1]=0; //posicao inicial: (0,0)
	
	printf("Digite a velocidade inicial do objeto no eixo x: ");
	scanf("%f", &v0[0]);
	printf("Digite a velocidade inicial do objeto no eixo y: ");
	scanf("%f", &v0[1]);
	
	printf("Digite a acel. gravitacional: ");
	scanf("%f", &g);
	
	/* Ideia: permitir que o usuario escolha o tempo da simulacao
	printf("Digite quanto tempo voce deseja simular: ");
	scanf("%f", &t_sim);
	*/
	
	/*%%%%%%%%%%%%%%%%%%%%%%%%  SIMULACAO  %%%%%%%%%%%%%%%%%%%%%%%%*/
	for (t=0; t<=T_SIM; t++){
		//GRAVIDADE NO EIXO Y
		s[1] = v0[1]*t - (g*t*t)/2;
		
		//EIXO X
		s[0]=s0[0]+v0[0]*t;
		
		//PASSOU POR Y=0?
		if (s[1]<0 && s_anterior[1]>0){
			printf("\n	*O objeto passou por y=0 entre x=%.2f e x=%.2f", s_anterior[1], s[1]);
		}
		if (s[1]>0 && s_anterior[1]<0){
			printf("\n	*O objeto passou por y=0 entre x=%.2f e x=%.2f", s[1], s_anterior[1]);
		}
		
		//RESULTADO E SLEEP
		s_anterior[1] = s[1];
		printf("\nPosicao em t=%i: P(%.2f, %.2f)", t, s[0], s[1]);
		Sleep(1000);
		
	}
	
	printf("\n\nA velocidade media do objeto em x foi de %.2f unidades por segundo (MRU)", s[0]/T_SIM);
	printf("\n\nA velocidade media do objeto em y foi de %.2f unidades por segundo", s[1]/T_SIM);
	//Nao funciona bem com um objeto cujo movimento muda de sentido. USAR PITAGORAS
	
return 0;
}

void mensagem(){
	printf("Calculadora de QUEDA LIVRE!");
	printf("\n===========================\n\n");
}