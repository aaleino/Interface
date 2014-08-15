
#ifndef _IOS_H_
#define _IOS_H_

// class iOS

#include "../Generic/OS.h"
#include "ContextQuartz2D.h"

class iOS : public OS {
  public:
    iOS() {}
    
    std::unique_ptr <canvas::Context> getScreenContext() { return nullptr; }
    std::unique_ptr <canvas::Context> getMemoryContext(int width, int height) { return nullptr; }

};

#endif