/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/EventKit.framework/EventKit
 */

@class EKCalendarItem, NSURL, NSString;

@interface EKParticipant : EKObject <EKIdentityProtocol, NSCopying> {
    EKCalendarItem *_owner;
}

@property(readonly) NSURL * URL;
@property(readonly) NSString * name;
@property(readonly) int participantStatus;
@property(readonly) int participantRole;
@property(readonly) int participantType;
@property(readonly) BOOL isCurrentUser;
@property(readonly) NSString * UUID;
@property(copy) NSString * emailAddress;
@property(copy) NSURL * address;
@property(copy) NSString * firstName;
@property(copy) NSString * lastName;
@property(copy) NSString * comment;
@property(readonly) EKCalendarItem * owner;

+ (void*)findABPersonByURL:(id)arg1 inAddressBook:(void*)arg2;

- (void*)ABRecordWithAddressBook:(void*)arg1;
- (BOOL)isEqualToParticipant:(id)arg1;
- (int)participantRole;
- (int)participantType;
- (id)_persistentItem;
- (BOOL)isCurrentUser;
- (int)participantStatus;
- (id)owner;
- (void)setAddress:(id)arg1;
- (void)setComment:(id)arg1;
- (void)setEmailAddress:(id)arg1;
- (void)setLastName:(id)arg1;
- (void)setFirstName:(id)arg1;
- (id)emailAddress;
- (id)lastName;
- (id)firstName;
- (void)setDisplayName:(id)arg1;
- (id)name;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)URL;
- (id)UUID;
- (id)comment;
- (id)address;

@end
