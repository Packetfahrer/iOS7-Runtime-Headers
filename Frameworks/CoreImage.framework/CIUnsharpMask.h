/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@class CIImage, NSNumber;

@interface CIUnsharpMask : CIFilter  {
    CIImage *inputImage;
    NSNumber *inputRadius;
    NSNumber *inputIntensity;
}

@property(retain) CIImage * inputImage;
@property(retain) NSNumber * inputRadius;
@property(retain) NSNumber * inputIntensity;

+ (id)customAttributes;

- (id)inputRadius;
- (void)setInputRadius:(id)arg1;
- (id)inputIntensity;
- (id)_kernel;
- (void)setInputIntensity:(id)arg1;
- (void)setInputImage:(id)arg1;
- (id)inputImage;
- (BOOL)_isIdentity;
- (id)outputImage;
- (void)setDefaults;

@end
