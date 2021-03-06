/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/MapKit.framework/MapKit
 */

@class NSNumber, GEOPlace, NSString, MKPlacemark, NSURL;

@interface MKMapItem : NSObject <MKURLSerializable> {
    BOOL _isCurrentLocation;
    NSString *_extSessionGuid;
    GEOPlace *_place;
    BOOL _isPlaceHolder;
}

@property(readonly) MKPlacemark * placemark;
@property BOOL isCurrentLocation;
@property(copy) NSString * name;
@property(copy) NSString * phoneNumber;
@property(retain) NSURL * url;
@property(readonly) GEOPlace * place;
@property(copy) NSString * extSessionGuid;
@property(retain) NSString * businessID;
@property(retain) NSString * yelpID;
@property(retain) NSNumber * numberOfReviews;
@property(retain) NSNumber * rating;
@property(retain) NSNumber * numberOfRatings;
@property(readonly) BOOL isPlaceHolder;

+ (void)_mapItemGeocodedForStructuredLocation:(id)arg1 mapItem:(id)arg2;
+ (void)_mapItemGeocodedForAddressDictionary:(id)arg1 mapItem:(id)arg2;
+ (void)_mapItemGeocodedForCoordinate:(struct { double x1; double x2; })arg1 mapItem:(id)arg2;
+ (void)_geocode:(id)arg1 isForward:(BOOL)arg2 mapItem:(id)arg3;
+ (id)mapItemsFromURL:(id)arg1 options:(id*)arg2;
+ (BOOL)openMapsWithItems:(id)arg1 launchOptions:(id)arg2;
+ (id)plistCompatibleDictionaryFromStandardOptions:(id)arg1;
+ (id)standardOptionsFromPlistCompatibleDictionary:(id)arg1;
+ (id)mapItemWithDictionary:(id)arg1;
+ (id)mapItemForCurrentLocation;
+ (id)urlForMapItem:(id)arg1 options:(id)arg2;
+ (id)urlForMapItems:(id)arg1 options:(id)arg2;

- (void)setRating:(id)arg1;
- (BOOL)isPlaceHolder;
- (void)setExtSessionGuid:(id)arg1;
- (id)extSessionGuid;
- (BOOL)openInMapsWithLaunchOptions:(id)arg1;
- (void)setYelpID:(id)arg1;
- (id)initWithUrlRepresentation:(id)arg1;
- (id)urlRepresentation;
- (id)_structuredAddressForUrlRespresentation:(id)arg1;
- (id)_urlRepresentationForStructuredAddress:(id)arg1;
- (id)initWithPlace:(id)arg1 sessionGuid:(id)arg2;
- (id)_getRating;
- (id)yelpID;
- (id)_getBusiness;
- (BOOL)isCurrentLocation;
- (void)setIsCurrentLocation:(BOOL)arg1;
- (id)initWithPlace:(id)arg1;
- (id)initWithPlace:(id)arg1 isPlaceHolderPlace:(BOOL)arg2;
- (id)initWithPlaceSearchResponse:(id)arg1 name:(id)arg2;
- (id)placemark;
- (id)initWithPlaceResult:(id)arg1;
- (id)initWithCLLocation:(id)arg1;
- (id)rating;
- (void)setBusinessID:(id)arg1;
- (id)businessID;
- (void)setNumberOfReviews:(id)arg1;
- (id)numberOfReviews;
- (void)setNumberOfRatings:(id)arg1;
- (id)numberOfRatings;
- (id)place;
- (id)initWithAddressDictionary:(id)arg1;
- (id)initWithPlacemark:(id)arg1;
- (void)setPhoneNumber:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)name;
- (void)dealloc;
- (id)description;
- (void)setUrl:(id)arg1;
- (id)phoneNumber;
- (id)url;
- (id)dictionaryRepresentation;
- (void)setName:(id)arg1;

@end
