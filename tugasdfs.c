#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define maks 5

struct Vertex
{
    char label;
    bool done;
};

int stack[maks];
int top = -1;

struct Vertex *lstVertices[maks];
int adjMatriks[maks][maks];
int vertexCount = 0;

void push(int data)
{
    stack[++top] = data;
}

int pop()
{
    return stack[top--];
}

bool stackempty()
{
    return top == -1;
}

void tambahv(char label)
{
    struct Vertex *vertex = (struct Vertex *)malloc(sizeof(struct Vertex));
    vertex->label = label;
    vertex->done = false;
    lstVertices[vertexCount++] = vertex;
}

void tambahe(int start, int end)
{
    adjMatriks[start][end] = 1;
}

void showV(int vertexIndex)
{
    printf("%c ", lstVertices[vertexIndex]->label);
}

int getAdjUndoneVertex(int vertexIndex)
{
    int i;
    for (i = 0; i < vertexCount; i++)
    {
        if (adjMatriks[vertexIndex][i] == 1 && lstVertices[i]->done == false)
            return i;
    }
    return -1;
}

void depthFirstSearch()
{
    int i;

    lstVertices[0]->done = true;
    showV(0);
    push(0);

    while (!stackempty())
    {
        int currentVertex = pop();
        int undoneVertex;

        while ((undoneVertex = getAdjUndoneVertex(currentVertex)) != -1)
        {
            lstVertices[undoneVertex]->done = true;
            showV(undoneVertex);
            push(currentVertex);
            push(undoneVertex);
            currentVertex = undoneVertex;
        }
    }

    for (i = 0; i < vertexCount; i++)
    {
        lstVertices[i]->done = false;
    }
}

int main()
{
    int i, j;

    for (i = 0; i < maks; i++)
    {
        for (j = 0; j < maks; j++)
            adjMatriks[i][j] = 0;
    }

    tambahv('1');
    tambahv('2');
    tambahv('3');
    tambahv('4');
    tambahv('5');
    tambahv('6');
    tambahv('7');

    tambahe(0, 1);
    tambahe(0, 2);
    tambahe(1, 3);
    tambahe(2, 4);
    tambahe(2, 5);
    tambahe(2, 6);

    printf("\n Depth First Search (DFS): ");
    depthFirstSearch();

    return 0;
}