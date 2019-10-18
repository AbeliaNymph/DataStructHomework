//
// Copyleft
// Created by AbeliaNymph on 2019/10/18.
// Author: AbeliaNymph<abelianymph@outlook.com>
//
#ifndef DATA_STRUCT_STATICLINKLIST_H
#define DATA_STRUCT_STATICLINKLIST_H

// 包含头文件
#include "Status.h"

// 静态链表默认参数定义
#define STATICLINKLIST_INIT_SIZE 100

// 静态链表数据结构定义
typedef struct {
	ElemType data;
	int cur;
}Component, StaticLinkList[STATICLINKLIST_INIT_SIZE];

// 算法及操作



#endif