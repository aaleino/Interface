//
//  EventHandler.h
//
//  Created by Aleksi Leino on 14/08/14.
//

#ifndef _EventHandler_h
#define _EventHandler_h

class EventHandler {
  public:
    EventHandler() {}
    
    virtual void pressBegin(pressEvent &ev);
    virtual void pressEnd(pressEvent &ev);
}



#endif
