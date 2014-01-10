//
//  HUDElementRedLoader.h
//  Fighter
//
//  Created by shen xinxing on 1/10/14.
//
//

#ifndef Fighter_HUDElementRedLoader_h
#define Fighter_HUDElementRedLoader_h

#include "HUDElemetRed.h"

class HUDElementRedLoader : public cocosbuilder::LayerLoader {
public:
    CCB_STATIC_NEW_AUTORELEASE_OBJECT_METHOD(HUDElementRedLoader, loader);
    
protected:
    CCB_VIRTUAL_NEW_AUTORELEASE_CREATECCNODE_METHOD(HUDElemetRed);
};

#endif
