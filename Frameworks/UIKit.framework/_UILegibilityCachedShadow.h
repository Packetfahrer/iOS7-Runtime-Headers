/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class _UILegibilitySettings, UIImage;

@interface _UILegibilityCachedShadow : NSObject  {
    _UILegibilitySettings *_settings;
    float _strength;
    UIImage *_shadow;
}

@property(retain) _UILegibilitySettings * settings;
@property float strength;
@property(retain) UIImage * shadow;


- (void)setSettings:(id)arg1;
- (id)shadow;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (void)setShadow:(id)arg1;
- (void)setStrength:(float)arg1;
- (BOOL)matchesSettings:(id)arg1 strength:(float)arg2;
- (float)strength;
- (id)settings;

@end
