//
//  touchInterface.h
//  IpadInterface
//
//  Created by Mikael Rekola on 12/07/14.
//  Copyright (c) 2014 mral. All rights reserved.
//

#ifndef IpadInterface_touchInterface_h
#define IpadInterface_touchInterface_h

void touchesBegin(int x, int y, int identifier);

void touchesEnded(int x, int y, int identifier);

void touchesMoved(int x, int y, int identifier);

void touchesCancelled();

#endif
