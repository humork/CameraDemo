#ifndef BUFFER_H
#define BUFFER_H
#include "ConfigStruct.h"

class Buffer{
private:
    char* buffer;
    INT32 buffer_status;
public:
    bool CreateBuffer(int num);
    void DeleteBuffer();

    bool SetORI_PIC(ORI_PIC*);
    bool SetSTATIC_RES(STATIC_RES*);
    bool SetRES_HEAD(RES_HEAD*);

    PIC_INFO* GetPIC_INFO();
}

#endif // BUFFER_H
