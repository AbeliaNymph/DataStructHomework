#include "LinkList_Test.h"
#include "LinkList.h"
#include <assert.h>

//单元测试函数
//创建节点
void test_MakeLink_v_0_0_0() {
	Link p;
	assert(MakeNode(p, 0) == OK);
	assert(p->data == 0);
	assert(p->next == NULL);
}

//释放节点
void test_Free_v_0_0_0() {
	Link p;
	assert(MakeNode(p, 0) == OK);
	assert(p->data == 0);
	FreeNode(p);

	assert(p == NULL);
}

// 初始化空的线性表
void test_InitLinkList_v_0_0_0() {
	LinkList linkList;

	assert(InitList_l(linkList) == OK);

	assert(linkList.length == 0);
	assert(linkList.tail == linkList.head);
	assert(linkList.head->next == NULL);
}

// 在第一个元素前插入节点
void test_InsList_v_0_0_0() {
	LinkList linklist;
	assert(InitList_l(linklist) == OK);
	Link s;
	assert(MakeNode(s, 1) == OK);
	assert(InsFirst_l(linklist.head, s) == OK);
	assert(linklist.head->data == 0);
	assert(linklist.head->next->data == 1);
	assert(linklist.head->next->next == NULL);
	
}

// 删除第一个节点
void test_DelList_l_v_0_0_0() {
	LinkList linklist;
	assert(InitList_l(linklist) == OK);
	Link link_1, link_2, link_3;
	assert(MakeNode(link_1, 0) == OK);
	assert(MakeNode(link_2, 1) == OK);
	assert(MakeNode(link_3, 2) == OK);
	assert(InsFirst_l(linklist.head, link_1) == OK);
	assert(InsFirst_l(linklist.head, link_2) == OK);
	assert(InsFirst_l(linklist.head, link_3) == OK);
	//Format_l(linklist);
	Link s;

	assert(DelFirst_l(linklist.head, s) == OK);
	assert(s->data == 2);
	assert(s->next == NULL);
}

// 向指定位置插入_正常
void test_InsertList_l_v_0_0_0() {
	LinkList linklist;
	assert(InitList_l(linklist) == OK);

	for (int i = 0; i < 10; i++) {
		InsertList_l(linklist, i, i);
	}

	//Format_l(linklist);

	assert(linklist.length = 10);
	
}

// 将线性表置为空表，并释放原链表的节点空间
void test_ClearList_l_v_0_0_0() {
	LinkList linklist;
	assert(InitList_l(linklist) == OK);

	for (int i = 0; i < 10; i++) {
		InsertList_l(linklist, i, i);
	}

	ClearList_l(linklist);
	Format_l(linklist);

	assert(linklist.head == NULL);
	assert(linklist.tail == NULL);
	assert(linklist.length == 0);
}