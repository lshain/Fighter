//
//  HUDLayer.h
//  Fighter
//
//  Created by shen xinxing on 1/10/14.
//
//

#ifndef __Fighter__HUDLayer__
#define __Fighter__HUDLayer__

#include <iostream>
#include "cocos2d.h"

class HUDLayer : public cocos2d::Layer
{
public:
    
    // Here's a difference. Method 'init' in cocos2d-x returns bool, instead of returning 'id' in cocos2d-iphone
    virtual bool init();
    
    // implement the "static create()" method manually
    CREATE_FUNC(HUDLayer);
};

#endif /* defined(__Fighter__HUDLayer__) */
