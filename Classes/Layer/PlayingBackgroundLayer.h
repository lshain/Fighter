//
//  PlayingBackgroundLayer.h
//  Fighter
//
//  Created by shen xinxing on 1/16/14.
//
//

#ifndef __Fighter__PlayingBackgroundLayer__
#define __Fighter__PlayingBackgroundLayer__

#include <iostream>
#include "cocos2d.h"

class PlayingBackgroundLayer : public cocos2d::Layer
{
public:
    
    // Here's a difference. Method 'init' in cocos2d-x returns bool, instead of returning 'id' in cocos2d-iphone
    virtual bool init();
    
    // implement the "static create()" method manually
    CREATE_FUNC(PlayingBackgroundLayer);
    ~PlayingBackgroundLayer();
    
    void update(float delta);
    
    void setLevel(unsigned int level);
    
    virtual void onEnterTransitionDidFinish();

private:
    
    cocos2d::Array *_sprites;
};
#endif /* defined(__Fighter__PlayingBackgroundLayer__) */
