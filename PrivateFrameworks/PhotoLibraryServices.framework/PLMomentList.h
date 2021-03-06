/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class NSArray, NSString, PLRevGeoCompoundNameInfo, NSDate, NSOrderedSet, NSData;

@interface PLMomentList : PLManagedObject <PLAssetContainerList> {
    PLRevGeoCompoundNameInfo *_cachedPrimaryNameInfo;
    PLRevGeoCompoundNameInfo *_cachedSecondaryNameInfo;
    BOOL _loadedNameInfo;
}

@property short granularityLevel;
@property int sortIndex;
@property(retain) NSString * title;
@property(retain) NSDate * startDate;
@property(retain) NSDate * representativeDate;
@property(retain) NSDate * endDate;
@property(retain) NSOrderedSet * momentsForMegaMoment;
@property(retain) NSOrderedSet * momentsForYear;
@property(retain) NSData * reverseLocationData;
@property BOOL reverseLocationDataIsValid;
@property(readonly) NSString * localizedTitle;
@property(readonly) NSArray * localizedLocationNames;
@property short generationType;
@property(retain) NSOrderedSet * moments;
@property(readonly) unsigned int containersCount;

+ (id)findOrCreateMegaMomentListForLeftoverMomentsInMonth:(int)arg1 inYear:(int)arg2 withDay:(int)arg3 inManagedObjectContext:(id)arg4;
+ (id)allMomentListsInLibrary:(id)arg1 forLevel:(short)arg2 returnsObjectsAsFaults:(BOOL)arg3;
+ (id)allMomentListsInManagedObjectContext:(id)arg1 forLevel:(short)arg2 error:(id*)arg3 returnsObjectsAsFaults:(BOOL)arg4;
+ (id)descriptionForGranularityLevel:(short)arg1;
+ (id)allMomentListsInLibrary:(id)arg1 forLevel:(short)arg2;
+ (id)allMomentListsRequiringAnalysisInManagedObjectContext:(id)arg1 error:(id*)arg2;
+ (id)allMomentListsInManagedObjectContext:(id)arg1 forLevel:(short)arg2 error:(id*)arg3;
+ (id)allMomentListsRequiringAnalysisInManagedObjectContext:(id)arg1 forLevel:(short)arg2 error:(id*)arg3;
+ (id)findOrCreateYearMomentListForYear:(int)arg1 inManagedObjectContext:(id)arg2;
+ (id)entityInManagedObjectContext:(id)arg1;
+ (id)entityName;

- (BOOL)supportsDiagnosticInformation;
- (void)replaceMomentsForYearAtIndexes:(id)arg1 withMomentsForYear:(id)arg2;
- (void)removeMomentsForYearAtIndexes:(id)arg1;
- (void)insertMomentsForYear:(id)arg1 atIndexes:(id)arg2;
- (void)replaceObjectInMomentsForYearAtIndex:(unsigned int)arg1 withObject:(id)arg2;
- (void)removeObjectFromMomentsForYearAtIndex:(unsigned int)arg1;
- (void)insertObject:(id)arg1 inMomentsForYearAtIndex:(unsigned int)arg2;
- (void)replaceMomentsForMegaMomentAtIndexes:(id)arg1 withMomentsForMegaMoment:(id)arg2;
- (void)removeMomentsForMegaMomentAtIndexes:(id)arg1;
- (void)insertMomentsForMegaMoment:(id)arg1 atIndexes:(id)arg2;
- (void)replaceObjectInMomentsForMegaMomentAtIndex:(unsigned int)arg1 withObject:(id)arg2;
- (void)removeObjectFromMomentsForMegaMomentAtIndex:(unsigned int)arg1;
- (BOOL)_validateForInsertOrUpdate:(id*)arg1;
- (void)_updateCachedNameInfoIfNeeded;
- (void)removeMomentsForYear:(id)arg1;
- (void)addMomentsForYear:(id)arg1;
- (id)pl_debugDescription;
- (void)addMomentsForYearObject:(id)arg1;
- (void)removeMomentsForYearObject:(id)arg1;
- (void)setMoments:(id)arg1;
- (void)removeMomentsForMegaMoment:(id)arg1;
- (void)addMomentsForMegaMoment:(id)arg1;
- (id)moments;
- (void)insertObject:(id)arg1 inMomentsForMegaMomentAtIndex:(unsigned int)arg2;
- (BOOL)isMeaningful;
- (void)addMomentsForMegaMomentObject:(id)arg1;
- (void)removeMomentsForMegaMomentObject:(id)arg1;
- (unsigned int)containersCount;
- (id)containersRelationshipName;
- (BOOL)canEditContainers;
- (id)diagnosticInformation;
- (id)localizedLocationNames;
- (id)containers;
- (void)delete;
- (BOOL)validateForUpdate:(id*)arg1;
- (BOOL)validateForInsert:(id*)arg1;
- (void)willSave;
- (void)awakeFromInsert;
- (void)didTurnIntoFault;
- (id)_typeDescription;
- (BOOL)isEmpty;
- (void)dealloc;
- (id)localizedTitle;

@end
