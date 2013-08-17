//
//  SKTierViewController.h
//  SimpleKit
//
//  Created by simplekit.lookook.com on 13-1-21.
//  Copyright (c) 2012年 lookook.com. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SKTierViewController : UIViewController

@property (nonatomic, retain) UIViewController *centerController;
@property (nonatomic, retain) UIViewController *leftController;
@property (nonatomic, retain) UIViewController *rightController;
@property (nonatomic, retain) UIViewController *topController;
@property (nonatomic, retain) UIViewController *bottomController;
@property (nonatomic, assign) CGRect contentRect;

- (id)initWithCenterController:(UIViewController *)centerController contentRect:(CGRect)contentRect;

- (void)showLeftControllerWithRatio:(CGFloat)ratio
                              duration:(CGFloat)duration
                        bounceDuration:(CGFloat)bounceDuration
                               animate:(BOOL)animate
                                bounce:(BOOL)bounce
                            completion:(void (^)(BOOL finished))completion;

- (void)showBottomControllerWithRatio:(CGFloat)ratio
                              duration:(CGFloat)duration
                        bounceDuration:(CGFloat)bounceDuration
                               animate:(BOOL)animate
                                bounce:(BOOL)bounce
                            completion:(void (^)(BOOL finished))completion;

- (void)showRightControllerWithRatio:(CGFloat)ratio
                             duration:(CGFloat)duration
                       bounceDuration:(CGFloat)bounceDuration
                              animate:(BOOL)animate
                               bounce:(BOOL)bounce
                           completion:(void (^)(BOOL finished))completion;

- (void)showTopControllerWithRatio:(CGFloat)ratio
                            duration:(CGFloat)duration
                      bounceDuration:(CGFloat)bounceDuration
                             animate:(BOOL)animate
                              bounce:(BOOL)bounce
                          completion:(void (^)(BOOL finished))completion;

- (void)showLeftControllerWithRatio:(CGFloat)ratio
                            duration:(CGFloat)duration
                      bounceDuration:(CGFloat)bounceDuration
                         contentSize:(CGSize)size
                             animate:(BOOL)animate
                              bounce:(BOOL)bounce
                          completion:(void (^)(BOOL finished))completion;

- (void)showRightControllerWithRatio:(CGFloat)ratio
                            duration:(CGFloat)duration
                      bounceDuration:(CGFloat)bounceDuration
                         contentSize:(CGSize)size
                             animate:(BOOL)animate
                              bounce:(BOOL)bounce
                          completion:(void (^)(BOOL finished))completion;

- (void)showTopControllerWithRatio:(CGFloat)ratio
                            duration:(CGFloat)duration
                      bounceDuration:(CGFloat)bounceDuration
                         contentSize:(CGSize)size
                             animate:(BOOL)animate
                              bounce:(BOOL)bounce
                          completion:(void (^)(BOOL finished))completion;

- (void)showBottomControllerWithRatio:(CGFloat)ratio
                            duration:(CGFloat)duration
                      bounceDuration:(CGFloat)bounceDuration
                         contentSize:(CGSize)size
                             animate:(BOOL)animate
                              bounce:(BOOL)bounce
                          completion:(void (^)(BOOL finished))completion;

@end
