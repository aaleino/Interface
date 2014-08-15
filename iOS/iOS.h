#ifndef _IOS_H_
#define _IOS_H_

// class iOS
#include <memory.h>
#include "../Generic/OS.h"
#include "ContextQuartz2D.h"

class iOS : public OS {
  public:
    iOS() {}
    
    std::unique_ptr <canvas::Context> getScreenContext() { return nullptr; }
    std::shared_ptr <canvas::Context> createMemoryContext(unsigned int width, unsigned int height) { return std::shared_ptr <canvas::Context> ((canvas::Context *)new canvas::ContextQuartz2D(width, height)); }

};

#endif
