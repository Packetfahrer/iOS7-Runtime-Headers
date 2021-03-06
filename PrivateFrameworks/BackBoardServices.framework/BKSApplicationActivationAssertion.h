/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

@class BKSWorkspace, NSString;

@interface BKSApplicationActivationAssertion : NSObject  {
    BKSWorkspace *_workspace;
    NSString *_uniqueID;
    NSString *_name;
    BOOL _released;
}

@property(readonly) NSString * name;


- (id)_initWithWorkspace:(id)arg1 application:(id)arg2 name:(id)arg3;
- (void)releaseAssertion;
- (id)init;
- (id)name;
- (void)dealloc;

@end
