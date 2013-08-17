//
//  SKScrollPageView.h
//  SimpleKit
//
//  Created by SimpleKit on 12-6-12.
//  Copyright (c) 2012年 SimpleKit. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <QuartzCore/QuartzCore.h>

@protocol SKScrollPageViewDelegate;

@interface SKScrollPageView : UIView
@property (nonatomic, assign) id<SKScrollPageViewDelegate> delegate;
@property (nonatomic, assign, readonly) NSInteger numberOfPages;
@property (nonatomic, retain) UIImage *bgImage;
@property (nonatomic, assign) NSInteger viewCacheParameter;
@property (nonatomic, assign) NSInteger currentPage;
@end

@protocol SKScrollPageViewDelegate <NSObject>

@required
- (UIView *)scrollPageView:(SKScrollPageView *)scrollPageView viewForPageIndex:(NSInteger)index;
- (NSInteger)numberOfPagesInScrollPageView:(SKScrollPageView *)scrollPageView;
@optional
- (void)didInitComponentsWithScrollPageView:(SKScrollPageView *)scrollPage;
- (void)scrollPageView:(SKScrollPageView *)scrollPageView didChangePageAtIndex:(NSInteger)page;

@end
