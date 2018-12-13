#ifndef CIRCLETOOL_H
#define CIRCLETOOL_H
#include "Tool.h"

class CirCleTool:public Tool{
private:
public:
    virtual Tool* copy() const;

}
#endif // CIRCLETOOL_H
