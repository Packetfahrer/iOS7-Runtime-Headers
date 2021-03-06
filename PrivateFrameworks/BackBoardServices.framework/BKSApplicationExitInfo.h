/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

@interface BKSApplicationExitInfo : NSObject <NSCopying, BKSXPCCoding> {
    BOOL _wasReceiver;
    int _terminationReason;
    long long _status;
}

@property long long status;
@property int terminationReason;
@property BOOL wasReceiver;


- (long long)status;
- (BOOL)wasReceiver;
- (void)setWasReceiver:(BOOL)arg1;
- (void)setTerminationReason:(int)arg1;
- (void)setStatus:(long long)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)terminationReason;

@end
