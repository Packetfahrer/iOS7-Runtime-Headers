/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSNumber, NSString;

@interface SASStartSpeech : SABaseCommand <SAServerBoundCommand> {
}

@property(copy) NSString * audioSource;
@property BOOL clearContext;
@property int codec;
@property(copy) NSString * deviceIdentifier;
@property(copy) NSString * deviceModel;
@property BOOL disableAutoEndpointing;
@property(copy) NSString * dspStatus;
@property(copy) NSString * headsetAddress;
@property(copy) NSString * headsetId;
@property(copy) NSString * headsetName;
@property(copy) NSString * motionActivity;
@property(copy) NSNumber * motionConfidence;
@property(copy) NSNumber * noiseReductionLevel;
@property(copy) NSString * origin;
@property(copy) NSString * aceId;
@property(copy) NSString * refId;

+ (id)startSpeechWithDictionary:(id)arg1 context:(id)arg2;
+ (id)startSpeech;

- (void)setDeviceIdentifier:(id)arg1;
- (BOOL)clearContext;
- (void)setNoiseReductionLevel:(id)arg1;
- (id)noiseReductionLevel;
- (void)setMotionConfidence:(id)arg1;
- (id)motionConfidence;
- (void)setMotionActivity:(id)arg1;
- (id)motionActivity;
- (void)setHeadsetName:(id)arg1;
- (id)headsetName;
- (void)setHeadsetId:(id)arg1;
- (id)headsetId;
- (void)setHeadsetAddress:(id)arg1;
- (id)headsetAddress;
- (void)setDspStatus:(id)arg1;
- (id)dspStatus;
- (void)setDisableAutoEndpointing:(BOOL)arg1;
- (BOOL)disableAutoEndpointing;
- (void)setDeviceModel:(id)arg1;
- (id)deviceModel;
- (void)setCodec:(int)arg1;
- (int)codec;
- (void)setClearContext:(BOOL)arg1;
- (void)setAudioSource:(id)arg1;
- (id)audioSource;
- (id)encodedClassName;
- (id)deviceIdentifier;
- (void)setOrigin:(id)arg1;
- (id)origin;
- (id)groupIdentifier;

@end
