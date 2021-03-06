/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIImageView, UIView, UIColor, UIImage, CAShapeLayer, CAGradientLayer;

@interface UISlider : UIControl <NSCoding> {
    float _value;
    float _minValue;
    float _maxValue;
    float _alpha;
    struct __CFDictionary { } *_contentLookup;
    UIImageView *_minValueImageView;
    UIImageView *_maxValueImageView;
    UIImageView *_thumbView;
    UIImageView *_minTrackView;
    UIImageView *_maxTrackView;
    UIView *_maxTrackClipView;
    struct { 
        unsigned int continuous : 1; 
        unsigned int animating : 1; 
        unsigned int preparingToAnimate : 1; 
        unsigned int showValue : 1; 
        unsigned int trackEnabled : 1; 
        unsigned int creatingSnapshot : 1; 
        unsigned int thumbDisabled : 1; 
        unsigned int minTrackHidden : 1; 
    } _sliderFlags;
    float _hitOffset;
    UIColor *_minTintColor;
    UIColor *_maxTintColor;
    UIColor *_thumbTintColor;
    CAShapeLayer *_trackMaskLayer;
    UIView *_trackContainerView;
    UIView *_thumbViewNeue;
    CAShapeLayer *_thumbViewNeueShape;
    BOOL _useLookNeue;
    BOOL _trackIsArtworkBased;
    BOOL _thumbIsArtworkBased;
    UIView *_minTrackViewNeue;
    UIView *_maxTrackViewNeue;
    CAGradientLayer *_maxTrackGradientLayer;
    BOOL _maxColorIsValid;
    UIImageView *_innerThumbView;
}

@property float value;
@property float minimumValue;
@property float maximumValue;
@property(retain) UIImage * minimumValueImage;
@property(retain) UIImage * maximumValueImage;
@property(getter=isContinuous) BOOL continuous;
@property(retain) UIColor * minimumTrackTintColor;
@property(retain) UIColor * maximumTrackTintColor;
@property(retain) UIColor * thumbTintColor;
@property(readonly) UIImage * currentThumbImage;
@property(readonly) UIImage * currentMinimumTrackImage;
@property(readonly) UIImage * currentMaximumTrackImage;


- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)setEnabled:(BOOL)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)init;
- (void)dealloc;
- (id)description;
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;
- (BOOL)isAccessibilityElementByDefault;
- (void)_setThumbTintColor:(id)arg1 forStates:(unsigned int)arg2;
- (id)_maxValueView;
- (id)_minValueView;
- (void)_setUseLookNeue:(BOOL)arg1;
- (BOOL)_isThumbEnabled;
- (void)_setMinimumTrackVisible:(BOOL)arg1 withDuration:(double)arg2;
- (void)_setThumbEnabled:(BOOL)arg1;
- (BOOL)_trackEnabled;
- (void)_setTrackEnabled:(BOOL)arg1;
- (void)setShowValue:(BOOL)arg1;
- (BOOL)isAnimatingValueChange;
- (void)_setMaximumTrackImage:(id)arg1 forStates:(unsigned int)arg2;
- (void)_setMinimumTrackImage:(id)arg1 forStates:(unsigned int)arg2;
- (void)_setThumbImage:(id)arg1 forStates:(unsigned int)arg2;
- (id)_maxTrackView;
- (id)_minTrackView;
- (id)thumbTintColor;
- (id)maximumTrackTintColor;
- (id)minimumTrackTintColor;
- (void)setMaximumValue:(float)arg1;
- (void)setMinimumValue:(float)arg1;
- (void)setContinuous:(BOOL)arg1;
- (void)_emptyTrackMaskAnimated:(BOOL)arg1;
- (void)_fillTrackMaskAnimated:(BOOL)arg1;
- (void)setMaximumValueImage:(id)arg1;
- (void)setMinimumValueImage:(id)arg1;
- (void)setMaximumTrackImage:(id)arg1 forState:(unsigned int)arg2;
- (void)setMinimumTrackImage:(id)arg1 forState:(unsigned int)arg2;
- (void)setThumbImage:(id)arg1 forState:(unsigned int)arg2;
- (id)createThumbViewNeue;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })_thumbHitEdgeInsets;
- (BOOL)isContinuous;
- (void)_setValue:(float)arg1 minValue:(float)arg2 maxValue:(float)arg3 andSendAction:(BOOL)arg4;
- (void)_setValue:(float)arg1 andSendAction:(BOOL)arg2;
- (void)_sliderAnimationDidStop:(id)arg1 finished:(id)arg2 context:(id)arg3;
- (void)_sliderAnimationWillStart:(id)arg1 context:(id)arg2;
- (void)setValue:(float)arg1 animated:(BOOL)arg2;
- (void)_updateAppearanceForEnabled:(BOOL)arg1;
- (void)_updateMaxTrackColor;
- (id)currentMaximumTrackImage;
- (id)currentMinimumTrackImage;
- (void)_initSubviews;
- (void)_initImages;
- (id)currentThumbImage;
- (float)maximumValue;
- (float)minimumValue;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })valueTextRectForBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })maximumValueImageRectForBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })minimumValueImageRectForBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)_layoutSubviewsForBoundsChange:(BOOL)arg1;
- (struct CGPath { }*)_maskPathForBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 edgeInset:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg2 andProgress:(float)arg3;
- (id)_maximumTrackImageForState:(unsigned int)arg1;
- (id)_minimumTrackImageForState:(unsigned int)arg1;
- (id)_thumbImageForState:(unsigned int)arg1;
- (void)_setContent:(id)arg1 forState:(unsigned int)arg2;
- (id)_contentForState:(unsigned int)arg1;
- (void)_rebuildControlThumb:(BOOL)arg1 track:(BOOL)arg2;
- (id)_roundedCornersBezierPathInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)createThumbView;
- (void)_buildTrackNeue;
- (void)_buildTrackArtwork;
- (void)setThumbImage:(id)arg1 forStates:(unsigned int)arg2;
- (id)thumbImageForState:(unsigned int)arg1;
- (void)setMaximumTrackImage:(id)arg1 forStates:(unsigned int)arg2;
- (id)maximumTrackImageForState:(unsigned int)arg1;
- (void)setMinimumTrackImage:(id)arg1 forStates:(unsigned int)arg2;
- (id)minimumTrackImageForState:(unsigned int)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })thumbRectForBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 trackRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 value:(float)arg3;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })trackRectForBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)maximumValueImage;
- (id)minimumValueImage;
- (void)setThumbTintColor:(id)arg1;
- (void)setMaximumTrackTintColor:(id)arg1;
- (void)setMinimumTrackTintColor:(id)arg1;
- (void)_sendDelayedActions;
- (void)_controlTouchEnded:(id)arg1 withEvent:(id)arg2;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)_controlTouchMoved:(id)arg1 withEvent:(id)arg2;
- (BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)_controlTouchBegan:(id)arg1 withEvent:(id)arg2;
- (BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)setSelected:(BOOL)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (id)_scriptingInfo;
- (BOOL)_alwaysHandleScrollerMouseEvent;
- (void)tintColorDidChange;
- (BOOL)cancelMouseTracking;
- (BOOL)cancelTouchTracking;
- (id)scriptingInfoWithChildren;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })alignmentRectInsets;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (BOOL)_contentHuggingDefault_isUsuallyFixedHeight;
- (void)layoutSubviews;
- (struct CGSize { float x1; float x2; })_intrinsicSizeWithinSize:(struct CGSize { float x1; float x2; })arg1;
- (void)didMoveToWindow;
- (void)setAlpha:(float)arg1;
- (void)_populateArchivedSubviews:(id)arg1;
- (void)setValue:(float)arg1;
- (float)value;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
