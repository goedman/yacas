
#ifndef __elfdll_h__
#define __elfdll_h__

#include "../../lispplugin.h"

class LtDll : public LispDllBase
{
public:
    LtDll() : handle(NULL) {}
    virtual ~LtDll();
    virtual LispInt Open(LispCharPtr aDllFile, LispEnvironment& aEnvironment);
    virtual LispInt Close(LispEnvironment& aEnvironment);
    virtual LispPluginBase* GetPlugin(void);
private:
    void *handle;
};

#endif
