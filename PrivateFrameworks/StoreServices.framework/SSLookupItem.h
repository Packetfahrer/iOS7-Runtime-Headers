/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class NSArray, NSString, NSDictionary, NSNumber, NSURL;

@interface SSLookupItem : NSObject  {
    NSDictionary *_dictionary;
}

@property(readonly) NSDictionary * lookupDictionary;
@property(readonly) NSString * artistName;
@property(readonly) NSArray * artwork;
@property(readonly) NSString * bundleIdentifier;
@property(readonly) NSArray * categoryNames;
@property(readonly) NSString * displayName;
@property(readonly) NSString * itemKind;
@property(readonly) NSNumber * ITunesStoreIdentifier;
@property(readonly) NSArray * offers;
@property(getter=isPOIBased,readonly) BOOL POIBased;
@property(readonly) NSURL * productPageURL;
@property(readonly) int numberOfUserRatings;
@property(readonly) float userRating;
@property(readonly) int numberOfUserRatingsForCurrentVersion;
@property(readonly) float userRatingForCurrentVersion;


- (int)numberOfUserRatings;
- (id)offers;
- (id)lookupDictionary;
- (id)productPageURL;
- (float)userRating;
- (id)artwork;
- (float)userRatingForCurrentVersion;
- (int)numberOfUserRatingsForCurrentVersion;
- (BOOL)isPOIBased;
- (id)categoryNames;
- (id)initWithLookupDictionary:(id)arg1;
- (id)itemKind;
- (id)artistName;
- (id)ITunesStoreIdentifier;
- (id)displayName;
- (void)dealloc;
- (id)bundleIdentifier;

@end
