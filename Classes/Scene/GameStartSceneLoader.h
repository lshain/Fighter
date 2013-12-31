//
//  GameStartSceneLoader.h
//  Fighter
//
//  Created by shen xinxing on 12/31/13.
//
//

#ifndef Fighter_GameStartSceneLoader_h
#define Fighter_GameStartSceneLoader_h

#include "GameStartScene.h"

class GameStartSceneLoader : public cocosbuilder::LayerLoader {
public:
    CCB_STATIC_NEW_AUTORELEASE_OBJECT_METHOD(GameStartSceneLoader, loader);
    
protected:
    CCB_VIRTUAL_NEW_AUTORELEASE_CREATECCNODE_METHOD(GameStartScene);
};

#endif
