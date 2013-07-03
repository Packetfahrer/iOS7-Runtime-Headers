/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
 */

@class GKCollectionViewDataSource, NSArray, NSString, NSMutableDictionary;

@interface GKDataSourceMetrics : GKGridLayoutMetrics  {
    NSMutableDictionary *_sectionToMetrics;
    NSArray *_childMetrics;
    GKCollectionViewDataSource *_dataSource;
    NSString *_cachedKey;
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    } _globalSectionRange;
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    } _localSectionRange;
}

@property struct _NSRange { unsigned int x1; unsigned int x2; } globalSectionRange;
@property struct _NSRange { unsigned int x1; unsigned int x2; } localSectionRange;
@property(retain) NSMutableDictionary * sectionToMetrics;
@property(retain) NSArray * childMetrics;
@property(retain) GKCollectionViewDataSource * dataSource;
@property(retain) NSString * cachedKey;

+ (id)dataSourceMetricsWithMetrics:(id)arg1 dataSource:(id)arg2;

- (void)prepareLayout:(id)arg1;
- (void)generateMetricDataForLayout:(id)arg1;
- (id)applyDataSourceMetricsToSections:(id)arg1 withParent:(id)arg2 layout:(id)arg3;
- (id)accumulateSections:(id)arg1 layout:(id)arg2;
- (void)computeGlobalSectionRangesWithBaseIndex:(int)arg1;
- (id)cachedKey;
- (id)childMetrics;
- (void)setSectionToMetrics:(id)arg1;
- (struct _NSRange { unsigned int x1; unsigned int x2; })localSectionRange;
- (struct _NSRange { unsigned int x1; unsigned int x2; })globalSectionRange;
- (id)globalLayoutKeyForSection:(int)arg1;
- (id)globalLayoutKey;
- (void)setCachedKey:(id)arg1;
- (void)setChildMetrics:(id)arg1;
- (id)sectionToMetrics;
- (void)setGlobalSectionRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (id)initWithMetrics:(id)arg1 dataSource:(id)arg2;
- (id)metricsForSection:(int)arg1;
- (void)setLocalSectionRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)setMetrics:(id)arg1 forSection:(int)arg2;
- (id)_gkDescriptionWithChildren:(int)arg1;
- (void)setDataSource:(id)arg1;
- (id)dataSource;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end