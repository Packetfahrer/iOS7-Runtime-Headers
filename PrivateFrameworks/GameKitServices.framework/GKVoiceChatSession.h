/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
 */

@class <GKVoiceChatSessionDelegate>, NSString, NSArray;

@interface GKVoiceChatSession : NSObject  {
    id opaqueSession;
}

@property <GKVoiceChatSessionDelegate> * delegate;
@property(readonly) NSString * sessionName;
@property(readonly) NSArray * peerList;
@property(getter=isActiveSession) BOOL activeSession;
@property(readonly) float inputMeter;
@property float sessionVolume;


- (float)inputMeter;
- (float)outputMeterForPeer:(id)arg1;
- (void)setSessionVolume:(float)arg1;
- (float)sessionVolume;
- (void)setActiveSession:(BOOL)arg1;
- (BOOL)isActiveSession;
- (id)peerList;
- (id)sessionName;
- (BOOL)getMuteStateForPeer:(id)arg1;
- (void)setMute:(BOOL)arg1 forPeer:(id)arg2;
- (void)stopSession;
- (void)startSession;
- (id)initWithGKSession:(id)arg1 sessionName:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (id)delegate;

@end
