#include <stdlib.h>
#include "list.h"

struct Node{
	int Value;
	struct Node* Next;
};

struct Node* Root;

void AddNode( int newValue ){
	struct Node* Item;
	Item = (struct Node*)malloc( sizeof(struct Node) );
	Item->Value = newValue;
	Item->Next = Root;
	Root = Item;
}

void CreateList(){
	printf("Создание списка.\n");
	Root = NULL;
	AddNode(5);
	AddNode(4);
	AddNode(3);
	AddNode(2);
	AddNode(1);
}

void ShowList(){
	struct Node* Item;
	printf("Просмотр списка.\n");
	Item = Root;
	while (Item != NULL){
		printf("%d, ", Item->Value);
		Item = Item->Next;
	}
	printf("\n");
}

void DestroyList(){
	struct Node *Item1, *Item2;
	printf("Удаление списка.\n");
	Item1 = Root;
	while (Item1 != NULL){
		Item2 = Item1->Next;
		free(Item1);
		Item1 = Item2;
	}
	Root = NULL;
}

void ListFunction(){
	printf("Демонстрация работы со списком.\n");
	CreateList();
	ShowList();
	DestroyList();
	printf("\n");
}