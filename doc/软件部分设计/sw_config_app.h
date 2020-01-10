

STATUS FCSW_Reg_Read(UINT32 addr, UINT32 *value);/* 读寄存器，上位机会调用协议发包给驱动来操作，驱动则直接操作*/
STATUS FCSW_Reg_Write(UINT32 addr, UINT32 value, UINT8 sav);/* 写寄存器，上位机会调用协议发包给驱动来操作，驱动则直接操作，可以选择保存或者不保存*/
STATUS FCSW_RTE_Config(UINT8 mode, UINT32 did, UINT32 *portList);/* 路由表配置，上位机会调用协议发包给驱动来操作，驱动则直接操作，模式可以选择单播、组播、级联路由三种模式*/

STATUS FCSW_Status_Read(UINT8 regnum, UINT32 *value);/* 状态查询，对交换机能力寄存器的查询*/

STATUS FCSW_Status_Read(UINT8 regnum, UINT8 portnum, UINT32 *value);/* 端口状态查询，对端口状态寄存器的查询*/