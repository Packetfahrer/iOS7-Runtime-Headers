/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@class MFRecipientTableViewCellTitleView, MFRecipientTableViewCellDetailView, UIImageView, UIColor, MFComposeRecipient;

@interface MFRecipientTableViewCell : UITableViewCell  {
    MFRecipientTableViewCellTitleView *_titleView;
    MFRecipientTableViewCellDetailView *_detailView;
    MFComposeRecipient *_recipient;
    UIImageView *_cellImageView;
    UIColor *_tintColor;
    BOOL _shouldVerticallyCenterTitleLabel;
    BOOL _shouldHighlightCompleteMatches;
    BOOL _shouldDimIrrelevantInformation;
}

@property BOOL shouldHighlightCompleteMatches;
@property BOOL shouldDimIrrelevantInformation;

+ (id)cellForRecipient:(id)arg1;
+ (id)_attributedStringRepresentationOfPartialEmailMatchForSingleRecipient:(id)arg1 useHighlighting:(BOOL)arg2;
+ (id)_copyAttributedStringRepresentationOfGroupRecipient:(id)arg1 withSortedRecipientList:(id)arg2;
+ (id)_tintedAttributedString:(id)arg1 toColor:(id)arg2 shouldDim:(BOOL)arg3;
+ (id)_attributedStringRepresentationOfCompleteMatchesForRecipient:(id)arg1 constrainedToWidth:(float)arg2 overflowRecipients:(out id*)arg3 useHighlighting:(BOOL)arg4;
+ (float)_constrainedWidthForDetailViewWithAccessoryWidth:(float)arg1 containerWidth:(float)arg2;
+ (float)_constrainedWidthForTitleViewWithAccessoryWidth:(float)arg1 containerWidth:(float)arg2;
+ (float)_realDetailButtonAccessoryMargin;
+ (id)_defaultTintColor;
+ (float)heightWithRecipient:(id)arg1 width:(float)arg2;
+ (float)height;
+ (id)identifier;

- (BOOL)shouldDimIrrelevantInformation;
- (void)setCellImage:(id)arg1 highlightedImage:(id)arg2;
- (void)setTintColor:(id)arg1 animated:(BOOL)arg2;
- (BOOL)shouldHighlightCompleteMatches;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_frameForDetailView;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_frameForTitleView;
- (void)setShouldDimIrrelevantInformation:(BOOL)arg1;
- (void)setShouldHighlightCompleteMatches:(BOOL)arg1;
- (id)recipient;
- (void)setBackgroundColor:(id)arg1;
- (void)setRecipient:(id)arg1;
- (void)setOpaque:(BOOL)arg1;
- (void)dealloc;
- (id)tintColor;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;

@end
