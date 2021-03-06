/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSURL, NSString, SAUIAppPunchOut;

@interface SALocalSearchPhoto : AceObject <SAAceSerializable> {
}

@property(copy) NSURL * fullsize;
@property(copy) NSString * identifier;
@property(retain) SAUIAppPunchOut * photoPunchOut;
@property(copy) NSURL * thumbnail;

+ (id)photoWithDictionary:(id)arg1 context:(id)arg2;
+ (id)photo;

- (void)setPhotoPunchOut:(id)arg1;
- (id)photoPunchOut;
- (void)setFullsize:(id)arg1;
- (id)fullsize;
- (id)encodedClassName;
- (id)thumbnail;
- (void)setIdentifier:(id)arg1;
- (id)identifier;
- (void)setThumbnail:(id)arg1;
- (id)groupIdentifier;

@end
