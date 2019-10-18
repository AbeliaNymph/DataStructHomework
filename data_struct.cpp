#include <stdio.h>
#include <assert.h>

#include "SqList.h"
#include "SqList_Test.h"

#include "LinkList.h"
#include "LinkList_Test.h"

int main() {

#pragma region SqList_Test
	test_Insert_v_0_0_0();
	test_Insert_v_0_0_1();
	test_Insert_v_0_0_2();

	test_Clear_v_0_0_0();

	test_GetElem_v_0_0_0();
	test_GetElem_v_0_0_1();
	test_GetElem_v_0_0_2();

	test_DeleteElem_v_0_0_0();
	test_DeleteElem_v_0_0_1();
	test_DeleteElem_v_0_0_2();

#pragma endregion
	
#pragma region LinKList_Test
	test_MakeLink_v_0_0_0();
	test_Free_v_0_0_0();
	test_InitLinkList_v_0_0_0();
	test_InsList_v_0_0_0();
	test_DelList_l_v_0_0_0();
	test_InsertList_l_v_0_0_0();
	test_ClearList_l_v_0_0_0();
#pragma endregion

	return 0;

}
