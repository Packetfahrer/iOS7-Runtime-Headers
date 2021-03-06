/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSString, <SKUIRedeemCameraViewControllerDelegate>;

@interface SKUIRedeemCameraViewController : SKUIRedeemStepViewController  {
    int category;
    NSString *_initialCode;
    <SKUIRedeemCameraViewControllerDelegate> *_delegate;
}

@property(readonly) int category;
@property(copy) NSString * initialCode;
@property <SKUIRedeemCameraViewControllerDelegate> * delegate;


- (id)initialCode;
- (void)setInitialCode:(id)arg1;
- (id)initWithRedeemCategory:(int)arg1;
- (int)category;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
- (id)delegate;

@end
