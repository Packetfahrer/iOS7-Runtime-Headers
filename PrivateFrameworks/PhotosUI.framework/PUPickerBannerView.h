/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class UIView, NSString, NSArray, UILabel, PUStackView;

@interface PUPickerBannerView : UIView  {
    BOOL __animatingStackView;
    unsigned int _style;
    NSArray *_images;
    NSString *_title;
    UIView *_leftView;
    UIView *_rightView;
    int __alignment;
    UILabel *__label;
    PUStackView *__stackView;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id __animationCompletionHandler;

}

@property unsigned int style;
@property(copy) NSArray * images;
@property(copy) NSString * title;
@property(retain) UIView * leftView;
@property(retain) UIView * rightView;
@property(setter=_setAlignment:) int _alignment;
@property(setter=_setLabel:,retain) UILabel * _label;
@property(setter=_setStackView:,retain) PUStackView * _stackView;
@property(setter=_setAnimatingStackView:) BOOL _animatingStackView;
@property(setter=_setAnimationCompletionHandler:,copy) id _animationCompletionHandler;


- (void)animateImagesOntoView:(id)arg1 inContainerView:(id)arg2 completionHandler:(id)arg3;
- (id)_animationCompletionHandler;
- (void)_setAnimationCompletionHandler:(id)arg1;
- (void)_setAnimatingStackView:(BOOL)arg1;
- (void)_setAlignment:(int)arg1;
- (void)_updateStackView;
- (void)_updateAlignment;
- (BOOL)_animatingStackView;
- (int)_alignment;
- (id)_stackView;
- (void)_setStackView:(id)arg1;
- (id)_label;
- (void)_setLabel:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setStyle:(unsigned int)arg1;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (unsigned int)style;
- (void).cxx_destruct;
- (void)setImages:(id)arg1;
- (id)rightView;
- (id)leftView;
- (void)setRightView:(id)arg1;
- (void)setLeftView:(id)arg1;
- (void)setRightView:(id)arg1 animated:(BOOL)arg2;
- (void)setLeftView:(id)arg1 animated:(BOOL)arg2;
- (void)_updateLabel;
- (id)images;
- (void)layoutSubviews;

@end
