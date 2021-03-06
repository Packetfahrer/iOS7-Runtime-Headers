/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@class <PKPassLibraryDelegate>, NSXPCConnection, PKPassLibraryExportedProxy, PKImageSetCache;

@interface PKPassLibrary : NSObject <PKPassLibraryExportedInterface> {
    NSXPCConnection *_connection;
    PKImageSetCache *_imageSetCache;
    PKPassLibraryExportedProxy *_exportedProxy;
    <PKPassLibraryDelegate> *_delegate;
}

@property <PKPassLibraryDelegate> * delegate;

+ (BOOL)isPassLibraryAvailable;

- (id)bulletinSectionInfoForRecordID:(id)arg1;
- (id)bulletinDictWithRecordID:(id)arg1;
- (id)bulletinDictsForPassTypeID:(id)arg1 count:(unsigned int)arg2 sinceDate:(id)arg3;
- (BOOL)migrateData;
- (void)flushReferencedUniqueID:(id)arg1 forCachedImageSet:(int)arg2 withDisplayProfile:(id)arg3;
- (void)fetchImageSet:(int)arg1 forUniqueID:(id)arg2 displayProfile:(id)arg3 withCompletion:(id)arg4;
- (void)fetchContentForUniqueID:(id)arg1 withCompletion:(id)arg2;
- (void)getRouteRelevantPassesFromLocation:(id)arg1 handler:(id)arg2;
- (void)ingestPassData:(id)arg1 settings:(id)arg2 completion:(id)arg3;
- (id)archivedPassForUniqueID:(id)arg1;
- (void)addPasses:(id)arg1 withCompletionHandler:(id)arg2;
- (BOOL)replacePassWithPass:(id)arg1;
- (BOOL)containsPass:(id)arg1;
- (void)removePass:(id)arg1;
- (id)passWithPassTypeIdentifier:(id)arg1 serialNumber:(id)arg2;
- (void)clearBulletinRecordsForPassTypeID:(id)arg1 beforeDate:(id)arg2;
- (void)logDelayExitReasons;
- (void)shuffleGroups:(int)arg1;
- (void)noteAccountChanged;
- (void)introduceDatabaseIntegrityProblem;
- (void)addFakeBulletin;
- (void)nukeDatabaseAndExit;
- (void)updateSettings:(int)arg1 forPassWithUniqueID:(id)arg2;
- (void)_getArchivedPassWithUniqueID:(id)arg1 completion:(id)arg2;
- (void)_getPassWithUniqueID:(id)arg1 completion:(id)arg2;
- (void)sendUserEditedCatalog:(id)arg1;
- (void)getPassesAndCatalog:(BOOL)arg1 withHandler:(id)arg2;
- (void)getPassesAndCatalog:(BOOL)arg1 withRetries:(unsigned int)arg2 withHandler:(id)arg3;
- (id)_passesWithRetries:(unsigned int)arg1;
- (void)_postLibraryChangeWithUserInfo:(id)arg1;
- (void)_registerPasses:(id)arg1;
- (void)_sendSuspended;
- (void)_sendResumed;
- (id)_errorHandlerWithCompletion:(id)arg1;
- (void)getContainmentStatusAndSettingsForPass:(id)arg1 withHandler:(id)arg2;
- (void)removePassWithUniqueID:(id)arg1;
- (void)_registerPass:(id)arg1;
- (id)_errorHandlerWithSemaphore:(id)arg1;
- (void)_unregisterForApplicationLifeCycleNotifications;
- (void)_tearDownPassLibraryConnection;
- (void)_establishPassLibraryConnection;
- (void)_registerForApplicationLifeCycleNotifications;
- (void)passRemoved:(id)arg1;
- (void)passUpdated:(id)arg1;
- (void)passAdded:(id)arg1;
- (void)catalogChanged:(id)arg1 withNewPasses:(id)arg2;
- (id)passes;
- (id)passWithUniqueID:(id)arg1;
- (id)diffForBulletinRecordID:(id)arg1;
- (void)notePassShared:(id)arg1;
- (void)updatePassWithUniqueID:(id)arg1 completion:(id)arg2;
- (id)init;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (id)delegate;

@end
