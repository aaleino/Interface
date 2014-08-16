#include "../Generic/Event.h"
#include "../Generic/EventHandler.h"

#include "Example.h"
#include "OS.h"
#include "Context.h"
// Example


void Example::pressBegin(PressEvent &ev) {
    
    
};

void Example::redraw() {
    std::unique_ptr <canvas::Context> graphicscontext = (OS::getInstance())->getScreenContext();
    graphicscontext->fillRect(100, 100, 100, 100);
};

