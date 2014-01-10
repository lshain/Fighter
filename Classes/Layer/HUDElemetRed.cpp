//
//  HUDElemetRed.cpp
//  Fighter
//
//  Created by shen xinxing on 1/10/14.
//
//

#include "HUDElemetRed.h"
#include "GameMacro.h"

USING_NS_CC;
USING_NS_CC_EXT;
USING_NS_CC_BUILDER;

HUDElemetRed::HUDElemetRed()
{
    
}

HUDElemetRed::~HUDElemetRed()
{
    
}

SEL_MenuHandler HUDElemetRed::onResolveCCBCCMenuItemSelector(Object * pTarget, const char * pSelectorName) {
    
//    CCB_SELECTORRESOLVER_CCMENUITEM_GLUE(this, "StartGame", GameStartScene::startGame);
//    CCB_SELECTORRESOLVER_CCMENUITEM_GLUE(this, "Record", GameStartScene::openRanking);
//    CCB_SELECTORRESOLVER_CCMENUITEM_GLUE(this, "MoreGame", GameStartScene::openMoreGame);
    
    return NULL;
}

Control::Handler HUDElemetRed::onResolveCCBCCControlSelector(Object * pTarget, const char * pSelectorName) {
    return NULL;
}


SEL_CallFuncN HUDElemetRed::onResolveCCBCCCallFuncSelector(Object * pTarget, const char* pSelectorName)
{
    return NULL;
}

bool HUDElemetRed::onAssignCCBMemberVariable(Object * pTarget, const char * pMemberVariableName, Node * pNode) {
    
    
    return false;
}

void HUDElemetRed::onEnterTransitionDidFinish()
{
    Layer::onEnterTransitionDidFinish();
}