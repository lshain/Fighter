//
//  PlayingBackgroundLayer.cpp
//  Fighter
//
//  Created by shen xinxing on 1/16/14.
//
//

#include "PlayingBackgroundLayer.h"

USING_NS_CC;

bool PlayingBackgroundLayer::init()
{
    //////////////////////////////
    // 1. super init first
    if ( !Layer::init() )
    {
        return false;
    }
    
    _sprites = Array::create();
    CC_SAFE_RETAIN(_sprites);
    
    return true;
}

PlayingBackgroundLayer::~PlayingBackgroundLayer()
{
    this->unscheduleUpdate();
    
    CC_SAFE_RELEASE_NULL(_sprites);
}

void PlayingBackgroundLayer::update(float delta)
{
    Object *item = nullptr;
    
    CCARRAY_FOREACH(_sprites, item)
    {
        Node *node = dynamic_cast<Node *>(item);
        
        Point position = node->getPosition() + Point(0.0, -1);
        node->setPosition(position);
        
        if(position.y <= -480)
        {
            node->setPosition(Point(0.0, 960.0));
        }
    }
}

void PlayingBackgroundLayer::onEnterTransitionDidFinish()
{
    Layer::onEnterTransitionDidFinish();
    
    this->scheduleUpdate();
}

void PlayingBackgroundLayer::setLevel(unsigned int level)
{
    if(_sprites->count())
    {
        Object *item = nullptr;
        
        CCARRAY_FOREACH(_sprites, item)
        {
            Node *node = dynamic_cast<Node *>(item);
            node->removeFromParentAndCleanup(true);
        }
        
        _sprites->removeAllObjects();
    }
    
    for(int i = 1; i < 4; i++)
    {
        Sprite *sprite = nullptr;
        
        if(i == 1)
        {
            sprite = Sprite::createWithSpriteFrameName(String::createWithFormat("dl_scene_%02u_a.png", level)->_string);
            sprite->setPosition(Point(0.0, 0.0));
            sprite->setAnchorPoint(Point(0.0, 0.0));
        }
        else if(i == 2)
        {
            sprite = Sprite::createWithSpriteFrameName(String::createWithFormat("dl_scene_%02u_b.png", level)->_string);
            sprite->setPosition(Point(0.0, 480.0));
            sprite->setAnchorPoint(Point(0.0, 0.0));
        }
        else if(i == 3)
        {
            sprite = Sprite::createWithSpriteFrameName(String::createWithFormat("dl_scene_%02u_c.png", level)->_string);
            sprite->setPosition(Point(0.0, 960.0));
            sprite->setAnchorPoint(Point(0.0, 0.0));
        }
        
        this->addChild(sprite);
        
        _sprites->addObject(sprite);
    }
}