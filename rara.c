#include <stdio.h>
#include <stdlib.h>
#include <math.h> // sqrt function

#define MAX 20 /* La taille maximale d'un tableau comme constante*/

// Une fonction pour afficher les elements d'un tableau de taille 'length' introduit par le programmeur
void afficher_tableau(int a[], size_t length){int i; for(i=0;i<length;i++){printf("%d ",a[i]);}}


void solution(int Tab[], int N)
{
   // You can add any variable you need here
     // Tab est le tableau
     // N est la dimension du tableau
     int i,j; //les compteur

   // Your code goes here



   // ⬇️⬇️⬇️⬇️⬇️⬇️⬇️⬇️⬇️⬇️⬇️⬇️⬇️⬇️⬇️⬇️⬇️ Messages de sortie - Affichage ⬇️⬇️⬇️⬇️⬇️⬇️⬇️⬇️⬇️⬇️⬇️⬇️⬇️⬇️⬇️⬇️⬇️
   // afficher_tableau(Tab, N); // vous pouvez modifier la variable N en fonction de votre solution
   // ⬆️⬆️⬆️⬆️⬆️⬆️⬆️⬆️⬆️⬆️⬆️⬆️⬆️⬆️⬆️⬆️⬆️ Messages de sortie - Affichage ⬆️⬆️⬆️⬆️⬆️⬆️⬆️⬆️⬆️⬆️⬆️⬆️⬆️⬆️⬆️⬆️⬆️

}

// ⬇️⬇️⬇️⬇️⬇️⬇️⬇️⬇️⬇️⬇️⬇️⬇️⬇️⬇️⬇️⬇️⬇️ Input: do not change this part ⬇️⬇️⬇️⬇️⬇️⬇️⬇️⬇️⬇️⬇️⬇️⬇️⬇️⬇️⬇️⬇️⬇️
int main(int argc,char* argv[]) {

    // Declarations - vous pouvez ajouter plus de variables sans modifier celles existantes
    int N,i,j; //i est le compteur
    int Tab[MAX]; // Tab est le tableau

     if (argc >= 2)
     {
          N = atoi(argv[1]);
          for(j=0, i=2; i<N+2; j++, i++){Tab[j] = atoi(argv[i]);}  
     } 
     else 
     {
          printf("Introduire la dimension du tableau (MAX 20): ");
          scanf("%d",&N);

          // Une boucle 'pour' pour remplir un tableau de taille N
          for(i=0; i<N; i++)  
          {  
               printf("Donner l'element %d: ",i+1);
               scanf("%d", &Tab[i]);  
          }  
     }

     solution(Tab, N);
     return 0;
}
// ⬆️⬆️⬆️⬆️⬆️⬆️⬆️⬆️⬆️⬆️⬆️⬆️⬆️⬆️⬆️⬆️⬆️ Input: do not change this part ⬆️⬆️⬆️⬆️⬆️⬆️⬆️⬆️⬆️⬆️⬆️⬆️⬆️⬆️⬆️⬆️⬆️
