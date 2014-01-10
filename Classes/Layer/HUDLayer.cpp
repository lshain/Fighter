//
//  HUDLayer.cpp
//  Fighter
//
//  Created by shen xinxing on 1/10/14.
//
//

#include "HUDLayer.h"

USING_NS_CC;

Scene* HUDLayer::createScene()
{
    // 'scene' is an autorelease object
    auto scene = Scene::create();
    
    // 'layer' is an autorelease object
    auto layer = HUDLayer::create();
    
    // add layer as a child to scene
    scene->addChild(layer);
    
    // return the scene
    return scene;
}


bool HUDLayer::init()
{
    //////////////////////////////
    // 1. super init first
    if ( !Layer::init() )
    {
        return false;
    }
    
    return true;
}