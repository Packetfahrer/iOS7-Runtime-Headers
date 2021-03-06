/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

@class NSTimer;

@interface TIPreferencesController : NSObject  {
    NSTimer *_synchronizePreferencesTimer;
    BOOL dontSynchronizePreferences;
    BOOL isInternalInstall;
}

@property BOOL dontSynchronizePreferences;
@property BOOL isInternalInstall;

+ (id)sharedPreferencesController;

- (void)preferencesChangedCallback:(id)arg1;
- (void)touchSynchronizePreferencesTimer;
- (void)synchronizePreferences;
- (void)releaseDontSynchronizePreferences;
- (void)clearSynchronizePreferencesTimer;
- (void)setDontSynchronizePreferences:(BOOL)arg1;
- (id)defaultForKey:(int)arg1;
- (BOOL)isInternalInstall;
- (struct { id x1; id x2; BOOL x3; BOOL x4; unsigned long long x5; int x6; }*)domainForType:(int)arg1;
- (struct { id x1; id x2; int x3; id x4; id x5; int x6; }*)preferences;
- (void)setIsInternalInstall:(BOOL)arg1;
- (struct { id x1; id x2; BOOL x3; BOOL x4; unsigned long long x5; int x6; }*)domains;
- (BOOL)dontSynchronizePreferences;
- (id)init;
- (void)setValue:(id)arg1 forKey:(int)arg2;
- (void)dealloc;
- (id)valueForKey:(int)arg1;
- (BOOL)boolForKey:(int)arg1;

@end
