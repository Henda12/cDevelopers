#include <stdio.h>

void theMainMenu() {
    printf("1 - Disciplinas\n"
           "2 - Calendario \n"
           "0 - Sair !\n");
}
void theFirstMenuOfGrads() {
    printf("1 - Recursos Gerais\n"
           "2 - LP1\n"
           "3 - AED\n"
           "4 - Matematica II\n"
           "5 - Algebra Linear\n"
           "6 - Arq. Computadores\n"
           "7 - Comp Compormentais \n"
           "0 - Sair \n");
}
void menuInGrads(){
    printf("1 - Anuncios\n"
           "2 - Aulas Teoricas\n"
           "3 - Aulas Praticas\n"
           "4 - Notas Exames \n"
           "0 - Sair \n");
}
void theFirstMenuOfCalendars(){
    printf("1 - Fevereiro \n"
           "2 - Marco \n"
           "3 - Abril \n"
           "4 - Maio\n"
           "5 - Junho\n"
           "6 - Julho  \n"
           "0 - Sair \n");
}

int main() {
    theFirstMenuOfCalendars();
    return 0;
}
