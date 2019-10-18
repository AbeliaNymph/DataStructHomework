#include "LinkList.h"
#include <stdio.h>

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
	if (self.head != NULL) {
		ClearList_l(self);
	}

	return OK;
}

// 将线性表置为空表，并释放原链表的节点空间
Status ClearList_l(LinkList& self) {
	Link next_node, current_node;
	current_node = self.head;


	while (current_node != NULL) {
		next_node = current_node->next;
		free(current_node);
		current_node = next_node;

	}
	

	self.head = NULL;
	self.tail = NULL;
	self.length = 0;

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

// 已知h指向线性表的头节点，删除链表中第一个节点并以q返回
Status DelFirst_l(Link h, Link& q) {
	if (h == NULL || h->next == NULL) {
		return ERROR;
	}

	q = h->next;
	h->next = q->next;
	q->next = NULL;
	return OK;
}

// 向指定索引处插入节点
Status InsertList_l(LinkList& self, int index, ElemType e) {
	if (index < 0 || index > self.length) {
		return ERROR;
	}

	Link insert_index = self.head;
	int counter = 0;
	while (insert_index->next != NULL && counter <= self.length) {
		if (counter == index) {

			break;
		}

		insert_index = insert_index->next;
	}

	Link link;
	if (MakeNode(link, e) == ERROR) {
		return ERROR;
	}

	link->next = insert_index->next;
	insert_index->next = link;

	UpdateTail(self);
	self.length += 1;

	return OK;
	
}

// 更新尾节点
Status UpdateTail(LinkList& self) {
	if (self.tail == NULL) {
		return ERROR;
	}

	while (self.tail->next != NULL) {
		self.tail = self.tail->next;
	}

	return OK;

}

// Debug
void Format_l(LinkList self) {
	printf("\nLinkList {\n");
	printf("\thead : %p\n", &(*self.head));
	printf("\ttail : %p\n", &(*self.tail));
	printf("\tlength : %d\n", self.length);

	Link cursor = self.head;
	while (cursor != NULL) {
		printf("\n\t\t[\n\t\t\taddress : %p\n\t\t\tdate : %d\n\t\t\tnext : %p\n\t\t]\n", &(*cursor), cursor->data, cursor->next);
		cursor = cursor->next;
	}
	printf("\n}\n");
	
}