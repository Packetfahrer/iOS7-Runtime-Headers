/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class UIImage;

@interface MPMediaItemArtwork : NSObject  {
    UIImage *_image;
}

@property(readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } bounds;
@property(readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } imageCropRect;


- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })imageCropRect;
- (id)albumImageDataWithSize:(struct CGSize { float x1; float x2; })arg1;
- (id)albumImageWithSize:(struct CGSize { float x1; float x2; })arg1;
- (id)imageWithSize:(struct CGSize { float x1; float x2; })arg1;
- (BOOL)hasArtworkAvailable;
- (id)imageDataWithSize:(struct CGSize { float x1; float x2; })arg1 atPlaybackTime:(double)arg2;
- (id)imageWithSize:(struct CGSize { float x1; float x2; })arg1 atPlaybackTime:(double)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })bounds;
- (id)initWithImage:(id)arg1;
- (void).cxx_destruct;

@end
