// chamamos a biblioteca
# include <stdio.h>
//primeiro declaramos as variaveis que precisaremos para iniciar os codigos. indicando o numero de posiçoes atraves do vetor n[5].
//declarando as os tipos de suas variaveis
int main() {
	int n[5];
	int i;
	int soma = 0;
	int maior = 0,menor = 0;
	//criamos um lopp e depois realizamos a pergunta ao usuario de forma que fica mais facil utilização do codigo;
	//Indicamos o calculo de soma e logo apos, declaramos o ponto de partida para realizar a condição entre maior e menor;
	// cria-se dois loop um para pedir ao usurio os numeros para preenchera as posiçoes do vetor e outo para realizar a condição;
	//a cada vota realizara a comparação atraves da condição indicada para achar o menor e maior valor. 
	for ( i= 0; i<5; i++ ) {
	    printf("digite um numero na posição %d:", i);
	    scanf("%d", &n[i]);
	    soma +=n[i];
    }
	    maior = menor = n[0];
//como ja indicamos como o valor começaria (n[0)]) quando for realizar o FOR começa com (i=1)
//indica qual a condiçao ira realizar
	for (i =1; i<5; i++){
	    if (n[i]>maior) {
	        maior = n[i];
	    }
	   if (n[i]<menor){
	       menor = n[i];
	   }
    } 
//por fim, mandmos mostrar na tela o resultado solicitado pelo algoritmo.
    printf("\nsoma dos valores é: %d\n", soma);
	printf(" o maior valor é: %d\n", maior);
	printf(" o menor valor é:  %d\n", menor);
	return 0;
}