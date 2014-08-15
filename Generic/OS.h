//
//  OS.h
//
//  Created by Aleksi Leino on 14/08/14.
//

#ifndef IpadInterface_OS_h
#define IpadInterface_OS_h

#include <vector>
#include <memory>
#include "EventHandler.h"


class OS {
   public:
      OS() {}
   
   void addHandler(std::shared_ptr <EventHandler> handler) {eventHandlers.push_back(handler);}
   void pressBegin(int x, int y);
   void pressMove(int x, int y);
   void pressEnd(int x, int y);

<<<<<<< HEAD
   virtual int getScreenWidth() { return 0; }
   virtual int getScreenheight() { return 0; }
=======
>>>>>>> origin/master
   
   static void setInstance(std::shared_ptr <OS> i) {
	   instance = i;
   }

   static std::shared_ptr <OS> getInstance() {
	   return instance;
   }

   private:
      std::vector < std::shared_ptr <EventHandler> > eventHandlers;

   static std::shared_ptr <OS> instance;
};


#endif
