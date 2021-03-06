/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSNumber, UIColor;

@interface UIStatusBarStyleRequest : NSObject <NSMutableCopying, NSCopying> {
    BOOL _legacy;
    int _style;
    int _legibilityStyle;
    UIColor *_foregroundColor;
    NSNumber *_overrideHeight;
}

@property(readonly) int style;
@property(getter=isLegacy,readonly) BOOL legacy;
@property(readonly) int legibilityStyle;
@property(readonly) UIColor * foregroundColor;
@property(readonly) NSNumber * overrideHeight;


- (id)foregroundColor;
- (int)style;
- (id)init;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (void)dealloc;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)_copyWithZone:(struct _NSZone { }*)arg1 class:(Class)arg2;
- (id)initWithStyle:(int)arg1 legacy:(BOOL)arg2 legibilityStyle:(int)arg3 foregroundColor:(id)arg4 overrideHeight:(id)arg5;
- (id)initWithStyle:(int)arg1 legacy:(BOOL)arg2 legibilityStyle:(int)arg3 foregroundColor:(id)arg4;
- (BOOL)isLegacy;
- (id)overrideHeight;
- (int)legibilityStyle;
- (BOOL)isDoubleHeight;
- (BOOL)isTranslucent;

@end
