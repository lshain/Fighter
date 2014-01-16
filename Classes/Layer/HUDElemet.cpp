//
//  HUDElemetRed.cpp
//  Fighter
//
//  Created by shen xinxing on 1/10/14.
//
//

#include "HUDElemet.h"
#include "GameMacro.h"

USING_NS_CC;
USING_NS_CC_EXT;
USING_NS_CC_BUILDER;

HUDElemet::HUDElemet()
:_pointLabel(nullptr)
{
    
}

HUDElemet::~HUDElemet()
{
    
}

SEL_MenuHandler HUDElemet::onResolveCCBCCMenuItemSelector(Object * pTarget, const char * pSelectorName) {
    
    CCB_SELECTORRESOLVER_CCMENUITEM_GLUE(this, "playerChickNuke", HUDElemet::playerChickNuke);
    CCB_SELECTORRESOLVER_CCMENUITEM_GLUE(this, "playerChickAddWeapon", HUDElemet::playerChickAddWeapon);
    CCB_SELECTORRESOLVER_CCMENUITEM_GLUE(this, "pauseGame", HUDElemet::pauseGame);
    
    return NULL;
}

Control::Handler HUDElemet::onResolveCCBCCControlSelector(Object * pTarget, const char * pSelectorName) {
    return NULL;
}


SEL_CallFuncN HUDElemet::onResolveCCBCCCallFuncSelector(Object * pTarget, const char* pSelectorName)
{
    return NULL;
}

bool HUDElemet::onAssignCCBMemberVariable(Object * pTarget, const char * pMemberVariableName, Node * pNode) {
    
    CCB_MEMBERVARIABLEASSIGNER_GLUE(this, "pointLabel", LabelTTF *, _pointLabel);
    
    return false;
}

void HUDElemet::onEnterTransitionDidFinish()
{
    Layer::onEnterTransitionDidFinish();
}

void HUDElemet::setPoint(unsigned int point)
{
    _pointLabel->setString(String::createWithFormat("%d", point)->getCString());
}

#pragma private Methods
void HUDElemet::playerChickNuke(cocos2d::Object *obj)
{
    
}

void HUDElemet::playerChickAddWeapon(cocos2d::Object *obj)
{
    
}

void HUDElemet::pauseGame(cocos2d::Object *obj)
{
    
}