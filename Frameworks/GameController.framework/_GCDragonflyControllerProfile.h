/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/GameController.framework/GameController
 */

@class _GCUserHIDDevice, _GCACHomeButton, NSObject<OS_dispatch_source>;

@interface _GCDragonflyControllerProfile : _GCGamepad <_GCACHomeButtonDelegate> {
    _GCACHomeButton *_acHome;
    NSObject<OS_dispatch_source> *_inputSource;
    _GCUserHIDDevice *_emulatedHIDDevice;
}


- (void)toggleSuspendResume;
- (id)inputForElement:(struct __IOHIDElement { }*)arg1;
- (id)initWithController:(id)arg1;
- (id)name;
- (void).cxx_destruct;

@end
