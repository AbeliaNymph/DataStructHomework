#include "LinkList.h"

// 算法

// 生成指定值的节点
// 成功返回OK,失败返回ERROR
Status MakeNode(Link &p, ElemType e) {
	p = NULL;
	p = (Link)malloc(sizeof(LNode));

	if (p == NULL) {
		return ERROR;
	}

	p->data = e;
	p->next = NULL;
	return OK;
}

// 释放节点
void FreeNode(Link& p) {
	if (p != NULL) {
		free(p);
		p = NULL;
	}
}

// 构造一个空的线性表
Status InitList_l(LinkList& self) {
	if (MakeNode(self.head, 0) == ERROR) {
		return ERROR;
	}
	self.head->next = NULL;
	self.tail = self.head;
	self.length = 0;

	return OK;

}

// TODO 销毁线性表
Status DestoryList_l(LinkList& self) {
	return OK;
}

// Todo 将线性表置为空表，并释放原链表的节点空间
Status ClearList_l(LinkList& self) {
	return OK;
}

// 已知h指向线性表的头节点，将s所指的节点插入第一个节点前
Status InsFirst_l(Link h, Link s) {
	if (s == NULL) {
		return ERROR;
	}

	s->next = h->next;
	h->next = s;

	
	return OK;
}

// 