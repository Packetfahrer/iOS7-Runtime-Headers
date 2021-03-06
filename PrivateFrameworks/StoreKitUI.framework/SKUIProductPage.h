/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class SKUIReviewConfiguration, SKUIUber, SSMetricsConfiguration, SKUIProductPageItem, NSString, NSURL, NSArray;

@interface SKUIProductPage : NSObject <NSCopying> {
    SKUIProductPageItem *_item;
    SSMetricsConfiguration *_metricsConfiguration;
    NSString *_metricsPageDescription;
    NSURL *_pageURL;
    NSArray *_relatedContentSwooshes;
    SKUIReviewConfiguration *_reviewConfiguration;
    SKUIUber *_uber;
}

@property(retain) SKUIProductPageItem * item;
@property(retain) SSMetricsConfiguration * metricsConfiguration;
@property(copy) NSString * metricsPageDescription;
@property(copy) NSURL * pageURL;
@property(copy) NSArray * relatedContentSwooshes;
@property(retain) SKUIReviewConfiguration * reviewConfiguration;
@property(retain) SKUIUber * uber;


- (void)setReviewConfiguration:(id)arg1;
- (void)setRelatedContentSwooshes:(id)arg1;
- (id)relatedContentSwooshes;
- (id)reviewConfiguration;
- (id)uber;
- (id)metricsPageDescription;
- (id)metricsConfiguration;
- (void)setUber:(id)arg1;
- (void)setMetricsPageDescription:(id)arg1;
- (void)setMetricsConfiguration:(id)arg1;
- (void)setItem:(id)arg1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)pageURL;
- (void)setPageURL:(id)arg1;
- (id)item;

@end
