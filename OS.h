//
//  OS.h
//
//  Created by Aleksi Leino on 14/08/14.
//

#ifndef IpadInterface_OS_h
#define IpadInterface_OS_h

#include <vector>
#include "EventHandler.h"

class OS {
   public:
      OS() {}
   
   void addHandler(shader_ptr <EventHandler> handler) {eventHandler.push_back(handler);}
   
   private:
      std::vector <std::shared_ptr<EventHandler>> eventHandlers;
}


#endif
