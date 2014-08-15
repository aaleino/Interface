
#ifndef _EVENT_H_
#define _EVENT_H_

class Event {
    public:
		Event() {};

};

// For mouse and touch
// TODO: inherit MouseEvent and TouchEvent from this if needed
class PressEvent : public Event {
    public:
		PressEvent() {};
		int getx() { return loc_x; }
		int gety() { return loc_y; }

		void setx(int x) { loc_x = x; }
		void sety(int y) { loc_y = y; }

   private: 
		int loc_x, loc_y;
        int identifier; // for multiple simultaneous presses
};

#endif
