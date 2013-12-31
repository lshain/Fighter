//
//  AirplaneSelectSceneLoader.h
//  Fighter
//
//  Created by shen xinxing on 12/31/13.
//
//

#ifndef Fighter_AirplaneSelectSceneLoader_h
#define Fighter_AirplaneSelectSceneLoader_h

#include "AirplaneSelectScene.h"

class AirplaneSelectSceneLoader : public cocosbuilder::LayerLoader {
public:
    CCB_STATIC_NEW_AUTORELEASE_OBJECT_METHOD(AirplaneSelectSceneLoader, loader);
    
protected:
    CCB_VIRTUAL_NEW_AUTORELEASE_CREATECCNODE_METHOD(AirplaneSelectScene);
};

#endif
