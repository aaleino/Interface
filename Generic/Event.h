#ifndef _EVENT_H_
#define _EVENT_H_

#include "EventHandler.h"

class Event {
 public:
  Event() {};
  virtual ~Event() { }
  
  virtual void dispatch(EventHandler & evh) = 0;

  void setIsHandled() { is_handled = true; }
  void requestRedraw() { redraw_requested = true; }  
  
  bool isHandled() const { return is_handled; }
  bool isRedrawRequested() const { return redraw_requested; }

 private:
  bool is_handled = false;
  bool redraw_requested = false;
};

// For mouse and touch
// TODO: inherit MouseEvent and TouchEvent from this if needed
class PressEvent : public Event {
    public:
		PressEvent() {};
		int getx() { return loc_x; }
		int gety() { return loc_y; }
        int getIdentifier() { return identifier; }

		void setx(int x) { loc_x = x; }
		void sety(int y) { loc_y = y; }
        void setIdentifier(int _identifier) { identifier = _identifier;}

	void dispatch(EventHandler & evh) {
	  evh.pressMove(*this);
	}

   private:
	int loc_x, loc_y;
        int identifier; // for multiple simultaneous presses
};

#endif
