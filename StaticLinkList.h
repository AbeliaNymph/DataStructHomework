//
// Copyleft
// Created by AbeliaNymph on 2019/10/18.
// Author: AbeliaNymph<abelianymph@outlook.com>
//
#ifndef DATA_STRUCT_STATICLINKLIST_H
#define DATA_STRUCT_STATICLINKLIST_H

// ����ͷ�ļ�
#include "Status.h"

// ��̬����Ĭ�ϲ�������
#define STATICLINKLIST_INIT_SIZE 100

// ��̬�������ݽṹ����
typedef struct {
	ElemType data;
	int cur;
}Component, StaticLinkList[STATICLINKLIST_INIT_SIZE];

// �㷨������



#endif