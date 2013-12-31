//
//  GameStartScene.h
//  Fighter
//
//  Created by shen xinxing on 12/24/13.
//
//

#ifndef __Fighter__GameStartScene__
#define __Fighter__GameStartScene__

#include <iostream>
#include "cocos2d.h"
#include "cocosbuilder/CocosBuilder.h"

class GameStartScene : public cocos2d::Layer, public cocosbuilder::CCBSelectorResolver, public cocosbuilder::CCBMemberVariableAssigner
{
public:
    CCB_STATIC_NEW_AUTORELEASE_OBJECT_WITH_INIT_METHOD(GameStartScene, create);
    
    GameStartScene();
    virtual ~GameStartScene();
    
    virtual cocos2d::SEL_MenuHandler onResolveCCBCCMenuItemSelector(cocos2d::Object * pTarget, const char * pSelectorName);
    virtual cocos2d::extension::Control::Handler onResolveCCBCCControlSelector(cocos2d::Object * pTarget, const char * pSelectorName);
    virtual cocos2d::SEL_CallFuncN onResolveCCBCCCallFuncSelector(cocos2d::Object * pTarget, const char* pSelectorName);
    virtual bool onAssignCCBMemberVariable(cocos2d::Object * pTarget, const char * pMemberVariableName, cocos2d::Node * pNode);
    
    virtual void onEnterTransitionDidFinish();
    
private:
    void startGame(cocos2d::Object *sender);
    void openRanking(cocos2d::Object *sender);
    void openMoreGame(cocos2d::Object *sender);
    
};

#endif /* defined(__Fighter__GameStartScene__) */
