//
//  Gameplay.h
//  PeevedPenguins
//
//  Created by aditya on 7/2/14.
//  Copyright (c) 2014 Apportable. All rights reserved.
//

#import "CCSprite.h"
CCPhysicsNode *_physicsNode;
CCNode *_catapultArm;
CCNode *_levelNode;
CCNode *_contentNode;
CCNode *_pullbackNode;
//Declaring the node thet will drag back catapult and shoot
CCNode *_mouseJointNode;
CCPhysicsJoint *_mouseJoint;


@interface Gameplay : CCSprite


@end
