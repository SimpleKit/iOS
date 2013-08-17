//
//  SKSpringBoardView.h
//  SimpleKit
//
//  Created by SimpleKit on 12-6-12.
//  Copyright (c) 2012年 SimpleKit. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <QuartzCore/QuartzCore.h>
#import "SKSpringBoardIcon.h"
#import "SKScrollPageView.h"

@protocol SKSpringBoardViewDelegate;

@interface SKSpringBoardView : UIView <SKScrollPageViewDelegate>

@property (nonatomic, assign) id<SKSpringBoardViewDelegate> delegate;
@property (nonatomic, retain) UIImage *backgroundImage;

- (void)reloadView;

@end

@protocol SKSpringBoardViewDelegate <NSObject>

@required
- (NSInteger)numberOfIconsInSpringBoard:(SKSpringBoardView *)springBoard;
- (SKSpringBoardIcon *)springBoard:(SKSpringBoardView *)springBoard iconForIndexAtIndex:(NSInteger)index;

@end
