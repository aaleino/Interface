#include "Example.h"

#include "OS.h"
#include "Context.h"
#include "Color.h"

// Example

Example::Example()  {
    x = 100;
    y = 100;
}

void Example::pressBegin(PressEvent & ev) {
    x = ev.getx();
    y = ev.gety();
    ev.requestRedraw();
}

void Example::redraw(PaintEvent & ev) {
    std::unique_ptr <canvas::Context> graphicscontext = (OS::getInstance())->getScreenContext();
    canvas::Color red(255,0,0);
    canvas::Style style(red);
    graphicscontext->strokeStyle = style;
    
    int boxwidth = 100;
    int boxheight = 100;

    graphicscontext->fillRect(x, y, boxwidth, boxheight);
    
}

