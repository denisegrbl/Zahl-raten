/**********************************************************************\
* Kurzbeschreibung: Uebung: 17.1; Punkte: 0
*
* Datum:       Autor:           Grund der Aenderung:
* 10.05.2021   Denise Griebel   Neuerstellung
\**********************************************************************/
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/*--- Funktionsdefinitionen ------------------------------------------*/
int main( void )
{
    char c;
    int intervall = -1,i = 1,zahl,meineZahl;

    printf("Ich denke mir eine Zahl aus dem Intervall [1,x].\n");
    printf("Du musst dann versuchen, diese Zahl zu erraten.\n");
    printf("\nZunaechst muss du einmal festlegen,wie gross die zu\n");
    printf("ratende Zahl maximal sein darf:");
    scanf("%d", &intervall);

    while( intervall <= 0)
    {
        while ((c = getchar()) != '\n' && c != EOF)
        {
        }
        printf("\nVersuchen Sie es nochmal:");
        scanf("%d", &intervall);

    }

    srand(time(NULL));
    meineZahl = (rand() % (intervall + 1));
    printf("\nHmmm..... OK, ich habe eine Zahl\n");
    printf("\nDein %d. Versuch:",i);
    scanf("%d", &zahl);
    do
        {

            while((c = getchar()) != '\n' && c != EOF)
            {
                printf("\nDein %d. Versuch:",i);
                scanf("%d", &zahl);
                continue;
            }

            if(zahl == meineZahl)
            {
                printf("                     .....Richtig");
            }
            if(zahl>meineZahl)
            {
                printf("                     .....zu hoch");
            }
            if(zahl<meineZahl)
            {
                printf("                     .....zu niedrig");
            }
            i++;
            printf("\nDein %d. Versuch:",i);
            scanf("%d", &zahl);
        } while(zahl != meineZahl);

    printf("\n\nDu hast %d Versuche zum Erraten der Zahl benoetigt",i);

    return 0;
}
