#include <stdio.h>
#include <iomanip> 
#include <stdlib.h> 
#include <unistd.h> 
#include <iostream>
#include <math.h>
#include <windows.h>
using namespace std;

void tabela (string imc2){
		cout << "\n Tabela IMC Masculina \n Magreza 17.5 \n Normal	17.5 a 25 \n Sobrepeso 25 a 28.6 \n Obesidade 28.6" 
		"\n \n Tabela IMC Feminina \n Magreza 16.7 \n Normal	16.7 a 24.9 \n Sobrepeso 24.9 a 28.9 \n Obesidade 28.9 \n";
	}
int main(){
	setlocale(LC_ALL, "Portuguese");
	float peso,altura,idade,sexo2,sexo3,sexo,imc,imc1;
	string imc2, pescoco, cintura;
	
	
	cout << "Digite seu peso em kg e sua altura em metros \n";
	cout << "Peso: ";
	cin >> peso;
	cout << "Altura: ";
	cin >> altura;
	cout << "Sexo \n use 1 para masculino ou 0 para feminino: ";
	cin >> sexo;
	
	imc = peso/(altura*altura);
	imc1 = peso/(altura*altura);
	
	cout  << "\n Seu imc: " << imc1 << "\n";
	
	tabela(imc2);
	
	cout << "\n Digite as medidas em centimetros  \n";
	cout << "\n cintura: ";
	cin >> cintura;
	cout << "pescoço: ";
	cin >> pescoco;
	cout << "E por fím sua idade:";
	cin >> idade;
float bf;
bf = (1.2 * imc) - (10.8 * sexo) + (0.23 * idade) - (5.4* 1000.1)/ pow(25.5,2);

cout <<"Seu percentual de gordura está proximo de " << bf << "%";	

int sec = 0; /* segundos */
	int ter = 0; /* minutos */
	int desc = 0;/* descanso*/
	int iniciador = 0;
	int prep = 10;
	int trab = 30;
	int i = 0; /* loop */
	int ex;
	
cout << "\nDeseja iniciar um treino básico, composto por flexões e"
" agachamentos? Se sim digite 1 se não digite qualquer outro caractere:";
cin >> ex;
 
 switch(ex){
  case 1: cout << "\nFique em posição de flexão\n";
	do{			
		cout << "\r" << sec;
		if(desc==0){
		if(sec==prep){
			sec=0;
			desc++;
			cout << "\nInicie os movimentos durante 30s\n";	
		}
		}
		if(desc==1){
			if(sec==trab){
				sec=0;
				desc++;
				cout << "\nFique em posição de agachamento\n";
			}
		}
		
		if(desc==2){
		if(sec==prep){
			sec=0;
			desc++;
			cout << "\nInicie os movimentos durante 30s\n";
		}
		}
		if(desc==3){
			if(sec==trab){
				sec=0;
				desc=0;
				iniciador++;
				cout << "\nFique em posição de flexão\n";
			}
		}		
		if(iniciador==4){
			i++;
		}
		Sleep(1000);
		sec++;
		
	}while(i==0);
		

	
	break;
	default: cout << "Que pena!";
}
	
return 0;
}

