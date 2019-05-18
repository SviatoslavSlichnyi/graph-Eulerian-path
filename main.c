#include <stdio.h>
#include "graph.c"
#include "search_Euler.c"


int main()
{
    GRAPH graph;

    //choose the way to get info
    int ch;
    do {
        system("cls");
        puts("\tMenu");
        puts("1 - keyboard");
        puts("2 - file");
        printf("Your choice: ");
        scanf("%d", &ch);
        fflush(stdin);
    } while(ch != 1 && ch != 2);
    puts("");

    //getting data
    if(ch == 1)
        readGraphKeyboard(&graph, 0);
    else
        readGraphFile(&graph, 0);
    //setGraph(&graph, 0);
    //setHardWay(&graph, 0);

    //print into console info about nodes
    printGraph(&graph);

    //search Eulerian path
    startSearch(&graph, 0);

    //clear dynamic memory
    clearGraph(&graph);

    puts("");
    system("pause");
    return 0;
}