#include <stdio.h>
#define MaxLength 300 // So phan tu toi da
typedef int ElementType; // Kieu du lieu cua phan tu
typedef int Position; // Position = index + 1

typedef struct
{
    ElementType Elements[MaxLength];
    Position Last;
} List;

void makenullList(List *pL){
	(*pL).Last=0;
}
Position first(List L) {
	return 1;
}
Position endList(List L) {
	return L.Last+1;
}
void insertList(ElementType x, Position P, List *pL) {
	if ((*pL).Last==300)
		printf("Danh sach day\n");
	else if (0>P||P>(*pL).Last+1)
			printf("Vi tri khong hop le\n");
		else {
			Position Q;
			for (Q=(*pL).Last+1;Q>=P;Q--)
				(*pL).Elements[Q]=(*pL).Elements[Q-1];
			(*pL).Elements[P-1]=x;
			(*pL).Last++;
		}
}


void readList(List *pL)
{	int i;
    makenullList(pL);
    int n, e;
    scanf("%d", &n);
    for ( i = 0; i < n; i++)
    {
        scanf("%d", &e);
        insertList(e, pL->Last + 1, pL);
    }
}



void printList(List L)
{	Position p;
    for ( p = 1; p <= L.Last; p++)
        printf("%d ", (L.Elements[p-1])); // viet them ham retrieve neu chua co

    printf("\n");
}

// ham hoan doi 2 phan tu trong mang
void swap(ElementType array[], int i, int j)
{
    ElementType temp = array[i];

    array[i] = array[j];
    array[j] = temp;
}

// ham sap xep
void sort(List *pL)
{	int i,j;
    for ( i = 0; i < pL->Last-1; i++)
        for ( j = i + 1; j < pL->Last; j++)
            if (pL->Elements[i] > pL->Elements[j])
                swap(pL->Elements, i, j);
}

int main(){
	List L;
	readList(&L);
	sort(&L);
	printList(L);
	
	return 0;
	
}






