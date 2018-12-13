#ifndef GROUP_H
#define GROUP_H
#include "ConfigStruct.h"
#include "Buffer.h"
#include "Camera.h"
class Group{
private:
    INT32 group_number;
    INT32 camera_number;
    Camera* camera1;
    Camera* camera2;
    Camera* camera3;
    Camera* camera4;

    Buffer buffer[3];
public:
    ~Group();
    Group();
    Buffer GetBuffer(INT32 index);

    //TODO:
    //ProcessingData  //showing data


};
 #endif // GROUP_H
