#include "SqList_Test.h"
#include "SqList.h"
#include <assert.h>
// 测试函数
// 正常插入
void test_Insert_v_0_0_0() {
	SqList sqList;
	InitList_sq(sqList);
	for (int i = 0; i < 10; i++) {
		InsertList_sq(sqList, i, i);
	}
	//FormatList_sq(sqList);

	for (int i = 0; i < sqList.length; i++) {
		assert(sqList.elem[i] == i);
	}
}

// 索引异常_索引为负
void test_Insert_v_0_0_1() {
	SqList sqList;
	InitList_sq(sqList);
	for (int i = 0; i < 10; i++) {
		InsertList_sq(sqList, i, i);
	}

	assert(InsertList_sq(sqList, -1, 233) == ERROR);
}

// 索引异常_索引超出线性表当前长度
void test_Insert_v_0_0_2() {
	SqList sqList;
	InitList_sq(sqList);
	for (int i = 0; i < 10; i++) {
		InsertList_sq(sqList, i, i);
	}

	assert(InsertList_sq(sqList, 999, 233) == ERROR);

}

// 置空
void test_Clear_v_0_0_0() {
	SqList sqList;
	InitList_sq(sqList);
	for (int i = 0; i < 10; i++) {
		InsertList_sq(sqList, i, i);
	}

	assert(ClearList_sq(sqList) == OK);
	assert(sqList.length == 0);
}

// 获取元素_正常
void test_GetElem_v_0_0_0() {
	SqList sqList;
	InitList_sq(sqList);
	for (int i = 0; i < 10; i++) {
		InsertList_sq(sqList, i, i);
	}

	ElemType e;

	for (int i = 0; i < sqList.length; i++) {
		GetElem_sq(sqList, i, e);

		assert(e == i);
	}
}

// 获取元素_索引异常为负
void test_GetElem_v_0_0_1() {
	SqList sqList;
	InitList_sq(sqList);
	for (int i = 0; i < 10; i++) {
		InsertList_sq(sqList, i, i);
	}

	ElemType e;

	assert(GetElem_sq(sqList, -1, e) == ERROR);

}

// 获取元素_索引超出长度
void test_GetElem_v_0_0_2() {
	SqList sqList;
	InitList_sq(sqList);
	for (int i = 0; i < 10; i++) {
		InsertList_sq(sqList, i, i);
	}

	ElemType e;

	assert(GetElem_sq(sqList, 999, e) == ERROR);
}


// 删除元素_正常
void test_DeleteElem_v_0_0_0() {
	SqList sqList;
	InitList_sq(sqList);
	for (int i = 0; i < 10; i++) {
		InsertList_sq(sqList, i, i);
	}
	ElemType e;
	assert(DeleteElem_sq(sqList, 0, e) == OK);
	assert(e == 0);
	assert(sqList.elem[0] == 1);


}

// 删除元素_索引为负
void test_DeleteElem_v_0_0_1() {
	SqList sqList;
	InitList_sq(sqList);
	for (int i = 0; i < 10; i++) {
		InsertList_sq(sqList, i, i);
	}

	ElemType e;
	assert(DeleteElem_sq(sqList, -1, e) == ERROR);
	assert(sqList.elem[0] == 0);


}

// 删除元素_索引超过长度
void test_DeleteElem_v_0_0_2() {
	SqList sqList;
	InitList_sq(sqList);
	for (int i = 0; i < 10; i++) {
		InsertList_sq(sqList, i, i);
	}

	ElemType e;
	assert(DeleteElem_sq(sqList, 10, e) == ERROR);

	assert(sqList.elem[0] == 0);


}