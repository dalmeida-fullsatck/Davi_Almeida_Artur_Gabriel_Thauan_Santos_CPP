#include <iostream>
#include <string>
#include <locale>
using namespace std;

int calcularPontos(int gols1_real, int gols2_real, int gols1_aposta, int gols2_aposta ){
    
    if(gols1_real == gols1_aposta && gols2_real == gols2_aposta){
        return 4;
    }
    bool real_empate = (gols1_real == gols2_real);
    bool aposta_empate = (gols1_aposta == gols2_aposta);
    if(real_empate == aposta_empate){
        return 2;
    }
    if ((gols1_real > gols2_real && gols1_aposta > gols2_aposta) ||
        (gols1_real < gols2_real && gols1_aposta < gols2_aposta)) {
        return 3;
    }
    return 0;
}


int main(){
    locale::global(std::locale("pt_BR.utf8"));
    locale::global(std::locale(""));
    const int num_jogos = 4;
    const int max_apostadores = 3;
    
    cout << "BEM VINDO AO JOGO DE APOSTA ITEAM_BET" << endl;
    cout << "\n-------------------MENU-------------------\n" << endl;
    cout << "JOGOS\n1- BRA X MAR\n2- BRA X ESC\n3- BRA X HAI\n";
    cout << "\n-------------------------------------------------\n";
   //jogo 1
    int equipe1,equipe2;
   //jogo 2
    int equipe3,equipe4;
   //jogo 3
    int equipe5, equipe6;
    int total_ap1= 0, total_ap2, total_ap3;
    int num_apostadores;
    do{
    cout << "Quantos apostadores serão? (máx 3): "; cin >> num_apostadores; 
    }while (num_apostadores < 1 || num_apostadores >3);

    if(num_apostadores>=1){
//JOGO 1
        cout << "\nAPOSTADOR 1\n";
        cout << "---- JOGO 1 -----\n BRA X MAR\n" << "Digite o palpite do time do BRA: ";cin >> equipe1;
        cout << "\n---- JOGO 1 -----\n  BRA X MAR\n"<< "Digite o palpite do time do MAR: ";cin >> equipe2;
//JOGO 2
        cout << "\nAPOSTADOR 1\n";
        cout << "---- JOGO 2 -----\n BRA X ESC\n" << "Digite o palpite do time do BRA: ";cin >> equipe3;
        cout << "\n---- JOGO 2 -----\n  BRA X ESC\n"<< "Digite o palpite do time da ESC: " ;cin >> equipe4;
//JOGO 3
        cout << "\nAPOSTADOR 1\n";
        cout << "---- JOGO 3 -----\n BRA X HAI\n" << "Digite o palpite do time do BRA: ";cin >> equipe5;
        cout << "\n---- JOGO 3 -----\n  BRA X HAI\n"<< "Digite o palpite do time do HAI: ";cin >> equipe6;
        total_ap1 = calcularPontos(3, 0, equipe1, equipe2)+
                    calcularPontos(4, 1, equipe3, equipe4)+
                    calcularPontos(5, 1, equipe5, equipe6);
    }

    if(num_apostadores>=2){
//JOGO 1
        cout << "\nAPOSTADOR 2\n";
        cout << "---- JOGO 1 -----\n BRA X MAR\n" << "Digite o palpite do time do BRA: ";cin >> equipe1;
        cout << "\n---- JOGO 1 -----\n  BRA X MAR\n"<< "Digite o palpite do time do MAR: ";cin >> equipe2;
//JOGO 2
        cout << "\nAPOSTADOR 2\n";
        cout << "---- JOGO 2 -----\n BRA X ESC\n" << "Digite o palpite do time do BRA: ";cin >> equipe3;
        cout << "\n---- JOGO 2 -----\n  BRA X ESC\n"<< "Digite o palpite do time da ESC: " ;cin >> equipe4;
//JOGO 3
        cout << "\nAPOSTADOR 2\n";
        cout << "---- JOGO 3 -----\n BRA X HAI\n" << "Digite o palpite do time do BRA: ";cin >> equipe5;
        cout << "\n---- JOGO 3 -----\n  BRA X HAI\n"<< "Digite o palpite do time do HAI: ";cin >> equipe6;
        total_ap2 = calcularPontos(3, 0, equipe1, equipe2)+
                    calcularPontos(4, 1, equipe3, equipe4)+
                    calcularPontos(5, 1, equipe5, equipe6);
    }
    if(num_apostadores>=3){
//JOGO 1
        cout << "\nAPOSTADOR 3\n";
        cout << "---- JOGO 1 -----\n BRA X MAR\n" << "Digite o palpite do time do BRA: ";cin >> equipe1;
        cout << "\n---- JOGO 1 -----\n  BRA X MAR\n"<< "Digite o palpite do time do MAR: ";cin >> equipe2;
//JOGO 2
        cout << "\nAPOSTADOR 3\n";
        cout << "---- JOGO 2 -----\n BRA X ESC\n" << "Digite o palpite do time do BRA: ";cin >> equipe3;
        cout << "\n---- JOGO 2 -----\n  BRA X ESC\n"<< "Digite o palpite do time da ESC: " ;cin >> equipe4;
//JOGO 3
        cout << "\nAPOSTADOR 3\n";
        cout << "---- JOGO 3 -----\n BRA X HAI\n" << "Digite o palpite do time do BRA: ";cin >> equipe5;
        cout << "\n---- JOGO 3 -----\n  BRA X HAI\n"<< "Digite o palpite do time do HAI: ";cin >> equipe6;
        total_ap3 = calcularPontos(3, 0, equipe1, equipe2)+
                    calcularPontos(4, 1, equipe3, equipe4)+
                    calcularPontos(5, 1, equipe5, equipe6);
    }


  if(num_apostadores>=1) cout << "Pontuação do apostador 1: -  " << total_ap1 << "\n";
  if(num_apostadores>=2) cout << "Pontuação do apostador 2: -  " << total_ap2 << "\n";
  if(num_apostadores>=3) cout << "Pontuação do apostador 3: -  " << total_ap3 << "\n";
}   


