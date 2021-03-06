/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class NSString, NSData, NSLock, NSNumber;

@interface SSAccount : NSObject <SSXPCCoding, NSCopying> {
    int _accountKind;
    NSString *_accountName;
    int _accountScope;
    int _accountSource;
    BOOL _active;
    BOOL _activeLockerAccount;
    int _availableServiceTypes;
    NSData *_bioToken;
    BOOL _didFallbackToPassword;
    NSString *_creditsString;
    BOOL _demo;
    int _enabledServiceTypes;
    NSLock *_lock;
    BOOL _newCustomer;
    NSString *_secureToken;
    NSString *_storeFrontID;
    NSNumber *_uniqueIdentifier;
}

@property int accountKind;
@property(copy) NSString * accountName;
@property int accountScope;
@property int availableServiceTypes;
@property(getter=isAuthenticated,readonly) BOOL authenticated;
@property(copy) NSString * creditsString;
@property int enabledServiceTypes;
@property(getter=isSocialEnabled) BOOL socialEnabled;
@property(copy) NSString * storeFrontIdentifier;
@property(retain) NSNumber * uniqueIdentifier;
@property int accountSource;
@property(copy) NSString * secureToken;
@property(getter=isDemoAccount) BOOL demoAccount;
@property(getter=isActive) BOOL active;
@property(getter=isActiveLockerAccount) BOOL activeLockerAccount;
@property(getter=isNewCustomer) BOOL newCustomer;


- (void)removeEnabledServiceTypes:(int)arg1;
- (void)addEnabledServiceTypes:(int)arg1;
- (void)resetTransientData;
- (void)setBiometricToken:(id)arg1;
- (id)popBiometricToken;
- (BOOL)mergeValuesFromAccount:(id)arg1;
- (id)copyLockdownRepresentation;
- (void)setActiveLockerAccount:(BOOL)arg1;
- (void)removeAvailableServiceTypes:(int)arg1;
- (BOOL)isActiveLockerAccount;
- (void)addAvailableServiceTypes:(int)arg1;
- (void)getTermsAndConditionsWithBlock:(id)arg1;
- (void)getPurchasedItemsForItems:(id)arg1 completionBlock:(id)arg2;
- (void)getDownloadKindsEligibleForContentRestoreWithBlock:(id)arg1;
- (void)acceptTermsAndConditions:(id)arg1 withCompletionBlock:(id)arg2;
- (id)initDemoAccount;
- (void)setSocialEnabled:(BOOL)arg1;
- (void)setEnabledServiceTypes:(int)arg1;
- (void)setAvailableServiceTypes:(int)arg1;
- (void)setNewCustomer:(BOOL)arg1;
- (void)setDidFallbackToPassword:(BOOL)arg1;
- (void)setAccountSource:(int)arg1;
- (void)setAccountScope:(int)arg1;
- (void)setAccountKind:(int)arg1;
- (void)setStoreFrontIdentifier:(id)arg1;
- (void)setCreditsString:(id)arg1;
- (int)accountSource;
- (BOOL)isSocialEnabled;
- (BOOL)didFallbackToPassword;
- (int)availableServiceTypes;
- (int)accountKind;
- (id)creditsString;
- (void)_sendBlockingXPCMessage:(id)arg1;
- (void)setSecureToken:(id)arg1;
- (int)enabledServiceTypes;
- (id)secureToken;
- (int)accountScope;
- (BOOL)isDemoAccount;
- (void)setDemoAccount:(BOOL)arg1;
- (void)setAccountName:(id)arg1;
- (id)storeFrontIdentifier;
- (BOOL)isNewCustomer;
- (id)accountName;
- (void)setLockdownDictionary:(id)arg1;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;
- (BOOL)isAuthenticated;
- (BOOL)isActive;
- (void)setUniqueIdentifier:(id)arg1;
- (id)init;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)uniqueIdentifier;
- (void)setActive:(BOOL)arg1;

@end
