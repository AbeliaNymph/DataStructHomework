//
// Copyleft
// Created by AbeliaNymph on 2019/10/18.
// Author: AbeliaNymph<abelianymph@outlook.com>
//

// ����ͷ�ļ�
#include "StaticLinkList.h"
#include "Status.h"

// �㷨�����

// ��ʼ����̬����
// - �ɹ����� Status::OK
// - ʧ�ܷ��� Status::ERROR
Status InitStaticLinkList(StaticLinkList self) {
	for (int index = 0; index < STATICLINKLIST_INIT_SIZE; index++) {
		self[index].cur = index + 1;
	}

	self[STATICLINKLIST_INIT_SIZE - 1].cur = 0;

	return OK;
}