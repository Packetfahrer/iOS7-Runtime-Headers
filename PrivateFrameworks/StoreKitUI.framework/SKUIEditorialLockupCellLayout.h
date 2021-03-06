/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class UIView, SKUILockupItemCellLayout, SKUIEditorialCellLayout, SKUITextBoxView, SKUICellLayoutView;

@interface SKUIEditorialLockupCellLayout : SKUIItemCellLayout  {
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _contentInsets;
    SKUIEditorialCellLayout *_editorialCellLayout;
    UIView *_editorialContainerView;
    float _editorialHeight;
    int _layoutStyle;
    SKUILockupItemCellLayout *_lockupLayout;
    SKUICellLayoutView *_lockupView;
    SKUITextBoxView *_textBoxView;
    unsigned int _visibleFields;
}

@property struct UIEdgeInsets { float x1; float x2; float x3; float x4; } contentInsets;
@property int layoutStyle;
@property unsigned int visibleFields;
@property(readonly) SKUILockupItemCellLayout * lockupCellLayout;
@property(readonly) SKUITextBoxView * textBoxView;

+ (float)_imagePaddingForArtworkSize:(int)arg1;
+ (float)editorialWidthForCellWidth:(float)arg1 lockupStyle:(struct SKUILockupStyle { int x1; int x2; unsigned int x3; })arg2;

- (BOOL)_showsItemOfferUnderEditorial;
- (id)_lockupView;
- (id)_editorialCellLayout;
- (id)_editorialContainerView;
- (BOOL)_isItemOfferButtonHidden;
- (void)layoutForItemOfferChange;
- (BOOL)isIconImageHidden;
- (void)setItemOfferButtonAppearance:(id)arg1;
- (id)lockupCellLayout;
- (id)textBoxView;
- (void)setIconImageHidden:(BOOL)arg1;
- (void)setRestricted:(BOOL)arg1;
- (void)applyEditorialLayout:(id)arg1 withOrientation:(int)arg2;
- (void)setItemState:(id)arg1 animated:(BOOL)arg2;
- (void)setLayoutStyle:(int)arg1;
- (id)itemState;
- (id)itemOffer;
- (void)setItemOffer:(id)arg1;
- (unsigned int)visibleFields;
- (void)setVisibleFields:(unsigned int)arg1;
- (void)setColoringWithColorScheme:(id)arg1;
- (void)setClientContext:(id)arg1;
- (id)iconImageView;
- (void)setIconImage:(id)arg1;
- (int)layoutStyle;
- (void)setBackgroundColor:(id)arg1;
- (void).cxx_destruct;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })contentInsets;
- (void)setContentInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (id)iconImage;
- (void)layoutSubviews;

@end
