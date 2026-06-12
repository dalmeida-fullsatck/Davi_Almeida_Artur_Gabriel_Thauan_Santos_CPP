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
    
   cout << "BEM VINDO AO JOGO ITEAM_BET" << endl;
   cout << "JOGOS\n1- BRA X MAR\n2- BRA X ESC\n3- BRA X HAI\n";
   cout << "\n-------------------------------------------------\n";
   //jogo 1
   int equipe1,equipe2;
   //jogo 2
   int equipe3,equipe4;
   //jogo 3
   int equipe5, equipe6;


   int jogogol1 = 3;
   int jogogol2 = 0;
   int acertou, pontos = 0;
  
//JOGO 1<
   cout << "---- JOGO 1 -----\n BRA X MAR\n" << "Digite o palpite do time do BRA: " ;
       cin >> equipe1;


   if(equipe1 == jogogol1){
       acertou = 1;
       cout << "acertou " << acertou << "\n" ;
 
   cout << "\n---- JOGO 1 -----\n  BRA X MAR\n"<< "Digite o palpite do time do MAR: " ;
   cin >> equipe2;


   if(equipe2 == jogogol2 ){
       acertou=2;
   }


   else if(equipe1 > equipe2 && jogogol1 > jogogol2 ){
      pontos = pontos + 2;
   }
   else if(equipe1 < equipe2 && jogogol1 < jogogol2 ){
      pontos = pontos + 2;
   }
   else if(equipe1 == equipe2 && jogogol1 == jogogol2 ){
      pontos = pontos + 1;
   }
   else if(equipe1 < equipe2 && jogogol1 > jogogol2 ){
      pontos = 0;
   }
   else if(equipe1 > equipe2 && jogogol1 < jogogol2 ){
      pontos = 0;
   }    
   if(acertou == 2){
       pontos = pontos + 3;
   }else{
       cout << "\nPlacar incorreto!";
   }
   cout << "Pontuação do user: " << pontos << "\n";
}   
//JOGO 2




//     cout << "\n---- JOGO 2 -----\n BRA X 2- ESC\n"<< "Digite o palpite do time do BRA: " ;
//         cin >> gol3;


//         if(gol3 == jogogol1){
//         acertou = 1;
//         cout << "acertou " << acertou << "\n" ;
//     }
//     cout << "\n---- JOGO 2 -----\n- BRA X 2- ESC\n" << "Digite o palpite do time do ESC: " ;
//         cin >> gol4;
  
//         if(gol4 == jogogol2){
//         acertou = 2;
//         cout << "acertou " << acertou << "\n" ;
//         }


//         cout << "acertou " << acertou << "\n" ;
//     if(acertou == 2){
      
//     }else{
//         cout << "\nPlacar incorreto!";
//     }




// //JOGO 3
//     cout << "\n---- JOGO 3 -----\n BRA X HAI\n"<< "Digite o palpite do time do BRA: " ;
//         cin >> gol5;
//     cout << "\n---- JOGO 3 -----\n BRA X ESC\n"<< "Digite o palpite do time do HAI: " ;
//         cin >> gol6;


}


