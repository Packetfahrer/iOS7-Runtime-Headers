/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface _NSXPCConnectionIncomingReplyBlockTable : NSObject  {
    struct __CFDictionary { } *_replyTable;
    int _replyTableLock;
    unsigned long _sequence;
}


- (id)init;
- (void)finalize;
- (void)dealloc;
- (void)cleanupIncomingReplyBlocks;
- (BOOL)removeIncomingReplyBlockForSequence:(unsigned long)arg1;
- (unsigned long)sequenceForIncomingReplyBlockWithCleanupBlock:(id)arg1;

@end
