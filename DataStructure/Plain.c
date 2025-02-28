#include<iostream>
#include<iostream>
using namespace std;

#define OK 1
#define ERROR 0
#define MAXSIZE 1010

typedef int Status; 
typedef struct{
	int x;
	int y;
}ElemType;

typedef struct{
/********************Begin***************************/

/********************End*************************/
	
}SqList;
Status InitList(SqList &L)
{
/********************Begin***************************/

/********************End*************************/
	
}//InitList
Status CreateList(SqList &L, int num)
{
/********************Begin***************************/

/********************End*************************/
	
}//CreateList
Status GetElem(SqList L, int w, ElemType &e)
{
/********************Begin***************************/

/********************End*************************/
}//GetElem
int LocateElem(SqList L, ElemType e)
{
/********************Begin***************************/

/********************End*************************/
	
}//LocateElem
Status ListInsert(SqList &L, int w, ElemType e)
{
/********************Begin***************************/

/********************End*************************/
}//ListInsert
Status ListDelete(SqList &L, int w)
{
/********************Begin***************************/

/********************End*************************/
}//ListDelete
Status ListOut(SqList L)
{
	
}
int main()
{
	SqList L;
	InitList(L);
	
	int n, w;
	ElemType e;
	cin >> n;
	while(n --)
	{
		char op;
		cin >> op;
		switch(op)
		{
			case 'C':
				int num;
				cin >> num;
				CreateList(L, num);
				break;
			case 'G':
				cin >> w;
				GetElem(L, w, e);
				cout << e.x << ' ' << e.y << endl;
				break;
			case 'L':
				cin >> e.x >> e.y;
				cout << LocateElem(L, e) << endl;
				break;
			case 'I':
				cin >> w;
				cin >> e.x >> e.y;
				ListInsert(L, w, e);
				break;
			case 'D':
				cin >> w;
				ListDelete(L, w);
				break; 
		}
	}
	ListOut(L);
	
	return 0;
}

#define OK 1
#define ERROR 0
#define MAXSIZE 1010

typedef int Status;
typedef struct {
	int x;
	int y;
}ElemType;

typedef struct {
	/********************Begin***************************/

	/********************End*************************/

}SqList;
Status InitList(SqList& L)
{
	/********************Begin***************************/

	/********************End*************************/

}//InitList
Status CreateList(SqList& L, int num)
{
	/********************Begin***************************/

	/********************End*************************/

}//CreateList
Status GetElem(SqList L, int w, ElemType& e)
{
	/********************Begin***************************/

	/********************End*************************/
}//GetElem
int LocateElem(SqList L, ElemType e)
{
	/********************Begin***************************/

	/********************End*************************/

}//LocateElem
Status ListInsert(SqList& L, int w, ElemType e)
{
	/********************Begin***************************/

	/********************End*************************/
}//ListInsert
Status ListDelete(SqList& L, int w)
{
	/********************Begin***************************/

	/********************End*************************/
}//ListDelete
Status ListOut(SqList L)
{

}
int main()
{
	SqList L;
	InitList(L);

	int n, w;
	ElemType e;
	cin >> n;
	while (n--)
	{
		char op;
		cin >> op;
		switch (op)
		{
		case 'C':
			int num;
			cin >> num;
			CreateList(L, num);
			break;
		case 'G':
			cin >> w;
			GetElem(L, w, e);
			cout << e.x << ' ' << e.y << endl;
			break;
		case 'L':
			cin >> e.x >> e.y;
			cout << LocateElem(L, e) << endl;
			break;
		case 'I':
			cin >> w;
			cin >> e.x >> e.y;
			ListInsert(L, w, e);
			break;
		case 'D':
			cin >> w;
			ListDelete(L, w);
			break;
		}
	}
	ListOut(L);

	return 0;
}