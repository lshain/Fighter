//
//  GameStartScene.cpp
//  Fighter
//
//  Created by shen xinxing on 12/24/13.
//
//

#include "GameStartScene.h"
#include "GameMacro.h"
#include "AirplaneSelectScene.h"
#include "AirplaneSelectSceneLoader.h"

USING_NS_CC;
USING_NS_CC_EXT;
USING_NS_CC_BUILDER;

GameStartScene::GameStartScene()
{
    
}

GameStartScene::~GameStartScene()
{
    
}

SEL_MenuHandler GameStartScene::onResolveCCBCCMenuItemSelector(Object * pTarget, const char * pSelectorName) {
    
    CCB_SELECTORRESOLVER_CCMENUITEM_GLUE(this, "StartGame", GameStartScene::startGame);
    CCB_SELECTORRESOLVER_CCMENUITEM_GLUE(this, "Record", GameStartScene::openRanking);
    CCB_SELECTORRESOLVER_CCMENUITEM_GLUE(this, "MoreGame", GameStartScene::openMoreGame);
    
    return NULL;
}

Control::Handler GameStartScene::onResolveCCBCCControlSelector(Object * pTarget, const char * pSelectorName) {
    return NULL;
}


SEL_CallFuncN GameStartScene::onResolveCCBCCCallFuncSelector(Object * pTarget, const char* pSelectorName)
{
    return NULL;
}

bool GameStartScene::onAssignCCBMemberVariable(Object * pTarget, const char * pMemberVariableName, Node * pNode) {
    
    
    return false;
}

void GameStartScene::startGame(cocos2d::Object *sender)
{
    AirplaneSelectScene *airplaneSelectScene = nullptr;
    
    NODE_CREATE_BY_CCB_START("AirplaneSelectScene", AirplaneSelectSceneLoader::loader(), "PlayerSelect.ccbi", AirplaneSelectScene *, airplaneSelectScene);
    // create a scene. it's an autorelease object
    auto scene = Scene::create();//HelloWorld::createScene();
    scene->addChild(airplaneSelectScene);
    
    Director::getInstance()->replaceScene(scene);
    NODE_CREATE_BY_CCB_END;
}

void GameStartScene::openRanking(cocos2d::Object *sender)
{
    
}

void GameStartScene::openMoreGame(cocos2d::Object *sender)
{
    
}

void GameStartScene::onEnterTransitionDidFinish()
{
    Layer::onEnterTransitionDidFinish();
}