
// class iOS

#include "../Generic/OS.h"

class iOS : public OS {
  public:
    class iOS() {}
  
    void pressBegin(int x, int y);
    void pressMoved(int x, int y);
    void pressEnd(int x, int y);
};

