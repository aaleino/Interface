#include "OS.h"
#include "Event.h"

void OS::pressBegin(int x, int y) {
	PressEvent ev;
	ev.setx(x);
	ev.sety(y);
	for (auto & element : eventHandlers) {
		element->pressBegin(ev);
	}
}

void OS::pressMove(int x, int y) {
	PressEvent ev;
	ev.setx(x);
	ev.sety(y);
	for (auto & element : eventHandlers) {
		element->pressMove(ev);
	}
}

void OS::pressEnd(int x, int y) {
	PressEvent ev;
	ev.setx(x);
	ev.sety(y);
	for (auto & element : eventHandlers) {
		element->pressEnd(ev);
	}
}