//
//  HUDElemetRed.h
//  Fighter
//
//  Created by shen xinxing on 1/10/14.
//
//

#ifndef __Fighter__HUDElemetRed__
#define __Fighter__HUDElemetRed__

#include <iostream>
#include "cocos2d.h"
#include "cocosbuilder/CocosBuilder.h"

class HUDElemetRed : public cocos2d::Layer, public cocosbuilder::CCBSelectorResolver, public cocosbuilder::CCBMemberVariableAssigner
{
public:
    CCB_STATIC_NEW_AUTORELEASE_OBJECT_WITH_INIT_METHOD(HUDElemetRed, create);
    
    HUDElemetRed();
    virtual ~HUDElemetRed();
    
    virtual cocos2d::SEL_MenuHandler onResolveCCBCCMenuItemSelector(cocos2d::Object * pTarget, const char * pSelectorName);
    virtual cocos2d::extension::Control::Handler onResolveCCBCCControlSelector(cocos2d::Object * pTarget, const char * pSelectorName);
    virtual cocos2d::SEL_CallFuncN onResolveCCBCCCallFuncSelector(cocos2d::Object * pTarget, const char* pSelectorName);
    virtual bool onAssignCCBMemberVariable(cocos2d::Object * pTarget, const char * pMemberVariableName, cocos2d::Node * pNode);
    
    virtual void onEnterTransitionDidFinish();
    
private:
    void playerChickNuke(cocos2d::Object *obj);
    void playerChickAddWeapon(cocos2d::Object *obj);
    void pauseGame(cocos2d::Object *obj);
    
};
#endif /* defined(__Fighter__HUDElemetRed__) */
