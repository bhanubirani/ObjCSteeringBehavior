//
//  GPIArrive.h
//  ObjCSteeringBehaviorDemo
//
//  Created by yangboz on 14-8-7.
//  Copyright (c) 2014年 GODPAPER. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol GPIArrive <NSObject>
@required
    @property(retain,nonatomic) NSNumber *arriveThreshold;
    -(void)arrive:(Vector2D*)target;
@end
