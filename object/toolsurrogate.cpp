#include "tool/ToolSurrogate.h"

ToolSurrogate &ToolSurrogate::operator =(const ToolSurrogate& t){
    if(this!=t){
        delete tool;
       t = t.tool->copy();
    }
    return *this;
}
