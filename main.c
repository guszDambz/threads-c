#include <stdio.h>
#include <pthread.h>
#include <unistd.h>
#include <stdlib.h>
#include <time.h>

#define NOVE_MI	9000000

//MULTIPLOS DE 3
void *multi3(){
   	FILE* m3;
	int b=0, multi=0;

	if((m3 = fopen("multiplos3.txt", "w"))== NULL)
		printf("Erro na abertura");
	else
	{
		for (b=0; b<NOVE_MI; b++)
		{
			multi = b * 3;
			fprintf(m3, "%d ", multi);
		}
	}
	fclose(m3);
	pthread_exit(NULL);
}

//MULTIPLOS DE 5
void *multi5(){
   	FILE* m5;
	int b=0, multi=0;

	if((m5 = fopen("multiplos5.txt", "w"))== NULL)
		printf("Erro na abertura");
	else
	{
		for (b=0; b<NOVE_MI; b++)
		{
			multi = b * 5;
			fprintf(m5, "%d ", multi);
		}
	}
	fclose(m5);
	pthread_exit(NULL);
}

//MULTIPLOS DE 7
void *multi7(){
   	FILE* m7;

	int b=0, multi=0;

	if((m7 = fopen("multiplos7.txt", "w"))== NULL)
		printf("Erro na abertura");
	else
	{
		for (b=0; b<NOVE_MI; b++)
		{
			multi = b * 7;
			fprintf(m7, "%d ", multi);
		}
	}
	fclose(m7);
	pthread_exit(NULL);
}

//MULTIPLOS DE 9
void *multi9(){
   	FILE* m9;

	int b=0, multi=0;

	if((m9 = fopen("multiplos9.txt", "w"))== NULL)
		printf("Erro na abertura");
	else
	{
		for (b=0; b<NOVE_MI; b++)
		{
			multi = b * 9;
			fprintf(m9, "%d ", multi);
		}
	}
	fclose(m9);
	pthread_exit(NULL);
}


int main(int argc, char *argv[])
{
	pthread_t programas[4];

	pthread_create(&programas[0], NULL, multi3, NULL);
	pthread_create(&programas[1], NULL, multi5, NULL);
	pthread_create(&programas[2], NULL, multi7, NULL);
	pthread_create(&programas[3], NULL, multi9, NULL);

	pthread_exit(NULL);


	return 0;
}



