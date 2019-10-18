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

// 已知h指向线性表的头节点，删除链表中第一个节点并以q返回
Status DelFirst_l(Link h, Link& q);

// 更新尾节点
Status UpdateTail(LinkList& self);

// 向指定索引处插入节点
Status InsertList_l(LinkList& self, int index, ElemType e);


// Todo 将线性表置为空表，并释放原链表的节点空间
Status ClearList_l(LinkList& self);

// Debug
void Format_l(LinkList self);
#endif // DATA_STRUCT_LINKLIST_H