#include "AppDelegate.h"
#include "HelloWorldScene.h"
#include "GameStartScene.h"
#include "GameStartSceneLoader.h"
#include "GameMacro.h"

USING_NS_CC;
USING_NS_CC_BUILDER;

AppDelegate::AppDelegate() {

}

AppDelegate::~AppDelegate() 
{
    SpriteFrameCache::getInstance()->removeSpriteFramesFromFile("Background1.plist");
    SpriteFrameCache::getInstance()->removeSpriteFramesFromFile("Background2.plist");
    SpriteFrameCache::getInstance()->removeSpriteFramesFromFile("Background3.plist");
    SpriteFrameCache::getInstance()->removeSpriteFramesFromFile("mainMenu.plist");

}

bool AppDelegate::applicationDidFinishLaunching() {
    // initialize director
    auto director = Director::getInstance();
    auto eglView = EGLView::getInstance();

    director->setOpenGLView(eglView);
	
    // turn on display FPS
    director->setDisplayStats(true);

    // set FPS. the default value is 1.0/60 if you don't call this
    director->setAnimationInterval(1.0 / 60);

    auto pFileUtils = FileUtils::getInstance();
    std::vector<std::string> searchPaths;
    
    if (director->getWinSize().width > 320)
    {
        searchPaths.push_back("images/hd");
        
        director->setContentScaleFactor(2.0);
    }
    else
    {
        searchPaths.push_back("images/sd");
        
    }
    
    searchPaths.push_back("ccb");
    pFileUtils->setSearchPaths(searchPaths);
    
    auto screenSize = eglView->getFrameSize();
    
    if((screenSize.width / 320.0) > (screenSize.height / 480.0))
        eglView->setDesignResolutionSize(320.0,480.0, ResolutionPolicy::SHOW_ALL);
    else
        eglView->setDesignResolutionSize(320.0, 480.0, ResolutionPolicy::FIXED_WIDTH);
    
    SpriteFrameCache::getInstance()->addSpriteFramesWithFile("Background1.plist");
    SpriteFrameCache::getInstance()->addSpriteFramesWithFile("Background2.plist");
    SpriteFrameCache::getInstance()->addSpriteFramesWithFile("Background3.plist");
    SpriteFrameCache::getInstance()->addSpriteFramesWithFile("mainMenu.plist");

    GameStartScene *gameStartScene = nullptr;
    
    NODE_CREATE_BY_CCB_START("GameStartScene", GameStartSceneLoader::loader(), "MainScene.ccbi", GameStartScene *, gameStartScene);
    // create a scene. it's an autorelease object
    auto scene = Scene::create();//HelloWorld::createScene();
    scene->addChild(gameStartScene);
    // run
    director->runWithScene(scene);
    
    NODE_CREATE_BY_CCB_END;

    return true;
}

// This function will be called when the app is inactive. When comes a phone call,it's be invoked too
void AppDelegate::applicationDidEnterBackground() {
    Director::getInstance()->stopAnimation();

    // if you use SimpleAudioEngine, it must be pause
    // SimpleAudioEngine::sharedEngine()->pauseBackgroundMusic();
}

// this function will be called when the app is active again
void AppDelegate::applicationWillEnterForeground() {
    Director::getInstance()->startAnimation();

    // if you use SimpleAudioEngine, it must resume here
    // SimpleAudioEngine::sharedEngine()->resumeBackgroundMusic();
}
