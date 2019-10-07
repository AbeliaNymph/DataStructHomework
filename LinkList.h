#pragma once
#ifndef DATA_STRUCT_LINKLIST_H
#define DATA_STRUCT_LINKLIST_H

// 包含头文件
#include <stdlib.h>
#include "Status.h"

// 节点数据结构
typedef struct LNode {
	ElemType data;
	struct LNode* next;
} *Link, *Position;

// 链表数据结构
typedef struct {
	// 链表的头节点
	Link head;
	// 链表的尾节点
	Link tail;
	//链表当前长度
	int length;
}LinkList;

// 操作函数声明

// 生成指定值的节点
// 成功返回OK,失败返回ERROR
Status MakeNode(Link& p, ElemType e);

// 释放节点
void FreeNode(Link& p);

// 构造一个空的线性表
Status InitList_l(LinkList& self);

// 已知h指向线性表的头节点，将s所指的节点插入第一个节点前
Status InsFirst_l(Link h, Link s);
#endif // DATA_STRUCT_LINKLIST_H