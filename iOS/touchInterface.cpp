//
//  TouchInterface.cpp
//  IpadInterface
//
//  Created by Mikael Rekola on 12/07/14.
//  Copyright (c) 2014 mral. All rights reserved.
//

#include "TouchInterface.h"
#include "iOS.h"


void touchesBegin(int x, int y, int identifier) {
    OS::getInstance()->pressBegin(x, y, identifier);
}

void touchesEnded(int x, int y, int identifier) {
   OS::getInstance()->pressEnd(x, y, identifier);
}

void touchesMoved(int x, int y, int identifier) {
   OS::getInstance()->pressMove(x, y, identifier);
}

void touchesCancelled() {
 //  OS::getInstance()->pressBegin(x, y);
}
