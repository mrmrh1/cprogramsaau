#include <stdio.h>
#include <math.h>

void scanData(double *userOperandInput, char *userOperatorInput);
void doNextOp(double *userOperandInput,char *userOperatorInput ,double *accumulator);
void runCalculator(double *userOperandInput,char *userOperatorInput ,double *accumulator);
int binaryOperatorCheck(char *userOperatorInput);

/*Navn: Max Anders Ranert-Hansen

Email: marh23@student.aau.dk

Gruppe: Gruppe 1

Studieretning: CCT

*/

/* Main funktion. 3 variable init, og mens operatoren ikke er q, så kører programmet.*/

int main(void){

    double accumulator = 0, userOperandInput = 0;
    char userOperatorInput = 'i';

    while (userOperatorInput != 'q')
    {
        runCalculator(&userOperandInput, &userOperatorInput, &accumulator);
    }
  
  return 0;
}

/* runCalculator er funktionen der kører i main, som indkaplser de 2 funktioner scandata og donextop. */

void runCalculator(double *userOperandInput, char *userOperatorInput, double *accumulator){

    scanData(userOperandInput,userOperatorInput);
    doNextOp(userOperandInput,userOperatorInput ,accumulator);
}

/* scanData scanner brugerens input til operatoren og operanden. der er en funktion binaryoperatorcheck, der tjekker hvis operatoren er binær. hvis operatoren er binær, så prompter den også brugeren for en operand.*/


void scanData(double *userOperandInput, char *userOperatorInput){
    printf("Enter Operator:\n");
    scanf(" %c", &*userOperatorInput);
    if (binaryOperatorCheck(userOperatorInput) == 1){
        printf("Enter Operand:\n");
        scanf(" %lf", userOperandInput);
    }
    else{
       *userOperandInput = 0;
    }
    

}

/* binaryOperatorCheck tjekker hvis userOperatorInput er binær. hvis ja, så returnerer den 1, ellers 0. */

int binaryOperatorCheck(char *userOperatorInput){

    if (*userOperatorInput == '+' || *userOperatorInput == '-' || *userOperatorInput == '*' || *userOperatorInput == '/' || *userOperatorInput == '^'){
        
        return 1;
    } 
    else {
        return 0;
    }
}

// doNextOp udregner matematikken udfra brugerens input

void doNextOp(double *userOperandInput,char *userOperatorInput ,double *accumulator){

    switch (*userOperatorInput){
    
    case '+':
        *accumulator = *accumulator + *userOperandInput;
        break;

    case '-':
        *accumulator = *accumulator - *userOperandInput;
        break;
    
    case '*':
        *accumulator = *accumulator * *userOperandInput;
        break;

    case '/':
        if (*userOperandInput == 0){
            break;
        } 
        else{
            *accumulator = *accumulator / *userOperandInput;
            break;
        }

    case '^':
        *accumulator = pow(*accumulator, *userOperandInput);
        break;

    case '#':
        if (*accumulator < 0){
            break;
        } 
        else{
            *accumulator = sqrt(*accumulator);
            break;
        }

    case '%':
        *accumulator = -(*accumulator);
        break;

    case '!':
        *accumulator = 1 / *accumulator;
        break;

    case 'q':
        printf("The final value is %lf\n", *accumulator);
        break;

    default:
        break;
    }
    if(*userOperatorInput!='q'){
    printf("Current accumulator value: %lf\n", *accumulator);
    }

}