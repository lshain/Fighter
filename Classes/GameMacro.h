//
//  GameMacro.h
//  Fighter
//
//  Created by shen xinxing on 12/24/13.
//
//

#ifndef Fighter_GameMacro_h
#define Fighter_GameMacro_h

#define appDelegate ((AppDelegate *)cocos2d::Application::getInstance())

#define USING_NS_CC_BUILDER using namespace cocosbuilder

#define NODE_CREATE_BY_CCB_START(CLASSNAME, LOADER, FILENAME, VARIABLETYPE, VARIABLE) \
NodeLoaderLibrary * ccNodeLoaderLibrary = NodeLoaderLibrary::newDefaultNodeLoaderLibrary(); \
ccNodeLoaderLibrary->registerNodeLoader(CLASSNAME, LOADER); \
CCBReader * ccbReader = new CCBReader(ccNodeLoaderLibrary); \
VARIABLE = dynamic_cast<VARIABLETYPE>(ccbReader->readNodeGraphFromFile(FILENAME));

#define NODE_CREATE_BY_CCB_END ccbReader->release();

#endif
