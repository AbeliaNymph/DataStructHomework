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