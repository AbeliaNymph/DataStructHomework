//
// Copyleft
// Created by AbeliaNymph on 2019/10/18.
// Author: AbeliaNymph<abelianymph@outlook.com>
//

// 包含头文件
#include "StaticLinkList.h"
#include "Status.h"

// 算法与操作

// 初始化静态链表
// - 成功返回 Status::OK
// - 失败返回 Status::ERROR
Status InitStaticLinkList(StaticLinkList self) {
	for (int index = 0; index < STATICLINKLIST_INIT_SIZE; index++) {
		self[index].cur = index + 1;
	}

	self[STATICLINKLIST_INIT_SIZE - 1].cur = 0;

	return OK;
}