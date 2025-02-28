#include <stdio.h>

typedef struct node {
	int data;
	struct node* next;
}Node;

Node* initList() {
	Node* head = (Node*)malloc(sizeof(Node));
	head->data = 0;
	head->next = NULL;
	return head;
}

 int headInsert(Node* L,int e) {
	 Node* p = (Node*)malloc(sizeof(Node));
	 p->data = e;
	 p->next = L->next;
	 L->next = p;
	 return 1;
}

 Node* Gettail(Node* L) {
	 Node* p = L;
	 while (p->next != NULL)
		 p = p->next;
	 return p;
 }

 int TailInsert(Node* L, int e) {
	    Node* p = Gettail(L);
		Node* q = (Node*)malloc(sizeof(Node));
		q->data = e;
		q->next = NULL;
		p->next = q;
		return 1;
 }

 int GetLen(Node* L) {
	 int count = 1;
	 Node* q = L;
	 while (q->next != NULL) {
		 q= q->next;
		 count++;
	 }
	 return count;
 }

 int Inset(Node* L, int o, int e) {
	 Node* q = L;
	 if (o <= 1 || o > GetLen(L)){
		 return 0;
	 }
	 for (int i = 0; i < o-2; i++) {
		 q = q->next;
	 }
	 Node* p = (Node*)malloc(sizeof(Node));
	 p->next = q->next;
	 q->next = p;
	 p->data = e;
	 return 1;
 }

 int delete(Node* L,int o){
	 if (o <= 1 || o > GetLen(L)) {
		 return 0;
	 }
	 Node* p = L;
	 if (o == GetLen(L)) {
		 Node* t = Gettail(L);
		 free(t);
		 for (int i = 0; i < GetLen(L) - 2; i++) {
			 p = p->next;
		 }
		 p->next = NULL;
		 return 1;
	 }
	
	 for (int i = 0; i < o-2; i++) {
		 p = p->next;
	 }
	 Node* te = p->next;
	 p = p->next->next;
	 free(te);
	 return 1;

 }




