/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class SKUIColorScheme, SKUIClientContext, UIImageView, UILabel, UIButton, UIView, UIControl, NSArray;

@interface SKUIReviewsFacebookView : UIView  {
    SKUIClientContext *_clientContext;
    SKUIColorScheme *_colorScheme;
    NSArray *_friendNames;
    UILabel *_friendsLabel;
    UIButton *_likeButton;
    UIImageView *_logoImageView;
    UILabel *_titleLabel;
    BOOL _userLiked;
    UIView *_separatorView;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _contentInsets;
}

@property(retain) SKUIColorScheme * colorScheme;
@property struct UIEdgeInsets { float x1; float x2; float x3; float x4; } contentInsets;
@property(copy) NSArray * friendNames;
@property(readonly) UIControl * likeToggleButton;
@property(getter=isUserLiked) BOOL userLiked;


- (BOOL)isUserLiked;
- (id)likeToggleButton;
- (void)setUserLiked:(BOOL)arg1;
- (void)setFriendNames:(id)arg1;
- (id)_composedStringForNames:(id)arg1 userLiked:(BOOL)arg2;
- (void)_reloadLikeButtonState;
- (void)_reloadFriendNamesLabel;
- (id)friendNames;
- (id)initWithClientContext:(id)arg1;
- (void)setColorScheme:(id)arg1;
- (id)colorScheme;
- (void)setBackgroundColor:(id)arg1;
- (void).cxx_destruct;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })contentInsets;
- (void)setContentInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)layoutSubviews;

@end
