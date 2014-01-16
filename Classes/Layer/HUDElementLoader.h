//
//  HUDElementRedLoader.h
//  Fighter
//
//  Created by shen xinxing on 1/10/14.
//
//

#ifndef Fighter_HUDElementLoader_h
#define Fighter_HUDElementLoader_h

#include "HUDElemet.h"

class HUDElementLoader : public cocosbuilder::LayerLoader {
public:
    CCB_STATIC_NEW_AUTORELEASE_OBJECT_METHOD(HUDElementLoader, loader);
    
protected:
    CCB_VIRTUAL_NEW_AUTORELEASE_CREATECCNODE_METHOD(HUDElemet);
};

#endif
