/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
 */

@class UILabel;

@interface GKFriendRequestCell : GKBasePlayerCell  {
    UILabel *_messageLabel;
    UILabel *_whenLabel;
}

@property(retain) UILabel * messageLabel;
@property(retain) UILabel * whenLabel;

+ (void)registerCellClassesWithCollectionView:(id)arg1;
+ (Class)cellClassForPlayer:(id)arg1;

- (void)setWhenLabel:(id)arg1;
- (id)whenLabel;
- (void)didUpdateModel;
- (void)setMessageLabel:(id)arg1;
- (void)dealloc;
- (id)messageLabel;
- (void)didMoveToWindow;

@end