#include<iostream>
using namespace std;

#define OK 1
#define ERROR 0
#define MAXSIZE 1010

typedef int Status;
typedef struct {
    int x;
    int y;
} ElemType;

typedef struct {
    ElemType data[MAXSIZE];
    int length;
} SqList;

// 初始化顺序表
Status InitList(SqList& L) {
    L.length = 0;
    return OK;
}

// 创建顺序表
Status CreateList(SqList& L, int num) {
    if (num < 0 || num > MAXSIZE) return ERROR;
    for (int i = 0; i < num; ++i) {
        cin >> L.data[i].x >> L.data[i].y;
    }
    L.length = num;
    return OK;
}

// 按位置取值
Status GetElem(SqList L, int w, ElemType& e) {
    if (w < 1 || w > L.length) return ERROR;
    e = L.data[w - 1];
    return OK;
}

// 查找元素位置
int LocateElem(SqList L, ElemType e) {
    for (int i = 0; i < L.length; ++i) {
        if (L.data[i].x == e.x && L.data[i].y == e.y) {
            return i + 1; // 位置从1开始
        }
    }
    return 0; // 未找到
}

// 插入元素
Status ListInsert(SqList& L, int w, ElemType e) {
    if (w < 1 || w > L.length + 1 || L.length == MAXSIZE) {
        return ERROR;
    }
    // 从后往前移动元素，腾出插入位置
    for (int i = L.length; i >= w; --i) {
        L.data[i] = L.data[i - 1];
    }
    L.data[w - 1] = e;
    L.length++;
    return OK;
}

// 删除元素
Status ListDelete(SqList& L, int w) {
    if (w < 1 || w > L.length) return ERROR;
    // 从前往后覆盖，跳过被删除的位置
    for (int i = w; i < L.length; ++i) {
        L.data[i - 1] = L.data[i];
    }
    L.length--;
    return OK;
}

// 输出顺序表所有元素
Status ListOut(SqList L) {
    for (int i = 0; i < L.length; ++i) {
        cout << L.data[i].x << " " << L.data[i].y << endl;
    }
    return OK;
}

int main() {
    SqList L;
    InitList(L);

    int n, w;
    ElemType e;
    cin >> n;
    while (n--) {
        char op;
        cin >> op;
        switch (op) {
        case 'C': {
            int num;
            cin >> num;
            CreateList(L, num);
            break;
        }
        case 'G': {
            cin >> w;
            if (GetElem(L, w, e) == OK)
                cout << e.x << ' ' << e.y << endl;
            break;
        }
        case 'L': {
            cin >> e.x >> e.y;
            cout << LocateElem(L, e) << endl;
            break;
        }
        case 'I': {
            cin >> w >> e.x >> e.y;
            ListInsert(L, w, e);
            break;
        }
        case 'D': {
            cin >> w;
            ListDelete(L, w);
            break;
        }
        }
    }
    ListOut(L);

    return 0;
}