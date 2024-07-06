#ifndef STRUCTS_H
#define STRUCTS_H

#include <stddef.h>

typedef struct Node_Dqueue
{
    void *data;
    struct Node_Dqueue *next;
    struct Node_Dqueue *prev;
} Node_Dqueue;

typedef struct Dqueue
{
    size_t size;
    size_t len;
    Node_Dqueue *head;
    Node_Dqueue *tail;
} Queue;

typedef Node_Dqueue * Iter_Dqueue;

#endif // STRUCTS_H