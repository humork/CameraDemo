#ifndef CAMERA_H
#define CAMERA_H
#include "tool/Tool.h"
class Camera{
private:
    QString camera_name;
    QString ip_address;
    QString mac_address;

    //Camera Config
    INT32 exposure_time;
    INT32 exposure_func;
    INT32 saturation;
    INT32 white_balance;
    INT32 light_intensity;
    //I/O Config
    bool trigger_func;
    bool input_delay;

    QVector<Tool> tool_list;
    
public:
    Camera();
    ~Camera();
    bool AddTool(Tool tool);
    bool RemoveTool(INT32 index);

    //TODO:
    //capture data  send to group;

};

#endif // CAMERA_H
