/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOUserSession : NSObject  {
    double _sessionCreationTime;
    double _usageSessionIDGenerationTime;
    struct { 
        unsigned long long _high; 
        unsigned long long _low; 
    } _sessionID;
    struct { 
        unsigned long long _high; 
        unsigned long long _low; 
    } _usageCollectionSessionID;
}

@property(readonly) struct { unsigned long long x1; unsigned long long x2; } sessionID;
@property(readonly) struct { unsigned long long x1; unsigned long long x2; } usageCollectionSessionID;
@property(readonly) double sessionCreationTime;

+ (void)disable;
+ (id)sharedInstance;

- (double)sessionCreationTime;
- (struct { unsigned long long x1; unsigned long long x2; })usageCollectionSessionID;
- (void)_renewUsageCollectionSessionID;
- (void)_updateWithNewUUIDForSessionID:(struct { unsigned long long x1; unsigned long long x2; }*)arg1;
- (struct { unsigned long long x1; unsigned long long x2; })sessionID;
- (id)init;
- (void)dealloc;

@end
