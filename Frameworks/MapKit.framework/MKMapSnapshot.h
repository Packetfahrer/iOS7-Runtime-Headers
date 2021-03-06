/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/MapKit.framework/MapKit
 */

@class VKMapSnapshot, UIImage;

@interface MKMapSnapshot : NSObject  {
    VKMapSnapshot *_snapshot;
    UIImage *_image;
}

@property(readonly) UIImage * image;


- (struct { double x1; double x2; })_coordinateForPoint:(struct CGPoint { float x1; float x2; })arg1;
- (id)_initWithSnapshot:(id)arg1;
- (struct CGPoint { float x1; float x2; })pointForCoordinate:(struct { double x1; double x2; })arg1;
- (id)image;
- (void)dealloc;

@end
