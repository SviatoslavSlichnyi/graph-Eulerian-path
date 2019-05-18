#ifndef GRAPHS_GRAPH_H
#define GRAPHS_GRAPH_H

//list of edges
typedef struct edgenode {
    int y;
    _Bool discovered;
    struct edgenode *next;
} EDGENODE;

//info about graph
typedef struct graph {
    struct edgenode** edges;
    int* degree;
    int nNodes;
    int nEdges;
} GRAPH;

//initialize some variables
void initializeGraph(GRAPH* , _Bool , int , int);
//get information about graph from keyboard input
void readGraphKeyboard(GRAPH*, _Bool);
//get information about graph from file stream
void readGraphFile(GRAPH*, _Bool);
//add edge to list
void insertEdge(GRAPH*, int, int, _Bool);
//print into console info about nodes
void printGraph(GRAPH*);
//clear dynamic memory
void clearGraph(GRAPH* graph);

#endif //GRAPHS_GRAPH_H
