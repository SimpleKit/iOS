//
//  SKUtil.h
//  SimpleKit
//
//  Created by SimpleKit on 12-6-12.
//  Copyright (c) 2012年 SimpleKit. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <QuartzCore/QuartzCore.h>

@interface NSObject (dictionary)

- (NSMutableDictionary *)getDictionary;
- (void)setAdditionalValue:(id)value forKey:(NSString *)key;
- (id)additionalValueForKey:(NSString *)key;

@end

typedef NS_ENUM(NSInteger, SKExitApplicationAnimationStyle) {
    SKExitApplicationAnimationStyleFlipStyle1 = 1,
    SKExitApplicationAnimationStyleFlipStyle2,
    SKExitApplicationAnimationStyleCurlStyle1,
    SKExitApplicationAnimationStyleCurlStyle2
};

@interface SKUtil : NSObject

+ (void)test;
+ (NSBundle *)frameworkBundle;
+ (UIImage *)imageFromBundleWithName:(NSString *)name ofType:(NSString *)type;

#pragma mark -
#pragma mark Border Code
+ (void)borderWithView:(UIView *)view;
+ (void)borderWithView:(UIView *)view masksToBounds:(BOOL)masksToBounds;
+ (void)borderWithView:(UIView *)view color:(UIColor *)color;
+ (void)borderWithView:(UIView *)view color:(UIColor *)color masksToBounds:(BOOL)masksToBounds;
+ (void)borderWithView:(UIView *)view cornerRadius:(CGFloat)radius;
+ (void)borderWithView:(UIView *)view cornerRadius:(CGFloat)radius masksToBounds:(BOOL)masksToBounds;
+ (void)borderWithView:(UIView *)view cornerRadius:(CGFloat)radius color:(UIColor *)color;
+ (void)borderWithView:(UIView *)view cornerRadius:(CGFloat)radius color:(UIColor *)color masksToBounds:(BOOL)masksToBounds;

#pragma mark -
#pragma mark WebView Code
+ (NSString *)titleFromWebView:(UIWebView *)webView;
+ (NSString *)executeScript:(NSString *)script atWebView:(UIWebView *)webView;
+ (void)clearSessionWithDomain:(NSString *)domain;

#pragma mark -
#pragma mark Shared Info Code
+ (void)addSharedInfoWithValue:(NSString *)value forKey:(NSString *)key;
+ (void)deleteSharedInfoWithKey:(NSString *)key;
+ (void)updateSharedInfoWithValue:(NSString *)value forKey:(NSString *)key;
+ (void)showAllSharedInfo;
+ (NSString *)searchSharedInfoValueWithKey:(NSString *)key;
+ (void)deleteAllSharedInfo;

#pragma mark -
#pragma mark Date Code
+ (NSString *)stringWithDate:(NSDate *)date;
+ (NSString *)stringWithDate:(NSDate *)date dateFormat:(NSString *)dateFormat;
+ (NSDate *)dateWithString:(NSString *)dateString;
+ (NSDate *)dateWithString:(NSString *)dateString dateFormat:(NSString *)dateFormat;

#pragma mark -
#pragma mark Saved Info Code
+ (NSObject *)objectFromSavedInfoWithKey:(NSString *)key;
+ (void)saveToSavedInfoWithObject:(NSObject *)object andKey:(NSString *)key;
+ (UIImage *)grayscaleImageWithImage:(UIImage *)image;

#pragma mark -
#pragma mark System Code
+ (void)forceLandscape;
+ (CGFloat)floatValueOfCurrentDeviceVersion;
+ (void)caughtException;
+ (void)applicationShouldDisableAutolockScreen:(BOOL)autoLock;
+ (void)exitApplication:(BOOL)animated duration:(CGFloat)duration options:(SKExitApplicationAnimationStyle)animationStyle;
+ (void)exitApplication:(BOOL)animated duration:(CGFloat)duration options:(SKExitApplicationAnimationStyle)animationStyle afterDelay:(CGFloat)delay;
+ (id)functionPointWithCode:(id)code;

#pragma mark -
#pragma mark UI Code
+ (void)addLeftBarButtonWithTitle:(NSString *)title target:(id)target action:(SEL)action toController:(UIViewController *)controller;
+ (void)addRightBarButtonWithTitle:(NSString *)title target:(id)target action:(SEL)action toController:(UIViewController *)controller;
+ (void)presentController:(UIViewController *)controller fromController:(UIViewController *)fromController;
+ (void)presentController:(UIViewController *)controller fromController:(UIViewController *)fromController modalTransitionStyle:(UIModalTransitionStyle)transitionStyle modalPresentationStyle:(UIModalPresentationStyle)presentationStyle contentSize:(CGSize)size contentCenter:(CGPoint)center;
+ (void)presentPopoverController:(UIPopoverController *)popController fromView:(UIView *)fromView inView:(UIView *)inView popoverContentSize:(CGSize)size;
+ (void)presentPopoverController:(UIPopoverController *)popController fromView:(UIView *)fromView inView:(UIView *)inView popoverContentSize:(CGSize)size arrowDirections:(UIPopoverArrowDirection)directions;
+ (void)presentPopoverController:(UIPopoverController *)popController fromView:(UIView *)fromView inView:(UIView *)inView popoverContentSize:(CGSize)size popoverContentOffset:(CGPoint)offset arrowDirections:(UIPopoverArrowDirection)directions;
+ (void)dismissViewController:(UIViewController *)controller animated:(BOOL)animated;
+ (void)presentController:(UIViewController *)controller fromController:(UIViewController *)fromController transitionStyle:(UIModalTransitionStyle)transitionStyle presentationStyle:(UIModalPresentationStyle)presentationStyle;
+ (void)switchViewWithController:(UIViewController *)controller duration:(CGFloat)duration options:(UIViewAnimationOptions)options completion:(void (^)(BOOL finished))completion;
+ (UIImageView *)animatedImageViewWithFrame:(CGRect)frame duration:(CGFloat)duration images:(NSArray *)images repeatCount:(NSInteger)repeatCount;

#pragma mark -
#pragma mark Color Code
+ (UIColor *)colorWithHexColorString:(NSString *)hexString;

#pragma mark -
#pragma mark String Code
+ (BOOL)containString:(NSString *)findString fromString:(NSString *)fromString;
+ (BOOL)containStrings:(NSArray *)findStrings fromString:(NSString *)fromString;
+ (NSString *)pathFromBundleWithFileName:(NSString *)fileName fileType:(NSString *)fileType;

@end
