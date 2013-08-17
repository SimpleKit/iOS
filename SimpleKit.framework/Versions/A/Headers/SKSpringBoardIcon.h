//
//  SKSpringBoardIcon.h
//  SimpleKit
//
//  Created by SimpleKit on 12-6-12.
//  Copyright (c) 2012年 SimpleKit. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <QuartzCore/QuartzCore.h>

@protocol SKSpringBoardIconDelegate;

@interface SKSpringBoardIcon : UIView

@property (nonatomic, assign) id<SKSpringBoardIconDelegate> delegate;
@property (nonatomic, retain) UIImage *iconImage;
@property (nonatomic, copy) NSString *iconTitle;
@property (nonatomic, assign) CGRect iconImageRect;

- (id)initWithOrigin:(CGPoint)origin iconImage:(UIImage *)iconImage iconTitle:(NSString *)iconTitle;

- (void)addTarget:(id)target actionForClick:(SEL)action;

@end

@protocol SKSpringBoardIconDelegate <NSObject>

@optional

- (void)didInitComponentsWithSpringBoardIcon:(SKSpringBoardIcon *)icon;

@end
