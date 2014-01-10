//
//  GamePlayingScene.cpp
//  Fighter
//
//  Created by shen xinxing on 1/10/14.
//
//

#include "GamePlayingScene.h"
#include "HUDLayer.h"

USING_NS_CC;

Scene* GamePlayingScene::createScene()
{
    // 'scene' is an autorelease object
    auto scene = Scene::create();
    
    // 'layer' is an autorelease object
    auto layer = GamePlayingScene::create();
    
    // add layer as a child to scene
    scene->addChild(layer);
    
    // return the scene
    return scene;
}


bool GamePlayingScene::init()
{
    //////////////////////////////
    // 1. super init first
    if ( !Layer::init() )
    {
        return false;
    }
    
    SpriteFrameCache::getInstance()->addSpriteFramesWithFile("UIHudAndDrop.plist");
    
    HUDLayer *layer = HUDLayer::create();
    layer->setPosition(Point(0.0, 0.0));
    this->addChild(layer);
    return true;
}

GamePlayingScene::~GamePlayingScene()
{
    SpriteFrameCache::getInstance()->removeSpriteFramesFromFile("UIHudAndDrop.plist");
}

#pragma Private Methods
