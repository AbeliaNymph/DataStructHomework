//
// Copyleft
// Created by AbeliaNymph on 2019/9/26.
// Author: AbeliaNymph<abelianymph@outlook.com>
//
#ifndef CPP_LEARNING_SQLIST_H
#define CPP_LEARNING_SQLIST_H
// 包含头文件
#include <stdlib.h>
#include <stdbool.h>
#include "Status.h"

// 线性表默认参数定义
#define LIST_INIT_SIZE 100
#define LIST_INCREMENT 50

// 线性表结构定义
typedef struct SqList {
	//线性表的被操作实体
	ElemType* elem;
	//线性表当前元素个数
	int length;
	//线性表当前容量
	int capacity;

	//方法定义
//    Status (*Destory)(SqList&) = NULL;
//    Status (*Insert)(SqList&, int, ElemType) = NULL;
//    void (*Output)(SqList&) = NULL;
//    Status (*Clear)(SqList&) = NULL;
//    bool (*IsEmpty)(SqList&) = NULL;
}SqList;

//线性表相关操作声明
Status MemoryAllocationCheck(ElemType* elem_ptr);

//初始化一个空的线性表
Status InitList_sq(SqList& self);

//销毁线性表
Status DestoryList_sq(SqList& self);

//向指定索引前插入新元素
Status InsertList_sq(SqList& self, int index, ElemType elem);

//打印线性表的相关信息
void FormatList_sq(SqList& sqList);

//将线性表置为空表
Status ClearList_sq(SqList& self);

// 判断线性表是否为空
bool ListEmpty_sq(SqList& self);

// 获取线性表中指定索引的元素
Status GetElem_sq(SqList self, int index, ElemType& e);

// 删除指定索引处的元素
Status DeleteElem_sq(SqList& self, int index, ElemType& e);

#endif //CPP_LEARNING_SQLIST_H
