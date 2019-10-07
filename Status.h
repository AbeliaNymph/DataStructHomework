#ifndef DATA_STRUCT_STATUS_H
#define DATA_STRUCT_STATUS_H
// 状态枚举定义
typedef enum Status {
	OK = 1,
	ERROR = 0,
	OVERFLOW = -1,
}Status;

//泛型类型定义
typedef int ElemType;
#endif // !DATA_STRUCT_STATUS_H
