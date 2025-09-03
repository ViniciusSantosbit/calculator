#include <stdio.h>
int main (){
    int mat;
    char nome [50];
    char turma [50];
    char disci [50];
    printf("Disciplina: ");
    scanf("%s" , disci);
    printf("Turma: ");
    scanf("%s" , turma);
    printf("Nome: ");
    scanf("%s" , nome);
    printf("Matricula: ");
    scanf("%d" , &mat);

    float peso, altura, imc;

    printf("Qual o seu peso? (Kg) \n");
    scanf("%f" , &peso);

    printf("Qual sua altura? (Cm) \n");
    scanf("%f" , &altura);
    altura = altura/100;
    imc = peso / (altura * altura);

    printf("O seu IMC é %.2f " , imc);

    if (imc <= 18.5){
        printf("Abaixo do peso! \n");
    }   else if (imc <= 25.5){
        printf("Peso normal (Ideal) \n");
    }   else if (imc <= 29.5){
        printf("Sobrepeso \n");
    }   else if(imc <= 34.9){
        printf("Obesidade grau I");
    }   else if (imc <= 39.9){
        printf("Obesidade grau II(Severa)");
    }   else{
        printf("Obesidade grau III(mórbida)");
    }    
    
        int dias;
        printf("Digite que dia da semana voce quer sua consulta: \n");
        scanf("%d" , &dias);
        switch (dias){
            case 1:
                printf("Consulta marcada Domingo!");
                break;
            case 2:
                printf("Consulta marcada Segunda-feira!");
                break;
            case 3:
                printf("Consulta marcada Terça-feira!");
                break;
            case 4:
                printf("Consulta marcada Quarta-feira!");
                break;
            case 5:
                printf("Consulta marcada Quinta-feira!");
                break;
            case 6:
                printf("Consulta marcada Sexta-feira!");
                break;
            case 7:
                printf("Consulta marcada Sabado!");
                break;
            default:
                printf("Dia inexistente!");
                break;
        }
            return 0;

}








