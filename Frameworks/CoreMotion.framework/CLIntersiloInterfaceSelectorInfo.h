/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@class NSMethodSignature, NSString;

@interface CLIntersiloInterfaceSelectorInfo : NSObject  {
    SEL _sel;
    int _numArguments;
    int _replyBlockIndex;
    int _returnAddressIndex;
    int _returnValueSize;
    NSMethodSignature *_sig;
    NSString *_str;
}

@property(readonly) SEL sel;
@property(readonly) int numArguments;
@property(readonly) int replyBlockIndex;
@property(readonly) int returnAddressIndex;
@property(readonly) int returnValueSize;
@property(readonly) NSMethodSignature * sig;
@property(readonly) NSString * str;


- (id)sig;
- (int)returnValueSize;
- (int)returnAddressIndex;
- (int)replyBlockIndex;
- (int)numArguments;
- (SEL)sel;
- (id)initWithSelector:(SEL)arg1 andMethodSignature:(id)arg2;
- (id)str;
- (void).cxx_destruct;
- (id)description;

@end
