//
//  EventHandler.h
//
//  Created by Aleksi Leino on 14/08/14.
//

#ifndef _EventHandler_h
#define _EventHandler_h

class PressEvent;
class PaintEvent;

class EventHandler {
  public:
    EventHandler() {}

    virtual void pressBegin(PressEvent &ev) {};
    virtual void pressMove(PressEvent &ev) {};
    virtual void pressEnd(PressEvent &ev) {};
    virtual void redraw(PaintEvent & ev) { }
};

#endif
