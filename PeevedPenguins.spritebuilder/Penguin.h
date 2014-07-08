//
//  Penguin.h
//  PeevedPenguins
//
//  Created by aditya on 7/1/14.
//  Copyright (c) 2014 Apportable. All rights reserved.
//

#import "CCSprite.h"

@interface Penguin : CCSprite

//property to chek if penguin has been launched, avoid it from being lauc=nched while
//background is still scrolling
@property (nonatomic, assign) BOOL launched;

@end
