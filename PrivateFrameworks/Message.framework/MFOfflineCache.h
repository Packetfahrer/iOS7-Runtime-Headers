/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/Message.framework/Message
 */

@class MFOfflineCacheReplayContext, NSString, NSMutableArray, MFMailMessageLibrary;

@interface MFOfflineCache : NSObject  {
    MFMailMessageLibrary *_library;
    int _accountLibraryID;
    NSMutableArray *_deferredOperations;
    MFOfflineCacheReplayContext *_replayContext;
    unsigned int _lastTemporaryMessageID;
    BOOL _isReplaying;
}

@property(readonly) NSString * nextTemporaryMessageID;


- (void)_applyReplayContextTransformation:(id)arg1;
- (void)setSelectedMailboxID:(id)arg1;
- (void)deleteOfflineCacheData;
- (void)setTransferFailureSnapshot:(id)arg1 forTemporaryID:(id)arg2;
- (void)setTranslatedID:(id)arg1 forTemporaryID:(id)arg2;
- (void)replaceTransferFailureSnapshotTemporaryID:(id)arg1 withTemporaryID:(id)arg2;
- (id)translatedIDForTemporaryID:(id)arg1;
- (id)transferFailureSnapshotForTemporaryID:(id)arg1;
- (id)selectedMailboxID;
- (BOOL)replayOperationsUsingBlock:(id)arg1;
- (id)initWithLibrary:(id)arg1 account:(id)arg2;
- (id)nextTemporaryMessageID;
- (void)deferOperation:(id)arg1;
- (BOOL)hasDeferredOperations;
- (void)enumerateOperationsUsingBlock:(id)arg1;
- (id)init;
- (void)dealloc;

@end
