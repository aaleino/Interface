#ifndef _PAINTEVENT_H_
#define _PAINTEVENT_H_

#include "Event.h"

class PaintEvent : public Event {
 public:
  PaintEvent() {};
  
  void dispatch(EventHandler & evh) {
    evh.redraw(*this);
  }
  
 private:
};
