//
//  OS.h
//
//  Created by Aleksi Leino on 14/08/14.
//

#ifndef _OS_h
#define _OS_h

#include <vector>
#include <memory>
#include "EventHandler.h"
#include "Context.h"

class OS {
   public:
      OS() {}
   
   void addHandler(std::shared_ptr <EventHandler> handler) {eventHandlers.push_back(handler);}
   void pressBegin(int x, int y);
   void pressMove(int x, int y);
   void pressEnd(int x, int y);
   
   virtual int getScreenWidth() { return 0; }
   virtual int getScreenHeight() { return 0; }

   virtual std::unique_ptr <canvas::Context> getScreenContext() { return nullptr; }
   virtual std::unique_ptr <canvas::Context> getMemoryContext() { return nullptr; }

   static void setInstance(std::shared_ptr <OS> i) {
	   instance = i;
   }

   static std::shared_ptr <OS> getInstance() {
	   return instance;
   }
   
    static std::shared_ptr <OS> instance;
    
   private:
      std::vector < std::shared_ptr <EventHandler> > eventHandlers;


};


#endif
