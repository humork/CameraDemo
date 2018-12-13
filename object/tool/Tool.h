#ifndef TOOL_H
#define TOOL_H

#include "../../custom/StdInc.h"
#include "../../ConfigStruct.h"

class Tool{
private:
    QString tool_name;
    INT32 tool_id;
    INT32 top_value;
    INT32 bottom_value;
    INT32 sensitivity;


public:
    Tool();
    virtual Tool* copy() const = 0;
    virtual ~Tool();
};


#endif // TOOL_H
