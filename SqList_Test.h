#ifndef  DATA_STRUCT_SQLIST_TEST_H
#define DATA_STRUCT_SQLIST_TEST_H

// 测试函数
// 正常插入
void test_Insert_v_0_0_0();

// 索引异常_索引为负
void test_Insert_v_0_0_1();

// 索引异常_索引超出线性表当前长度
void test_Insert_v_0_0_2();

// 置空
void test_Clear_v_0_0_0();

// 获取元素_正常
void test_GetElem_v_0_0_0();

// 获取元素_索引异常为负
void test_GetElem_v_0_0_1();

// 获取元素_索引超出长度
void test_GetElem_v_0_0_2();

// 删除元素_正常
void test_DeleteElem_v_0_0_0();

// 删除元素_索引为负
void test_DeleteElem_v_0_0_1();

// 删除元素_索引超过长度
void test_DeleteElem_v_0_0_2();
#endif