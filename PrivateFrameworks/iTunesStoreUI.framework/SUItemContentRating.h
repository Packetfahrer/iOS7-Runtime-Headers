/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class SSItemArtworkImage, NSString, NSDictionary;

@interface SUItemContentRating : NSObject <NSCopying> {
    NSDictionary *_dictionary;
    int _rank;
    NSString *_ratingDescription;
    NSString *_ratingLabel;
    int _ratingSystem;
    SSItemArtworkImage *_ratingSystemLogo;
    BOOL _shouldHideWhenRestricted;
}

@property(getter=isExplicitContent,readonly) BOOL explicitContent;
@property int rank;
@property(copy) NSString * ratingDescription;
@property(copy) NSString * ratingLabel;
@property int ratingSystem;
@property(copy) SSItemArtworkImage * ratingSystemLogo;
@property(getter=isRestricted,readonly) BOOL restricted;
@property BOOL shouldHideWhenRestricted;

+ (int)ratingSystemFromString:(id)arg1;

- (void)setRatingSystemLogo:(id)arg1;
- (BOOL)shouldHideWhenRestricted;
- (void)setRatingSystem:(int)arg1;
- (id)ratingDescription;
- (id)ratingLabel;
- (BOOL)_isRatingSystemForMusic:(int)arg1;
- (id)ratingSystemLogo;
- (void)setShouldHideWhenRestricted:(BOOL)arg1;
- (void)setRatingLabel:(id)arg1;
- (void)setRatingDescription:(id)arg1;
- (BOOL)_isRatingSystemForTV:(int)arg1;
- (BOOL)_isRatingSystemForMovies:(int)arg1;
- (BOOL)_isRatingSystemForApps:(int)arg1;
- (int)rank;
- (int)ratingSystem;
- (BOOL)isExplicitContent;
- (void)setRank:(int)arg1;
- (BOOL)isRestricted;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)valueForProperty:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end
