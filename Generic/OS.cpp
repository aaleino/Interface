#include "OS.h"
#include "Event.h"
#include "PaintEvent.h"

void OS::pressBegin(int x, int y, int identifier) {
	PressEvent ev;
	ev.setx(x);
	ev.sety(y);
    ev.setIdentifier(identifier);
	for (auto & element : eventHandlers) {
		element->pressBegin(ev);
	}
}

void OS::pressMove(int x, int y, int identifier) {
	PressEvent ev;
	ev.setx(x);
	ev.sety(y);
    ev.setIdentifier(identifier);
	for (auto & element : eventHandlers) {
		element->pressMove(ev);
	}
}

void OS::pressEnd(int x, int y, int identifier) {
	PressEvent ev;
	ev.setx(x);
	ev.sety(y);
    ev.setIdentifier(identifier);
	for (auto & element : eventHandlers) {
		element->pressEnd(ev);
	}
}

void OS::redraw() {
  PaintEvent ev;
  for (auto & element : eventHandlers) {
    ev.dispatch(element);
  }
}
