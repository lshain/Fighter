//
//  GamePlayingScene.h
//  Fighter
//
//  Created by shen xinxing on 1/10/14.
//
//

#ifndef __Fighter__GamePlayingScene__
#define __Fighter__GamePlayingScene__

#include <iostream>
#include "cocos2d.h"

class GamePlayingScene : public cocos2d::Layer
{
public:
    // there's no 'id' in cpp, so we recommend returning the class instance pointer
    static cocos2d::Scene* createScene();
    
    // Here's a difference. Method 'init' in cocos2d-x returns bool, instead of returning 'id' in cocos2d-iphone
    virtual bool init();
        
    // implement the "static create()" method manually
    CREATE_FUNC(GamePlayingScene);
};

#endif /* defined(__Fighter__GamePlayingScene__) */
