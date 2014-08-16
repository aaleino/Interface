//
//  EventHandler.h
//
//  Created by Aleksi Leino on 14/08/14.
//

#ifndef _EventHandler_h
#define _EventHandler_h

#include "Event.h"

class EventHandler {
  public:
    EventHandler() {}
    
    virtual void pressBegin(PressEvent &ev);
	virtual void pressMove(PressEvent &ev);
    virtual void pressEnd(PressEvent &ev);
    
    // TODO: PaintEvent
    virtual void redraw();
    
};



#endif
