#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Definer tre forskellige enumeration typer for hhv. forret, hovedret og dessert
//Enumeration typen forret skal indholde værdier for guacamole, tarteletter, lakserulle og græskarsuppe.
//Enumeration typen hovedret skal indholde værdier for gyldenkål, hakkebøf, gullash og forloren hare.
//Enumeration typen dessert skal indholde værdier for pandekager med is, gulerodskage, choklademousse, og citronfromage.

typedef enum {guacamole, tarteletter, lakseruller, graeskarsuppe} forret;
typedef enum {gyldenkaal, hakkeboef, gullash, forloenHare} hovedret;
typedef enum {pandekagerMedIs, gulerodskage, chokolademousse, citronfromage} desert;

//Sætter pseudo-RNG igang i programmet. Bruger antal sek fra Jan 1 1970 som seed.

void maaltid(forret *fr, hovedret *hr, desert *dt);
void rnGen(forret *fr, hovedret *hr, desert *dr);
void genForret(forret *fr);
void genHovedret(hovedret *hr);
void genDesert(desert *dt);

//Kald funktionen maaltid 25 gange i main, med det formål at få genereret et menukort af 25 kombinationer af forret, hovedret og dessert.

int main(void){

    //Sætter pseudo-RNG igang i programmet. Bruger antal sek fra Jan 1 1970 som seed.

    srand(time(NULL));
    forret fr;
    hovedret hr;
    desert dt;

    for (int menuNr = 0; menuNr < 25; menuNr++)
    {
       maaltid(&fr, &hr, &dt);
    }
    
    return 0;
}

//Skriv en funktion maaltid, som vælger og udskriver én tilfældig ret i hver af de tre kategorier.

void maaltid(forret *fr, hovedret *hr, desert *dt){

    rnGen(fr, hr, dt);
    genForret(fr);
    genHovedret(hr);
    genDesert(dt);

}

void rnGen(forret *fr, hovedret *hr, desert *dt){

   *fr = rand() % 4;
   *hr = rand() % 4;
   *dt = rand() % 4;

}



void genForret(forret *fr){
    switch (*fr)
    {
    case guacamole:
        
        printf("Guacamole, ");
        break;

    case tarteletter:
        
        printf("Tarteletter, ");
        break;

    case lakseruller:
        
        printf("Lakseruller, ");
        break;

    case graeskarsuppe:
        
        printf("Graeskarsuppe, ");
        break;
    
    default:
        break;
    }
}

void genHovedret(hovedret *hr){
    switch (*hr)
    {
    case gyldenkaal:
        
        printf("Gyldenkål ");
        break;

    case hakkeboef:
        
        printf("Hakkebøf ");
        break;

    case gullash:
        
        printf("Gullash ");
        break;

    case forloenHare:
        
        printf("Forloen Hare ");
        break;
    
    default:
        break;
    }
}

void genDesert(desert *dt){
    switch (*dt)
    {
    case pandekagerMedIs:
        
        printf("og Pandekager med Is\n\n");
        break;

    case gulerodskage:
        
        printf("og Gulerodskage\n\n");
        break;

    case chokolademousse:
        
        printf("og Gulerodskage\n\n");
        break;

    case citronfromage:
        
        printf("og Citronfromage\n\n");
        break;
    
    default:
        break;
    }
}