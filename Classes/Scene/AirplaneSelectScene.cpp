//
//  AirplaneSelectScene.cpp
//  Fighter
//
//  Created by shen xinxing on 12/31/13.
//
//

#include "AirplaneSelectScene.h"
#include "GameMacro.h"

USING_NS_CC;
USING_NS_CC_EXT;
USING_NS_CC_BUILDER;

AirplaneSelectScene::AirplaneSelectScene()
{
    
}

AirplaneSelectScene::~AirplaneSelectScene()
{
    
}

SEL_MenuHandler AirplaneSelectScene::onResolveCCBCCMenuItemSelector(Object * pTarget, const char * pSelectorName) {
    
//    CCB_SELECTORRESOLVER_CCMENUITEM_GLUE(this, "StartGame", GameStartScene::startGame);
//    CCB_SELECTORRESOLVER_CCMENUITEM_GLUE(this, "Record", GameStartScene::openRanking);
    CCB_SELECTORRESOLVER_CCMENUITEM_GLUE(this, "selectAirPlane", AirplaneSelectScene::selectAirPlane);
    
    return NULL;
}

Control::Handler AirplaneSelectScene::onResolveCCBCCControlSelector(Object * pTarget, const char * pSelectorName) {
    return NULL;
}


SEL_CallFuncN AirplaneSelectScene::onResolveCCBCCCallFuncSelector(Object * pTarget, const char* pSelectorName)
{
    return NULL;
}

bool AirplaneSelectScene::onAssignCCBMemberVariable(Object * pTarget, const char * pMemberVariableName, Node * pNode) {
    
    
    return false;
}

void AirplaneSelectScene::onEnterTransitionDidFinish()
{
    Layer::onEnterTransitionDidFinish();
}

void AirplaneSelectScene::selectAirPlane(cocos2d::Object *sender)
{
    Node *airplane = dynamic_cast<Node *>(sender);
    
    CCLOG("tag = %d", airplane->getTag());
}