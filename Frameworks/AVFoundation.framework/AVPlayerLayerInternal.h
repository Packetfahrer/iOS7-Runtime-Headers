/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVPlayer, NSString, NSObject<OS_dispatch_queue>, CALayer, AVSubtitleLayer, AVPlayerItem;

@interface AVPlayerLayerInternal : NSObject  {
    AVPlayer *_player;
    CALayer *maskLayer;
    CALayer *contentLayer;
    NSString *videoGravity;
    NSString *subtitleGravity;
    AVSubtitleLayer *subtitleLayer;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } latestPlayerLayerBoundsAtRendering;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } latestSubtitleLayoutAtRendering;
    BOOL shouldObservePlayer;
    BOOL isObservingPlayer;
    BOOL hasPlayerToObserve;
    BOOL isOverscanSubtitleSupportEnabled;
    NSObject<OS_dispatch_queue> *serialQueue;
    BOOL isPresentationLayer;
    BOOL isReadyForDisplay;
    struct OpaqueFigSimpleMutex { } *isReadyForDisplayMutex;
    AVPlayerItem *itemMarkedReadyForDisplay;
    struct CGSize { 
        float width; 
        float height; 
    } presentationSize;
    struct CGSize { 
        float width; 
        float height; 
    } latestPresentationSizeAtRendering;
}



@end
