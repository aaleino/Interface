Interface
=========

Event Handler and multiplatform OS functionality 


Installation
============

User creates and sets the instance of OS manually.

iOS example:

```C++
#import <UIKit/UIKit.h>
#import "AppDelegate.h"
#include "iOS.h"

std::shared_ptr<OS> OS::instance;

int main(int argc, char * argv[])
{
    @autoreleasepool {
        OS::setInstance(std::shared_ptr<OS>(new iOS));
        return UIApplicationMain(argc, argv, nil, NSStringFromClass([AppDelegate class]));
    }
}
```
