//
// Copyleft
// Created by AbeliaNymph on 2019/9/26.
// Author: AbeliaNymph<abelianymph@outlook.com>
//
#include "SqList.h"
#include <stdio.h>
#include <stdbool.h>
// TODO
Status MemoryAllocationCheck(ElemType* elem_ptr) {
	if (elem_ptr == NULL) {
		return ERROR;
	}
	else {
		return OK;
	}
}

//线性表相关操作
//初始化一个空的线性表
Status InitList_sq(SqList& self) {
	self.elem = NULL;
	//为线性表分配内存
	self.elem = (ElemType*)malloc(LIST_INIT_SIZE * sizeof(ElemType));
	//内存分配结果检查
	if (MemoryAllocationCheck(self.elem) == ERROR) {
		exit(OVERFLOW);
	}
	//其他参数初始化
	self.length = 0;
	self.capacity = LIST_INIT_SIZE;
	//对应方法挂载
//    self.Destory = DestoryList_sq;
//    self.Insert = InsertList_sq;
//    self.Output = FormatList_sq;
//    self.Clear = ClearList_sq;
	return OK;
}

//销毁线性表
Status DestoryList_sq(SqList& self) {
	//判断内存是否被释放
	if (self.elem != NULL) {
		//释放内存
		free(self.elem);
		self.elem = NULL;
		return OK;
	}
	else {
		return ERROR;
	}
}

//向指定索引前插入新元素
Status InsertList_sq(SqList& self, int index, ElemType elem) {
	//对输入的index进行合法性检查 判断线性表是否已满
	if (index < 0 || index > self.length) {
		return ERROR;
	}
	else if (self.length >= self.capacity) {
		ElemType* new_base = (ElemType*)realloc(self.elem, self.length + LIST_INCREMENT);

		if (MemoryAllocationCheck(new_base) == ERROR) {
			exit(OVERFLOW);
		}

		self.elem = new_base;
		self.capacity += LIST_INCREMENT;
	}
	//标记插入位置与移动位置
	ElemType* target = &self.elem[index];
	ElemType* last = &self.elem[self.length - 1];

	while (last >= target) {
		*(last + 1) = *last;
		last -= 1;
	}

	*target = elem;
	self.length += 1;
	return OK;

}

// 打印线性表相关信息
void FormatList_sq(SqList& self) {
	printf("SqList {\n");

	for (int i = 0; i < self.length; i++) {
		printf("\t[\n\t\tindex: %d\n\t\tvalue: %d\n\t]\n", i, self.elem[i]);
	}

	printf("\tlength: %d \n", self.length);
	printf("\tcapacity: %d \n}\n", self.capacity);


}

//将线性表置为空表
Status ClearList_sq(SqList& self) {
	if (self.elem != NULL) {
		self.length = 0;
		return OK;
	}
	else {
		return ERROR;
	}
}

// 判断线性表是否为空
bool ListEmpty_sq(SqList& self) {
	if (self.length <= 0) {
		return true;
	}
	else {
		return false;
	}
}

// 获取线性表中指定索引的元素
Status GetElem_sq(SqList self, int index, ElemType& e) {
	if (self.elem == NULL || index < 0 || index > self.length) {
		return ERROR;
	}

	e = self.elem[index];
	return OK;
}

// 删除指定索引处的元素
Status DeleteElem_sq(SqList &self, int index, ElemType& e) {
	if (index < 0 || index >= self.length || self.elem == NULL) {
		return ERROR;
	}

	e = self.elem[index];

	ElemType* front = &self.elem[index];
	ElemType* end = &self.elem[self.length - 1];

	while (front < end) {
		*front = *(front + 1);
		front++;
	}

	self.length -= 1;
	return OK;
}