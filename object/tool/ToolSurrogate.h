#ifndef TOOLSURROGATE_H
#define TOOLSURROGATE_H
#include "Tool.h"

class ToolSurrogate{
private:
    Tool* tool;


public:

    ToolSurrogate():tool(0){}
    ToolSurrogate(const Tool& t):tool(t.copy()){}
    ToolSurrogate(const ToolSurrogate &t):tool(t.tool?t.tool->copy():0){}
    ToolSurrogate &operator=(const ToolSurrogate &t);
    ~ToolSurrogate(){delete tool;}

};

#endif // TOOLSURROGATE_H


