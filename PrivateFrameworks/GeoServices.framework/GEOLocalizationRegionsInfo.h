/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSLock, NSDictionary;

@interface GEOLocalizationRegionsInfo : NSObject  {
    NSDictionary *_regions;
    NSLock *_regionsLock;
}


- (BOOL)needsLocalizationForKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1 language:(id)arg2;
- (void)reset;
- (id)init;
- (void)dealloc;

@end
