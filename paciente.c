#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

typedef struct {
    char nome[50];
    int idade;
    unsigned long  identidade;
    char sexo[20];
    int data_exame;
    int data_entrega;
    char exames[200]; 
  }ficha_de_paciente;


void Capturando_Cadastro();
void Cadastro_Arquivo();
void Editar_Arquivo();
void Pesquisar_Arquivo();
void Excluir_Arquivo();
int Editando(); 
int Continua();
int Menu();
void Alterar_Posicao();
void Campo_Dados();
char*criando_nome_do_arquivo();



int main(int argc, char const *argv[]){
	int a = 1;
	int x;
while(a == 1){
	system("cls");
	int valor = Menu();	
       switch(valor){
			case 1 :
				do{
					
		
					Capturando_Cadastro();
			  					
			  		x=Continua("cadastrando");	
			  				
			}while(x == 1);
				printf("\n");
			break;		

	     	case 2 :
	     		x = 1;
	     		do{
		       	    

		       		Editar_Arquivo();
				    printf("\n\n");  
				  	x=Continua("modificando");
			}while(x == 1);
				printf("\n");
		 	break;

	     	case 3 :
	     		x = 1;
	     		do{
	     			
			       	
			       	Pesquisar_Arquivo();

					x=Continua("pesquisando");
			}while(x == 1);
				printf("\n");

	     	break;

	     	case 4 :
				x = 1;
	     		do{	
	     				

	     			Excluir_Arquivo();

					x=Continua("excluindo");
			}while(x == 1);
				printf("\n");

	     	break;

	     	case 5 :
	     	system("cls");
	       	printf ("\n\n\t\t\t\t \xBA Seu Programa foi fechado!!!! \xBA\n");
	       	exit(0);
	     	break;
		}
}
	
	return 0;
}

int login_menu(){

}

int Menu(void){
	int x,y;
	x = 57;
    y = 28;

	printf("\n\t\t\t\t\033[33m\xC9\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBB\n");
	printf("\t\t\t\t\033[33m\xBA\t\033[32m    BEM VINDO A BIOTECH\t  \t   \033[33m\xBa\n");
	printf("\t\t\t\t\033[33m\xC8\xCD\xBA\033[37m Programa de auxilio aos laboratorios \033[33m\xBa\xCD\xBC\n");

	printf("\n\t  \033[33m\xC9\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBA      MENU      \xBa\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBB\n");
	
	printf("\t  \033[33m\xBA  \t\t\033[37m Escolha qual menu deseja acessar pelo numero correspondente\t  \t \033[33m\xBa\n");
	printf("\t  \033[33m\xBA\t\t\t\t\t\t\t\t\t\t\t \033[33m\xBa\n");//Espaço
	
	printf("\t  \033[33m\xBA\t\t\033[36m   \xC9\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBB\t\t\t\t\t\t\t \033[33m\xBa\n");
	printf("\t  \033[33m\xBA\t\t   \033[36m\xBA   Cadastro (1)  \xBA\t\t\t\t\t\t  \t\033[33m \xBa\n");
	printf("\t  \033[33m\xBA\t\t\033[36m   \xC8\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBC\t\t\t\t\t\t\t \033[33m\xBa\n");
	printf("\t  \033[33m\xBA\t\t\t\033[35m   \xC9\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBB\t\t\t\t\t\t \033[33m\xBa\n");
	
	printf("\t  \033[33m\xBA\t\t\t   \033[35m\xBA   Modificar (2) \xBA\t\t\t\t\t\t\033[33m \xBa\n");
	printf("\t  \033[33m\xBA\t\t\t\033[35m   \xC8\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBC\t\t\t\t\t\t \033[33m\xBa\n");
    printf("\t  \033[33m\xBA\t\t\t\t\033[32m   \xC9\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBB\t\t\t\t\t \033[33m\xBa\n");
	
	printf("\t  \033[33m\xBA\t\t\t\t   \033[32m\xBA   Pesquisar (3) \xBA\t\t\t\t\t\033[33m \xBa\n");
	printf("\t  \033[33m\xBA\t\t\t\t\033[32m   \xC8\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBC\t\t\t\t\t \033[33m\xBa\n");
	printf("\t  \033[33m\xBA\t\t\t\t\t\033[31m    \xC9\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBB\t\t\t\t \033[33m\xBa\n");
	
	printf("\t  \033[33m\xBA\t\t\t\t\t   \033[31m \xBA    Excluir (4)  \xBA\t\t\t\t\033[33m \xBa\n");
	printf("\t  \033[33m\xBA\t\t\t\t\t\033[31m    \xC8\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBC\t\t\t\t \033[33m\xBa\n");
	printf("\t  \033[33m\xBA\t\t\t\t\t\t\033[34m    \xC9\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBB\t\t\t \033[33m\xBa\n");
	
	printf("\t  \033[33m\xBA\t\t\t\t\t\t   \033[34m \xBA    Sair (5)     \xBA\t\t\t\033[33m \xBa\n");
	printf("\t  \033[33m\xBA\t\t\t\t\t\t\033[34m    \xC8\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBC\t\t\t \033[33m\xBa\n");
	printf("\t  \033[33m\xBA\t\t\t\t\t\t\t\t\t\t\t \033[33m\xBa\n");
	
	printf("\t  \033[33m\xC8\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBA Criado por: Joedyson Bezerra \xBa\xCD\xCD\xCD\xBC\n");
	printf("\n\n\t\t\t\t      \033[37m   \xC9\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBB\n");
	printf("\t\t\t\t         \033[37m\xBA   \033[37mSua escolha:\033[37m  \xBA\n");
	printf("\t\t\t\t      \033[37m   \xC8\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBC\n\033[32m");
	Alterar_Posicao(x,y);//alterar o cursor
	
	int valor;
	scanf("%d%*c", &valor);

	return(valor);

}

void Capturando_Cadastro(void){
	system("cls");
	int x,y;
	x = 30;
    y = 8;
		printf("\n\t\t\t\t\033[36m\xC9\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBB\n");
		printf("\t\t\t\t\033[36m\xBA\t    CADASTRAR PACIENTE\t  \t   \xBa\n");
		printf("\t\t\t\t\033[36m\xC8\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBC\n");
	FILE*arq_cadastro;
	ficha_de_paciente paciente;

		printf("\033[37m\n\n\t\t\t      Informe o nome do paciente: ");
		char cor[10] ="\033[36m";
		Campo_Dados(cor);
		
		Alterar_Posicao(x,y);//alterar o cursor
		scanf(" %s%*c", &paciente.nome);
		printf("\n");

		
		char*nome_do_arquivo = criando_nome_do_arquivo(paciente.nome);

		 // testando se o arquivo já existe para não sobrescrever
		arq_cadastro=fopen(nome_do_arquivo,"r");
		if(arq_cadastro){
			printf("Esse arquivo ja existe, abra o menu Modificar para poder editar ele\n");
			fclose(arq_cadastro);

		}else{//pegando os dados
			printf("\033[37m\n\n\t\t\t      Informe a idade do paciente:  ");
			Campo_Dados(cor);
		
			Alterar_Posicao(x,y+6);//alterar o cursor
			scanf("%d%*c", &paciente.idade);
			printf("\n");

			printf("\033[37m\n\n\t\t\t      Informe o identidade do paciente:  ");
			Campo_Dados(cor);
		
			Alterar_Posicao(x,y+12);//alterar o cursor
			scanf("%lu%*c", &paciente.identidade);
			printf("\n");

			printf("\033[37m\n\n\t\t\t      Informe o sexo do paciente:  ");
			Campo_Dados(cor);
		
			Alterar_Posicao(x,y+18);//alterar o cursor
			scanf(" %s%*c", &paciente.sexo);
			printf("\n");

			printf("\033[37m\n\n\t\t\t      Informe a data da realizacao do exame:  ");
			Campo_Dados(cor);
		
			Alterar_Posicao(x,y+24);//alterar o cursor
			scanf("%d%*c", &paciente.data_exame);
			printf("\n");

			printf("\033[37m\n\n\t\t\t      Informe a data de entrega do exame:  ");
			Campo_Dados(cor);
		
			Alterar_Posicao(x,y+30);//alterar o cursor
			scanf("%d%*c", &paciente.data_entrega);
			printf("\n");

			printf("\033[37m\n\n\t\t\t      Informe os exames:  ");
			Campo_Dados(cor);
		
			Alterar_Posicao(x,y+36);//alterar o cursor
			scanf(" %s%*c", &paciente.exames);
			printf("\n");
							
	}
			  				
		fclose(arq_cadastro);

		Cadastro_Arquivo(paciente.nome,paciente.idade,
		paciente.identidade,paciente.sexo,paciente.data_exame,
		paciente.data_entrega,paciente.exames,nome_do_arquivo,"w+");


} 

void Editar_Arquivo(void){
	system("cls");
	int x,y;
	x = 30;
    y = 8;
	printf("\n\t\t\t\t\033[35m\xC9\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBB\n");
		printf("\t\t\t\t\033[35m\xBA\t    EDITAR PACIENTE\t  \t   \xBa\n");
		printf("\t\t\t\t\033[35m\xC8\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBC\n");
	FILE*arq_editar;
	ficha_de_paciente paciente;
	char nome_paciente[50];
	int z;
				       	
		printf("\033[37m\n\n\t\t\t      Informe o nome do paciente: ");
		char cor[10] ="\033[35m";
		Campo_Dados(cor);
		
		Alterar_Posicao(x,y);//alterar o cursor
		scanf(" %s%*c", &nome_paciente);
		printf("\n");

		char*nome_do_arquivo_editar = criando_nome_do_arquivo(nome_paciente);
					  
					 //ler arquivo e escrita
		arq_editar=fopen(nome_do_arquivo_editar,"r");
		if(arq_editar == NULL){
			printf("\n\n\t\t\t\t\t    \xBA Esse usuario nao existe\xBa\n\n");
			fclose(arq_editar);

		}else{

		fscanf(arq_editar,"%s",&paciente.nome);
		printf("\033[37m\n\n\t\t\t      Valor atual do nome do paciente:\033[35m %s\n\n",paciente.nome);

		z=Editando();
					
		if(z==1){
			printf("\033[37m\n\n\t\t\t      Informe o nome editado do paciente:\n");
			Campo_Dados(cor);
		
			Alterar_Posicao(x,y+13);//alterar o cursor
			scanf(" %s%*c",&paciente.nome);
		}
					

		fscanf(arq_editar,"%d",&paciente.idade);
		printf("\033[37m\n\n\t\t\t      Valor atual da Idade do Paciente:\033[35m %d\n\n",paciente.idade);

		z=Editando();

		if(z==1){
			printf("\033[37m\n\n\t\t\t      Informe o idade editada do paciente:\n");
			Campo_Dados(cor);
		
			Alterar_Posicao(x,y+25);//alterar o cursor
			scanf("%d%*c",&paciente.idade);
		}

		fscanf(arq_editar,"%lu",&paciente.identidade);
		printf("\033[37m\n\n\t\t\t      Valor atual do identidade:\033[35m %lu\n\n",paciente.identidade);

		z=Editando();

		if(z==1){
			printf("\033[37m\n\n\t\t\t      Informe o identidade editado do paciente:\n");
			Campo_Dados(cor);
		
			Alterar_Posicao(x,y+37);//alterar o cursor
			scanf(" %lu%*c",&paciente.identidade);
		}

		fscanf(arq_editar,"%s",&paciente.sexo);
		printf("\033[37m\n\n\t\t\t      Valor atual do Sexo do paciente:\033[35m %s\n\n",paciente.sexo);

		z=Editando();

		if(z==1){
			printf("\033[37m\n\n\t\t\t      Informe o sexo editado do paciente:\n");
			Campo_Dados(cor);
		
			Alterar_Posicao(x,y+49);//alterar o cursor
			scanf(" %s%*c",&paciente.sexo);
		}

		fscanf(arq_editar,"%d",&paciente.data_exame);
		printf("\033[37m\n\n\t\t\t      Valor atual da Data de realizacao do exame:\033[35m %d\n\n",paciente.data_exame);

		z=Editando();

		if(z==1){
			printf("\033[37m\n\n\t\t\t      Informe a data de realizacao do exame editado do paciente:\033[35m\n");
			Campo_Dados(cor);
		
			Alterar_Posicao(x,y+61);//alterar o cursor
			scanf("%d%*c",&paciente.data_exame);
		}

		fscanf(arq_editar,"%d",&paciente.data_entrega);
		printf("\033[37m\n\n\t\t\t      Valor atual da Data de entrega do exame:\033[35m %d\n\n",paciente.data_entrega);

		z=Editando();

		if(z==1){
			printf("\033[37m\n\n\t\t\t      Informe a data de entrega do exame editado do paciente:\n");
			Campo_Dados(cor);
		
			Alterar_Posicao(x,y+73);//alterar o cursor
			scanf("%d%*c",&paciente.data_entrega);
		}

		fscanf(arq_editar,"%s",&paciente.exames);
		printf("\033[37m\n\n\t\t\t      Valor atual dos Exames realizados:\033[35m %s\n\n",paciente.exames);

		z=Editando();

		if(z==1){
			printf("\033[37m\n\n\t\t\t      Informe os exames editados do paciente:\n");
			Campo_Dados(cor);
		
			Alterar_Posicao(x,y+85);//alterar o cursor
			scanf("%s%*c",&paciente.exames);
		}

		fclose(arq_editar);//fecha o arquivo

		remove(nome_do_arquivo_editar); // remove o arquivo mesmo sem alterar nada

		char*nome_do_arquivo_novo = criando_nome_do_arquivo(paciente.nome);
					  
		//cria arquivo novo
		Cadastro_Arquivo(paciente.nome,paciente.idade,
		paciente.identidade,paciente.sexo,paciente.data_exame,
		paciente.data_entrega,paciente.exames,nome_do_arquivo_novo,"w");
		}

}

void Pesquisar_Arquivo(void){
	system("cls");
	int x,y;
	x = 30;
    y = 8;

		printf("\n\t\t\t\t\033[32m\xC9\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBB\n");
		printf("\t\t\t\t\033[32m\xBA\t    PESQUISAR PACIENTE\t  \t   \xBa\n");
		printf("\t\t\t\t\033[32m\xC8\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBC\n");
	
	FILE*arq_pesquisar;
	char nome_paciente[30];	
	ficha_de_paciente paciente;
				       	
		printf("\033[37m\n\n\t\t\t      Informe o nome do paciente: ");

		char cor[10] ="\033[32m";
		Campo_Dados(cor);
		
		Alterar_Posicao(x,y);//alterar o cursor

		scanf(" %s%*c", &nome_paciente);
		printf("\n");

		
		char*nome_do_arquivo_pesquisar = criando_nome_do_arquivo(nome_paciente);
					  
		//ler arquivo
		arq_pesquisar=fopen(nome_do_arquivo_pesquisar,"r");
		if(arq_pesquisar == NULL){
			printf("\n\n\t\t\t\t\t   \xBA Esse usuario nao existe \xBa\n\n");
			fclose(arq_pesquisar);

		}else{

		printf("\n\t\t\t\t\033[32m\xC9\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBB\n\n");
		
		fscanf(arq_pesquisar,"%s",&paciente.nome);
		printf("\t\t\t\t\t\033[37mNome do Paciente:\033[32m %s\n",paciente.nome);

		fscanf(arq_pesquisar,"%d",&paciente.idade);
		printf("\t\t\t\t\t\033[37mIdade do Paciente:\033[32m %d\n",paciente.idade);

		fscanf(arq_pesquisar,"%lu",&paciente.identidade);
		printf("\t\t\t\t\t\033[37mIdentidade:\033[32m %lu\n",paciente.identidade);

		fscanf(arq_pesquisar,"%s",&paciente.sexo);
		printf("\t\t\t\t\t\033[37mSexo do paciente:\033[32m %s\n",paciente.sexo);

		fscanf(arq_pesquisar,"%d",&paciente.data_exame);
		printf("\t\t\t\t\t\033[37mData de realizacao do exame:\033[32m %d\n",paciente.data_exame);

		fscanf(arq_pesquisar,"%d",&paciente.data_entrega);
		printf("\t\t\t\t\t\033[37mData de entrega do exame:\033[32m %d\n",paciente.data_entrega);

		fscanf(arq_pesquisar,"%s",&paciente.exames);
		printf("\t\t\t\t\t\033[37mExames realizados:\033[32m %s\n\n",paciente.exames);
		printf("\t\t\t\t\033[32m\xC8\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBC\n");
		
		fclose(arq_pesquisar);//fecha o arquivo
	}

}

void Excluir_Arquivo(void){
	system("cls");
	int x,y;
	x = 30;
    y = 8;
		printf("\n\t\t\t\t\033[31m\xC9\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBB\n");
		printf("\t\t\t\t\033[31m\xBA\t    EXCLUIR PACIENTE\t  \t   \xBa\n");
		printf("\t\t\t\t\033[31m\xC8\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBC\n");
	char nome_paciente[30];
	FILE*arq_excluir;

		printf("\033[37m\n\n\t\t\t      Informe o nome do paciente que voce queira excluir:\033[31m ");
		
	char cor[10] ="\033[31m";
		Campo_Dados(cor);
		
		Alterar_Posicao(x,y);//alterar o cursor

		scanf(" %s%*c", &nome_paciente);
		printf("\n");

		char*nome_do_arquivo_excluir = criando_nome_do_arquivo(nome_paciente);
		arq_excluir=fopen(nome_do_arquivo_excluir,"r");

		if(arq_excluir == NULL){
			printf("\n\n\t\t\t\t\t   \xBA Esse usuario nao existe \xBa\n\n");
			fclose(arq_excluir);

		}else{
			fclose(arq_excluir);

		remove(nome_do_arquivo_excluir);//excluir o arquivo
		printf("\n\n\t\t\t\t\t   \xBAPaciente Excluido \xBa\n\n");
	}

} 



void Cadastro_Arquivo(char nome[50], int idade,unsigned long  identidade,
    char sexo[20],int data_exame, int data_entrega,char exames[200],char nome_arquivo[100],
    char tipo[2]){

	FILE*arquivo;

		arquivo=fopen(nome_arquivo,tipo);
		fprintf(arquivo, "%s\n",nome);
		fprintf(arquivo, "%d\n",idade);
		fprintf(arquivo, "%lu\n",identidade);
		fprintf(arquivo, "%s\n",sexo);
		fprintf(arquivo, "%d\n",data_exame);
		fprintf(arquivo, "%d\n",data_entrega);
		fprintf(arquivo, "%s\n",exames);

		fclose(arquivo);

}

int Editando(void){
	int z;
		printf("\033[37mDeseja editar esse item?\033[32m (1)sim\033[31m (2)nao\n\033[37m Sua escolha: ");
		scanf("%d%*c",&z);
		return(z);
}

int Continua(char frase[30]){
	int x;
		printf("\033[37mDeseja continuar %s?\033[32m (1)Sim\033[31m (2)Nao\033[37m\nSua escolha: ",frase);
		scanf("%i%*c",&x);
		printf("\n\n");
		return(x);
}

char*criando_nome_do_arquivo(char nome[50]){
 	char endereco[100]= "D:\\projeto LP1\\pacientes\\";//concatenando destino com nome do paciente para se ter um arquivo unico
         strcat(endereco, nome);
         strcat(endereco, ".txt");

   char*nome_do_arquivo = (char*) malloc( (100 + 1) * sizeof(char));// alocando mémoria para não se perder dados, armazenar a string por completo
        strcpy(nome_do_arquivo,endereco);
        return nome_do_arquivo;
 }

 void Alterar_Posicao(int x, int y){ //mudança do cursor na tela

    HANDLE con;
    con = GetStdHandle(STD_OUTPUT_HANDLE);

    COORD pos;
    pos.X = x;
    pos.Y = y;
    SetConsoleCursorPosition(con,pos);
}
//criacao da moldura grafica 
void Campo_Dados(char cor[30]){
		printf("\n\t\t          \033[37m   \xC9\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBB\n");
		printf("\t\t             \033[37m\xBA\t\t\t\t\t\t\033[37m        \xBA\n");
		printf("\t\t          \033[37m   \xC8\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBC\n%s",cor);
}

