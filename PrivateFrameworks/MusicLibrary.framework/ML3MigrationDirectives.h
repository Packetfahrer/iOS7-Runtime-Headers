/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface ML3MigrationDirectives : NSObject  {
    BOOL _needsToRecreateIndexes;
    BOOL _needsToRecreateTriggers;
    BOOL _needsToRemoveLocationsForItemsMissingAssets;
    BOOL _needsToReloadStoreBookmarkMetadataIdentifiers;
    BOOL _needsAnalyze;
    int _userVersion;
}

@property BOOL needsToRecreateIndexes;
@property BOOL needsToRecreateTriggers;
@property BOOL needsToRemoveLocationsForItemsMissingAssets;
@property BOOL needsToReloadStoreBookmarkMetadataIdentifiers;
@property BOOL needsAnalyze;
@property int userVersion;


- (void)setNeedsAnalyze:(BOOL)arg1;
- (BOOL)needsAnalyze;
- (void)setNeedsToReloadStoreBookmarkMetadataIdentifiers:(BOOL)arg1;
- (BOOL)needsToReloadStoreBookmarkMetadataIdentifiers;
- (void)setNeedsToRemoveLocationsForItemsMissingAssets:(BOOL)arg1;
- (BOOL)needsToRemoveLocationsForItemsMissingAssets;
- (void)setNeedsToRecreateTriggers:(BOOL)arg1;
- (BOOL)needsToRecreateTriggers;
- (void)setNeedsToRecreateIndexes:(BOOL)arg1;
- (BOOL)needsToRecreateIndexes;
- (int)userVersion;
- (void)setUserVersion:(int)arg1;

@end
