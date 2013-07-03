/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/TextToSpeech.framework/TextToSpeech
 */

@interface TTSVoiceAssetManager : NSObject  {
}

+ (id)sharedInstance;

- (void)getAutoDownloadedVoiceAssets:(id)arg1;
- (void)setAutoDownloadedVoiceAssets:(id)arg1;
- (void)startDownloadingVoiceAsset:(id)arg1 progress:(id)arg2 completion:(id)arg3;
- (void)getVoiceAssetsLocalOnly:(BOOL)arg1 reply:(id)arg2;
- (void)_automaticallyDownloadVoiceAssetsIfNeeded;
- (id)_autoDownloadedAssets;
- (void)automaticallyDownloadVoiceAssetsIfNeeded;
- (id)_voiceAssetQueryForName:(id)arg1 language:(id)arg2 gender:(int)arg3 footprint:(int)arg4 version:(id)arg5 localOnly:(BOOL)arg6;
- (id)resourcePathForLanguage:(id)arg1 gender:(int)arg2 footprint:(int)arg3;

@end