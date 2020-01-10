/* 定义寄存器地址*/
#define  FCSW_REG_BASE_ADDR_CAPABILITY           	0x10000
#define  FCSW_REG_BASE_ADDR_FUNCTIONALITY           0x20000
#define  FCSW_REG_BASE_ADDR_PORT_CONFIG(x)          (0x100000*x)
#define  FCSW_REG_BASE_ADDR_PORT_STATUS(x)          (0x1000000*x)

#define  FCSW_REG_DEV_ID_CDR         		(FCSW_REG_BASE_ADDR_CAPABILITY+0x0)
#define  FCSW_REG_DEV_VERSION_CDR 			(FCSW_REG_BASE_ADDR_CAPABILITY+0x4)
#define  FCSW_REG_DEV_FEAT_CDR 				(FCSW_REG_BASE_ADDR_CAPABILITY+0x8)
#define  FCSW_REG_DEV_PORT_INF_CDR			(FCSW_REG_BASE_ADDR_CAPABILITY+0xC)
#define  FCSW_REG_DEV_LUT_SIZE_CDR			(FCSW_REG_BASE_ADDR_CAPABILITY+0x10)
#define  FCSW_REG_DEV_MULT_SIZE_CDR			(FCSW_REG_BASE_ADDR_CAPABILITY+0x14)
#define  FCSW_REG_DEV_TRUNK_GROUP_NUM_CDR 	(FCSW_REG_BASE_ADDR_CAPABILITY+0x18)

#define  FCSW_REG_DEV_MODE_CFG_FCR			(FCSW_REG_BASE_ADDR_FUNCTIONALITY+0x0)
#define  FCSW_REG_DEV_SYNC_MODE_FCR			(FCSW_REG_BASE_ADDR_FUNCTIONALITY+0x4)
#define  FCSW_REG_DEV_DOMAIN_FCR			(FCSW_REG_BASE_ADDR_FUNCTIONALITY+0x8)
#define  FCSW_REG_DEV_MON_PORT_FCR  		(FCSW_REG_BASE_ADDR_FUNCTIONALITY+0xC)
#define  FCSW_REG_DEV_MON_MSGID_FCR(x) 		(FCSW_REG_BASE_ADDR_FUNCTIONALITY+0x10+(0x4*x)) /*x范围由上一个寄存器中消息id数决定 */ 

#define  FCSW_REG_DEV_PORT_COR(x)			(FCSW_REG_BASE_ADDR_PORT_CONFIG(x)+0x0) /* 在48口交换机中x范围为0~47 */
#define  FCSW_REG_DEV_PORT_E_D_TOV_COR(x) 	(FCSW_REG_BASE_ADDR_PORT_CONFIG(x)+0x4) /* 在48口交换机中x范围为0~47 */
#define  FCSW_REG_DEV_PORT_R_D_TOV_COR(x) 	(FCSW_REG_BASE_ADDR_PORT_CONFIG(x)+0x8) 
#define  FCSW_REG_DEV_PORT_EN_ERR(x)		(FCSW_REG_BASE_ADDR_PORT_CONFIG(x)+0xC)
#define  FCSW_REG_DEV_PORT_DID_COR(x,y)   	(FCSW_REG_BASE_ADDR_PORT_CONFIG(x)+0x1000+0x4*y) /* x范围为0~47 y范围0~128*/
#define  FCSW_REG_DEV_DEV_PORT_OUTPUT_COR(x,y)   (FCSW_REG_BASE_ADDR_PORT_CONFIG(x)+0x1004+0x4*y)
#define  FCSW_REG_DEV_MC_DID_COR(x,y)         (FCSW_REG_BASE_ADDR_PORT_CONFIG(x)+0x8000+0x4*y)
#define  FCSW_REG_DEV_MC_MASK1_COR(x,y)		(FCSW_REG_BASE_ADDR_PORT_CONFIG(x)+0x8004+0x4*y)
#define  FCSW_REG_DEV_MC_MASK2_COR(x,y)		(FCSW_REG_BASE_ADDR_PORT_CONFIG(x)+0x8008+0x4*y)
#define  FCSW_REG_DEV_ISL_COR(x,y)            (FCSW_REG_BASE_ADDR_PORT_CONFIG(x)+0x10000+0x4*y)


#define  FCSW_REG_DEV_PORT_STR(x)			(FCSW_REG_BASE_ADDR_PORT_STATUS(x)+0x0) 	
#define  FCSW_REG_DEV_PORT_RXCNT_STR(x)	    (FCSW_REG_BASE_ADDR_PORT_STATUS(x)+0x4)
#define  FCSW_REG_DEV_PORT_TXCNT_STR(x) 	(FCSW_REG_BASE_ADDR_PORT_STATUS(x)+0x8)
#define  FCSW_REG_DEV_PORT_ERR(x)			(FCSW_REG_BASE_ADDR_PORT_STATUS(x)+0xc)
#define  FCSW_REG_DEV_PORT_SOF_ERR(x)		(FCSW_REG_BASE_ADDR_PORT_STATUS(x)+0x10)
#define  FCSW_REG_DEV_PORT_EOF_ERR(x)		(FCSW_REG_BASE_ADDR_PORT_STATUS(x)+0x14)
#define  FCSW_REG_DEV_PORT_SHORT_ERR(x)		(FCSW_REG_BASE_ADDR_PORT_STATUS(x)+0x18)
#define  FCSW_REG_DEV_PORT_LONG_ERR(x)		(FCSW_REG_BASE_ADDR_PORT_STATUS(x)+0x1c)
#define  FCSW_REG_DEV_PORT_CRC_ERR(x)		(FCSW_REG_BASE_ADDR_PORT_STATUS(x)+0x20)
#define  FCSW_REG_DEV_PORT_DID_ERR(x)		(FCSW_REG_BASE_ADDR_PORT_STATUS(x)+0x24)
#define  FCSW_REG_DEV_PORT_CODE_ERR(x)		(FCSW_REG_BASE_ADDR_PORT_STATUS(x)+0x28)
#define  FCSW_REG_DEV_PORT_POLARITY_ERR(x) 	(FCSW_REG_BASE_ADDR_PORT_STATUS(x)+0x2c)



/* 定义交换机支持速率 */
#define FCSW_SPEED_16G  0x10
#define FCSW_SPEED_8G   0x8
#define FCSW_SPEED_4G   0x4
#define FCSW_SPEED_2G   0x2
#define FCSW_SPEED_1G   0x1

/* 定义交换机端口类型 */
#define FCSW_PORT_TYPE_F  0x1
#define FCSW_PORT_TYPE_E  0x2

/* 定义交换机端口类型 */
#define FCSW_PORT_MON_TYPE_INPUT  0x1
#define FCSW_PORT_MON_TYPE_OUTPUT 0x2
#define FCSW_PORT_MON_TYPE_MSGID  0x3

/* 定义交换机TRUNK组的端口数量类型 */
#define FCSW_PORT_TRUNK_2  0x02
#define FCSW_PORT_TRUNK_4  0x04
#define FCSW_PORT_TRUNK_8  0x08
#define FCSW_PORT_TRUNK_16 0x10

/* 定义交换机时钟同步模式类型 */
#define FCSW_SYNC_MODE_SERVER  0x1
#define FCSW_SYNC_MODE_CLIENT  0x2

/* 定义交换机端口链路状态 */
#define FCSW_PORT_LINK_RESET  	0x1
#define FCSW_PORT_LINK_OUTOFSYNC  0x2
#define FCSW_PORT_LINK_FAILURE  	0x4
#define FCSW_PORT_LINK_ACTIVE 	0x8

/* 定义交换机端口错误检测使能类型 */
#define FCSW_PORT_ERR_SOF_EN  		0x1/* 使能端口SOF错误检测*/
#define FCSW_PORT_ERR_EOF_EN      	(0x1<<1)/* 使能端口EOF错误检测 */
#define FCSW_PORT_ERR_SHORT_EN  		(0x1<<2)/* 使能端口超短帧错误检测 */
#define FCSW_PORT_ERR_LONG_EN 		(0x1<<3)/* 使能端口超长帧错误检测 */
#define FCSW_PORT_ERR_CRC_EN      	(0x1<<4)/* 使能端口CRC错误检测 */
#define FCSW_PORT_ERR_DID_EN  		(0x1<<5)/* 使能DID未查询到路由检测 */
#define FCSW_PORT_ERR_CODE_EN 		(0x1<<6)/* 使能编码违例错误 */
#define FCSW_PORT_ERR_POLARITY_EN     (0x1<<7)/* 使能极性错误检测 */

/* 定义交换机工作模式类型 */
#define FCSW_MODE_48PORT  0x1 /*工作在48端口模式*/
#define FCSW_MODE_24PORT  0x2 /*工作在24端口模式*/
#define FCSW_MODE_16PORT  0x3 /*工作在16端口模式*/
#define FCSW_MODE_8PORT 	0x4 /*工作在8端口模式*/

/* 定义交换机配置结构体 */
typedef struct
{
	UINT8 sw_mode;/*交换机工作模式,可填FCSW_MODE_48PORT/FCSW_MODE_24PORT/FCSW_MODE_16PORT/FCSW_MODE_8PORT*/
	UINT8 sync_mode;/* 时钟同步模式设置,可以填FCSW_SYNC_MODE_SERVER/FCSW_SYNC_MODE_CLIENT */
	UINT8 client_sync_port;/* 客户端模式时接收时钟同步信息的端口号 */
	UINT16 server_sync_gap;/* 服务端模式时同步时间间隔，单位ms */
	UINT8 domain_id;/* 域ID配置 */
	UINT8 mon_en;/* 0不使能/1使能监控端口功能*/
	UINT8 mon_type;/*监控端口类型,可填FCSW_PORT_MON_TYPE_INPUT/FCSW_PORT_MON_TYPE_OUTPUT/FCSW_PORT_MON_TYPE_MSGID*/
	UINT8 mon_ingress_port;/* 监控的输入端口号 */
	UINT8 mon_egress_port;/* 监控的输出端口号 */
	FCSW_MON_CFG_STRU *mon_msgid_list;/* 监控消息id结构体指针,数量取决于交换机属性里的mon_msgid_num */
	FCSW_ISL_CFG_STRU *isl_cfg_list;/* 级联配置表,可配数量为交换机属性的trunk_group_num*/
	FCSW_PORT_CFG_STRU *port_cfg_list;/* 端口配置表指针*/
}__attribute__((packed))FCSW_SW_CFG_STRU;

/* 定义交换机属性结构体 */
typedef struct
{
	UINT16 deviceid;/* 设备标识字段 */
	UINT16 vendorid;/* 厂商标识字段 */
	UINT8  version[3];/* 版本号 */
	UINT8  sw_support;/* 0不支持/1支持交换功能 */
	UINT8  speed;/* FC速率,参考宏FCSW_SPEED_16G/FCSW_SPEED_8G/FCSW_SPEED_4G/FCSW_SPEED_2G/FCSW_SPEED_1G */
	UINT8  monitor_support;/* 0不支持/1支持监控端口 */
	UINT8  bcast_support;/* 0不支持/1支持广播功能 */
	UINT8  mcast_support;/* 0不支持/1支持多播功能 */
	UINT8  bb_credit_support;/* 0不支持/1支持信用值管理功能 */
	UINT8  redundant_support;/* 0不支持/1支持双机冗余功能 */
	UINT8  priority_support;/* 0不支持/1支持高低优先级 */
	UINT8  f_port_support;/* 0不支持/1支持F端口配置 */
	UINT8  e_port_support;/* 0不支持/1支持E端口配置 */
	UINT8  synx_support;/* 0不支持/1支持SYNX原语同步 */
	UINT8  syny_support;/* 0不支持/1支持SYNY原语同步 */
	UINT8  synz_support;/* 0不支持/1支持SYNZ原语同步 */
	UINT8  err_capture_support;/* 0不支持/1支持错误捕获功能 */
	UINT8  clk_server_support;/* 0不支持/1支持时钟同步的服务端模式 */
	UINT8  clk_client_support;/* 0不支持/1支持时钟同步的客户端模式 */
	UINT8  isl_trunk_support;/* 0不支持/1支持ISL TRUNK功能 */
	UINT8  port_total;/* 可配置的总端口数量 */
	UINT8  monitor_port_num;/* 可配置的监控端口号 */
	UINT16 lut_size;/* 路由表支持的最多D_ID个数*/
	UINT8  mc_lut_size;/* 组播路由表支持的最多D_ID个数*/
	UINT8  mon_msgid_num;/* 允许监控的消息ID数量 */
	UINT16 trunk_group_num;/* 支持的聚合组数量*/
}__attribute__((packed))FCSW_SW_INFO_STRU;

/* 定义端口配置结构体 */
typedef struct
{
	UINT8 rx_en;/* 0不使能/1使能端口的接收使能 */
	UINT8 tx_en;/* 0不使能/1使能端口的发送使能 */
	UINT8 speed;/* FC速率,可以填FCSW_SPEED_8G/FCSW_SPEED_4G/FCSW_SPEED_2G/FCSW_SPEED_1G */
	UINT8 bb_credit;/* 端口的信用值 */
	UINT8 trunk_en;/* 0不使能/1使能TRUNK模式 */
	UINT16 trunk_ch_num;/* 配置TRUNK组内的端口数量,可以填FCSW_PORT_TRUNK_2/FCSW_PORT_TRUNK_4
							/FCSW_PORT_TRUNK_8/FCSW_PORT_TRUNK_16*/
	UINT8 port_type;/* 端口类型配置,可以填FCSW_PORT_TYPE_F/FCSW_PORT_TYPE_E*/
	UINT8 sync_out_en;/* 0不允许/1允许发送时间同步原语 */
	UINT16 e_d_tov;/* 错误检测超时值，单位ms */
	UINT16 r_d_tov;/* 接收事件超时值，单位ms */
	FCSW_RTE_CFG_STRU *rte_list;/* 指向路由表，表的长度由交换机属性的lut_size决定*/
	FCSW_MC_RTE_CFG_STRU *mc_rte_list;/* 指向组播路由表，表的长度由交换机属性的mc_lut_size决定*/
	UINT32 err_en;/* 端口错误检测使能,详情见交换机端口错误检测使能类型宏定义*/
}__attribute__((packed))FCSW_PORT_CFG_STRU;

/* 定义路由表配置结构体 */
typedef struct
{
	UINT32 rte_did;/* 填入路由表项的D_ID*/
	UINT8  rte_valid;/* 0不生效/1生效路由*/
	UINT32 rte_output;/* D_ID对应的端口号*/
}__attribute__((packed))FCSW_RTE_CFG_STRU;

/* 定义组播路由表配置结构体 */
typedef struct
{
	UINT32 mc_rte_did;/* 填入路由表项的D_ID*/
	UINT32 mc_rte_mask1;/* 组播掩码寄存器1*/
	UINT32 mc_rte_mask2;/* 组播掩码寄存器1*/
}__attribute__((packed))FCSW_MC_RTE_CFG_STRU;

/* 定义端口状态结构体 */
typedef struct
{
	UINT8 rx_en;/* 0不使能/1使能端口的接收使能 */
	UINT8 tx_en;/* 0不使能/1使能端口的发送使能 */
	UINT8 speed;/* FC速率,FCSW_SPEED_8G/FCSW_SPEED_4G/FCSW_SPEED_2G/FCSW_SPEED_1G */
	UINT8 bb_credit;/* 端口的信用值 */
	UINT8 link_stas;/* 链路状态,FCSW_PORT_LINK_RESET/FCSW_PORT_LINK_OUTOFSYNC/FCSW_PORT_LINK_FAILURE/FCSW_PORT_LINK_ACTIVE */	
	UINT32 rxcnt;/* 端口接收计数 */
	UINT32 txcnt;/* 端口发送计数 */
	UINT32 err_stat;/* 端口错误状态,详见交换机端口错误检测使能类型宏定义 */
	UINT32 err_sof_cnt;/* 端口SOF错误计数 */
	UINT32 err_eof_cnt;/* 端口EOF错误计数 */
	UINT32 err_short_cnt;/* 端口短帧错误计数 */
	UINT32 err_long_cnt;/* 端口长帧错误计数 */
	UINT32 err_crc_cnt;/* 端口CRC错误计数 */
	UINT32 err_did_cnt;/* 端口DID错误计数 */
	UINT32 err_code_cnt;/* 端口编码错误计数 */
	UINT32 err_polarity_cnt;/* 端口极性错误计数 */
}__attribute__((packed))FCSW_PORT_STAU_STRU;

/* 定义监控消息ID配置结构体 */
typedef struct
{
	UINT32 msgid;/* 被监控FC-AE-ASM的MessageID*/
}__attribute__((packed))FCSW_MON_CFG_STRU;

/* 定义级联配置结构体 */
typedef struct
{
	UINT8 domain_id;/* 域ID */
	UINT8 e_port;/* 对应的E_PORT号 */
}__attribute__((packed))FCSW_ISL_CFG_STRU;


/* 定义配置表操作结构体 */
typedef struct
{
	char *filehead;/* 文件起始 */
	char *curr_linehead;/* 当前行起始 */
}__attribute__((packed))FCSW_CFG_FILE_CFG_STRU;

typedef *FCSW_CFG_FILE_CFG_STRU FCSW_CFG_FILE_CFG_HEAD;


typedef enum STATUS{
	OK=0,
	PARAM_ERROR,
	ADDR_ERROR,
	INVALID_ERROR,
	ERROR
};

/* 配置表相关 */
STATUS FCSW_ConfigFile_Analysis(char *fileName, FCSW_SW_CFG_STRU *sw_cfg);/* 将配置文件解析到交换机配置表中并且配置下去*/
STATUS FCSW_ConfigFile_Fill(char *fileName, FCSW_SW_CFG_STRU *sw_cfg);/* 将交换机配置表填充到文件中*/
STATUS FCSW_ConfigFile_GetHead(FCSW_CFG_FILE_CFG_HEAD head, char *fileName) /* 获取配置表控制结构体指针*/

STATUS FCSW_ConfigFile_FindWord(FCSW_CFG_FILE_CFG_HEAD head, char *word);/* 查询配置表关键词,返回关键词起始字符指针*/
STATUS FCSW_ConfigFile_GetNum_Line(FCSW_CFG_FILE_CFG_HEAD head, UINT8 num);/* 获取配置表当前行元素个数*/
STATUS FCSW_ConfigFile_GetElementType_Line(FCSW_CFG_FILE_CFG_HEAD head, UINT8 num, UINT8 *type);/* 获取配置表当前行第n个元素的类型：字符串或数值或不合法*/
STATUS FCSW_ConfigFile_GetElement_Line(FCSW_CFG_FILE_CFG_HEAD head, UINT8 num, UINT8 *type, UINT32 *value);/* 按照类型获取配置表当前行第n个元素，数值也可以用字符串的格式获取*/
STATUS FCSW_ConfigFile_NextLine(FCSW_CFG_FILE_CFG_HEAD head);/* 换行*/
STATUS FCSW_ConfigFile_DeleteLine(FCSW_CFG_FILE_CFG_HEAD head);/* 删除配置表当前行*/
STATUS FCSW_ConfigFile_DeleteElement_Line(FCSW_CFG_FILE_CFG_HEAD head, UINT8 num);/* 删除配置表当前行的第n个元素*/
STATUS FCSW_ConfigFile_ModifyElement_Line(FCSW_CFG_FILE_CFG_HEAD head, UINT8 num, char *word);/* 修改配置表当前行的第n个元素*/
STATUS FCSW_ConfigFile_InsertElement_Line(FCSW_CFG_FILE_CFG_HEAD head, UINT8 num, char *word);/* 在配置表当前行的第n个元素之后插入元素*/
STATUS FCSW_ConfigFile_InsertLine(FCSW_CFG_FILE_CFG_HEAD head, UINT8 num, char *word);/* 在配置表当前行的下面插入一行并填入元素，当前行移到插入行*/
