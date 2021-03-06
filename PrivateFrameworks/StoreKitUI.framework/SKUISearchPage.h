/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class SSMetricsConfiguration, NSString, NSArray;

@interface SKUISearchPage : NSObject <NSCopying> {
    BOOL _autoCorrected;
    NSArray *_facets;
    SSMetricsConfiguration *_metricsConfiguration;
    NSString *_metricsPageDescription;
    int _preAutoCorrectCount;
    NSArray *_relatedQueries;
    NSArray *_resultGroups;
    NSString *_searchTerm;
    NSString *_spellCorrectedTerm;
}

@property(copy) NSArray * facets;
@property(retain) SSMetricsConfiguration * metricsConfiguration;
@property(copy) NSString * metricsPageDescription;
@property(readonly) int numberOfResults;
@property(copy) NSArray * resultGroups;
@property(copy) NSString * searchTerm;
@property(copy) NSString * spellCorrectedTerm;
@property BOOL autoCorrected;
@property int preAutoCorrectCount;
@property(retain) NSArray * relatedQueries;


- (void)setFacets:(id)arg1;
- (void)setResultGroups:(id)arg1;
- (void)setPreAutoCorrectCount:(int)arg1;
- (int)preAutoCorrectCount;
- (void)setAutoCorrected:(BOOL)arg1;
- (BOOL)autoCorrected;
- (void)setSpellCorrectedTerm:(id)arg1;
- (id)spellCorrectedTerm;
- (id)resultGroups;
- (id)relatedQueries;
- (void)setRelatedQueries:(id)arg1;
- (id)facets;
- (id)metricsPageDescription;
- (id)metricsConfiguration;
- (void)setMetricsPageDescription:(id)arg1;
- (void)setMetricsConfiguration:(id)arg1;
- (void)setSearchTerm:(id)arg1;
- (id)searchTerm;
- (int)numberOfResults;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
