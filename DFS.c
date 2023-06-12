#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define MAX 5

struct Vertex
{
    char Tanda;
    bool Diperiksa;
};

int stack[MAX];
int top = -1;
struct Vertex *lstVertices[MAX];
int adjMatrix[MAX][MAX];
int vertexCount = 0;

// stack functions
void push(int item)
{
    stack[++top] = item;
}

int pop()
{
    return stack[top--];
}

bool isStackEmpty()
{
    return top == -1;
}
void Tambah_Simpul(char Tanda)
{
    struct Vertex *vertex = (struct Vertex *)malloc(sizeof(struct Vertex));
    vertex->Tanda = Tanda;
    vertex->Diperiksa = false;
    lstVertices[vertexCount++] = vertex;
}

void Tambah_Sisi(int start, int end)
{
    adjMatrix[start][end] = 1;
    adjMatrix[end][start] = 1;
}

void Tampilkan_vertex(int vertexIndex)
{
    printf("%c ", lstVertices[vertexIndex]->Tanda);
}

int Periksa_Vertex(int vertexIndex)
{
    int i;
    for (i = 0; i < vertexCount; i++)
    {
        if (adjMatrix[vertexIndex][i] == 1 && !lstVertices[i]->Diperiksa)
            return i;
    }
    return -1;
}

void depthFirstSearch()
{
    int i;
    lstVertices[0]->Diperiksa = true;
    Tampilkan_vertex(0);
    push(0);

    while (!isStackEmpty())
    {
        int unDiperiksaVertex = Periksa_Vertex(stack[top]);
        if (unDiperiksaVertex == -1)
        {
            pop();
        }
        else
        {
            lstVertices[unDiperiksaVertex]->Diperiksa = true;
            Tampilkan_vertex(unDiperiksaVertex);
            push(unDiperiksaVertex);
        }
    }

    for (i = 0; i < vertexCount; i++)
    {
        lstVertices[i]->Diperiksa = false;
    }
}

int main()
{
    int i, j;
    for (i = 0; i < MAX; i++)
    {
        for (j = 0; j < MAX; j++)
        {
            adjMatrix[i][j] = 0;
        }
    }

    Tambah_Simpul('S'); // 0
    Tambah_Simpul('A'); // 1
    Tambah_Simpul('B'); // 2
    Tambah_Simpul('C'); // 3
    Tambah_Simpul('D'); // 4

    Tambah_Sisi(0, 1); // S - A
    Tambah_Sisi(0, 2); // S - B
    Tambah_Sisi(0, 3); // S - C
    Tambah_Sisi(1, 4); // A - D
    Tambah_Sisi(2, 4); // B - D
    Tambah_Sisi(3, 4); // C - D

    printf("\n Hasil Depth First Search: ");
    depthFirstSearch();

    return 0;
}
