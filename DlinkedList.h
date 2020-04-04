#ifndef DLINKEDLIST_H_
#define DLINKEDLIST_H_

int ClientNo ;

struct client
{
    int data;
    struct client * pPrev;
    struct client * pNext;
}*pHead,*pTail;


struct client* createClient(int data);

int addClient(int data);
int deletenode(index);

int insertClient(int data, int index);

#endif // DLINKEDLIST_H_INCLUDED
