#include<string.h>
#include<stdio.h>
#define TAM 100 // se incremento


typedef struct TArt{

  char nombre[TAM];
	int id;
  double clave;

}TArt;
int LeerArchivo(int conti);
int Contador();
int MostrarMenu();

int main(void){
  int Opcion = 0;
  Opcion = MostrarMenu();
  // aqui pondria un if y lo compararia por opciones
  // ex. if(Opcion == 1) // entonces llamo el contador
  Contador();
  // LeerArchivo();
  return 0;
}

int MostrarMenu(){
  // printf("Menu");
  // Logica para seleccionar una opcion del menu
  // y retornar el valor elegido
  return 1;
}

int Contador(){

    /*******************************************************************************/
    /* char temp[10];                                                              */
    /* int cont=0;                                                                 */
    /* FILE *pf;                                                                   */
    /* pf = fopen("entry_file.txt","r");                                           */
    /*                                                                             */
    /* if(pf == NULL){                                                             */
    /*     printf("No se ha podido abrir archivo.\n");                             */
    /* }                                                                           */
    /* else{                                                                       */
    /*     while(!feof(pf)){                                                       */
    /*                                                                             */
    /*       //--- fgets(temp,50,pf); // que pedo si no hay 50 letras?             */
    /*         // el fgets trae 50 letras pero tmp variable solo tiene 10 espacios */
    /*                                                                             */
    /*         fgets(temp,10,pf); // que pedo si no hay 50 letras?                 */
    /*         // fgets lee un numero fijo de caracteres, de 4 en 4 o de n en n    */
    /*         // pero dentro de                                                   */
    /*         cont++;                                                             */
    /*     }                                                                       */
    /*     rewind(pf);                                                             */
    /*     printf("El contador es: %d",cont);                                      */
    /*     fclose(pf);                                                             */
    /* }                                                                           */
    /* return(cont);                                                               */
    /*******************************************************************************/


  FILE *pf, *longitud;
    char ch;
    TArt temp;
    int cont = 0;
    int campo = 0;

    pf = fopen("entry_file.txt","r");
    longitud = fopen("longitud.txt", "w+");

    if(pf == NULL){
      printf("No se ha podido abrir archivo.\n");
    }
    while((ch = fgetc(pf)) != EOF){
      // printf("%c", ch);
      cont++;
      if(ch == 32 || ch == 10) {
        campo++;
        printf("%d: campo%d ", cont-1, campo);
        fprintf(longitud, "%d: campo%d ", cont-1, campo);
        cont = 0;
      }
      if(ch == 10) {
        campo = 0;
        printf("\n");
        fprintf(longitud, "\n");
      }
    }

    fclose(pf);
    return 0;
}

int LeerArchivo(int conti){
//Variables
  // letb a[conti];
    FILE *pf1;

    int i=0;

    if((pf1=fopen("binario.txt","r"))==NULL){
        printf("No se pudo leer el archivo.\n");
    }
    else{
        printf("\nLEIDO DE ARCHIVO:\n");

        while(!feof(pf1)){
            for(i=0;i<=conti-1;i++){
              //           fscanf(pf1,"%s %d", a[i].let, a[i].bin);
        }

        }
        fclose(pf1);
    }
}
