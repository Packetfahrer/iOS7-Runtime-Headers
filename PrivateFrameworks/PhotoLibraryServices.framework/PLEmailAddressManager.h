/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class NSMutableDictionary, NSString;

@interface PLEmailAddressManager : NSObject  {
    NSMutableDictionary *_keysForEmails;
    NSMutableDictionary *_emailsForKey;
    int _maxKey;
    NSString *_plistPath;
}

+ (id)sharedManager;

- (void)_loadDictionariesIfNeeded;
- (id)emailAddressForKey:(id)arg1;
- (id)keyForEmailAddress:(id)arg1;
- (void)dealloc;

@end
