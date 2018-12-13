#ifndef CONFIGSTRUCT_H
#define CONFIGSTRUCT_H
typedef unsigned char   UINT8;         /* Unsigned  8 bit quantity     */
typedef signed   char   INT8;          /* Signed    8 bit quantity     */
typedef unsigned short  UINT16;        /* Unsigned  16 bit quantity    */
typedef signed   short  INT16;         /* Signed    16 bit quantity    */
typedef unsigned int    UINT32;        /* Unsigned  32 bit quantity    */
typedef signed   int    INT32;         /* Signed    32 bit quantity    */
                                       /* floating  point              */
typedef float           FP32;          /* Single    precision          */
typedef double          FP64;          /* Double    precision          */


#define OUTER_TRIGGER 0
#define INNER_TRIGGER 1

typedef struct _ORIGIN_PICTURE
{
    UINT32 visize[2];
    UINT32 stride[2];
    UINT32 width;
    UINT32 height;
    INT8 payload[0];
}ORI_PIC;


typedef struct _STATISTIC_RESULT
{
    UINT32 total_count;
    UINT32 positive_count;
    UINT32 negetive_count;
    UINT16 max_time;
    UINT16 min_time;
    UINT16 average_time;
    UINT16 reserved;
}STATIC_RES;

typedef struct _PICTRUE_INFORMATION
{
    ORI_PIC Ori_Pic;
    RES_HEAD Res_Head;
    STATIC_RES Static_Res;

    INT32 result_is_ok;
    INT32 buffer_index;
    INT32 jpeg_size;
    UINT32 time_cost;
    INT32 result_amount;
    UINT32 result_payloadsize;
    INT8 result_payload[0];

}PIC_INFO;

typedef struct _RESULT_HEAD
{
    INT32  tool_id;                              //ID类型待确认。
    INT8   tool_name[32];                        //工具名称
    INT16  tool_value;                           //工具结果评分
    INT16  tool_IsOk;                            //工具结果是否OK
    INT32  tool_type;                            //工具类型
    UINT16 top_threshold;						//阈值上限
    UINT16 bot_threshold;						//阈值下限
    UINT16 score_hist[201];						//评分直方图

    union
    {
        Contour_Result       contour_result;    //轮廓工具
        Color_Result         color_result;      //颜色面积工具
        Width_Result         width_result;      //宽度工具
        Circle_Result        circle_result;     //圆工具
    };

}RES_HEAD;

#endif // CONFIGSTRUCT_H
