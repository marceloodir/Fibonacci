#include <stdio.h>

 unsigned long fibonacci(unsigned long i) {
	//if(i==1) return 0;
	if(i==2 || i==1) return 1;
	return fibonacci(i-1) + fibonacci(i-2);
}


int main(int argc, char **argv) {
	int entrada;
	unsigned long saida;


	printf("Entre o N-ésimo termo da serie de fibonacci a ser calculado: ");
	scanf("%d",&entrada);

	saida = fibonacci(entrada);

	printf("\nsaida: %lu\n\n",saida);

	return 0;
}
