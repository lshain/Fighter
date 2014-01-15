//
//  HUDLayer.cpp
//  Fighter
//
//  Created by shen xinxing on 1/10/14.
//
//

#include "HUDLayer.h"
#include "HUDElemetRed.h"
#include "HUDElementRedLoader.h"
#include "GameMacro.h"

USING_NS_CC;
USING_NS_CC_EXT;
USING_NS_CC_BUILDER;

bool HUDLayer::init()
{
    //////////////////////////////
    // 1. super init first
    if ( !Layer::init() )
    {
        return false;
    }
    
    HUDElemetRed *elemetRed = nullptr;
    
    NODE_CREATE_BY_CCB_START("HUDElemetRed", HUDElementRedLoader::loader(), "HUDElemetRed.ccbi", HUDElemetRed *, elemetRed);
    // create a scene. it's an autorelease object
    this->addChild(elemetRed);
    NODE_CREATE_BY_CCB_END;
    elemetRed->setPoint(0);
    return true;
}