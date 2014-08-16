//
//  Example.h
//  IpadInterface
//
//  Created by Aleksi Leino on 15/08/14.
//

#ifndef _Example_h
#define _Example_h

#include <vector>


class Example : public EventHandler {
public:
	Example();
    
    void pressBegin(PressEvent &ev);
	void pressMove(PressEvent &ev){};
    void pressEnd(PressEvent &ev){};
    
  
    void redraw();
    
private:
    
    int x, y;

};

#endif
