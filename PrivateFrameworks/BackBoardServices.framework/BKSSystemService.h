/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

@class BKSSystemServiceClient;

@interface BKSSystemService : NSObject  {
    BKSSystemServiceClient *_client;
}

@property(retain) BKSSystemServiceClient * client;


- (void)setClient:(id)arg1;
- (id)systemApplicationBundleIdentifier;
- (void)cleanupClientPort:(unsigned int)arg1;
- (id)_badArgumentError;
- (void)openApplication:(id)arg1 options:(id)arg2 clientPort:(unsigned int)arg3 withResult:(id)arg4;
- (void)openURL:(id)arg1 application:(id)arg2 options:(id)arg3 clientPort:(unsigned int)arg4 withResult:(id)arg5;
- (unsigned int)createClientPort;
- (id)clientCallbackQueue;
- (void)fireCompletion:(id)arg1 error:(id)arg2;
- (void)terminateApplicationGroup:(int)arg1 forReason:(int)arg2 andReport:(BOOL)arg3 withDescription:(id)arg4;
- (void)terminateApplication:(id)arg1 forReason:(int)arg2 andReport:(BOOL)arg3 withDescription:(id)arg4;
- (id)init;
- (int)pidForApplication:(id)arg1;
- (void)openDataActivationURL:(id)arg1 withResult:(id)arg2;
- (BOOL)canOpenApplication:(id)arg1 reason:(int*)arg2;
- (void)dealloc;
- (void)openApplication:(id)arg1 options:(id)arg2 withResult:(id)arg3;
- (id)client;

@end
