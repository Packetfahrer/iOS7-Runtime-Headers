/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/GLKit.framework/GLKit
 */

@interface GLKEffectPropertyFog : GLKEffectProperty  {
    unsigned char _enabled;
    int _mode;
    union _GLKVector4 { 
        struct { 
            float x; 
            float y; 
            float z; 
            float w; 
        } ; 
        struct { 
            float r; 
            float g; 
            float b; 
            float a; 
        } ; 
        struct { 
            float s; 
            float t; 
            float p; 
            float q; 
        } ; 
        float v[4]; 
    } _color;
    float _density;
    float _start;
    float _end;
    int _modeLoc;
    int _colorLoc;
    int _densityLoc;
    int _startLoc;
    int _endLoc;
}

@property unsigned char enabled;
@property int mode;
@property union _GLKVector4 { struct { float x_1_1_1; float x_1_1_2; float x_1_1_3; float x_1_1_4; } x1; struct { float x_2_1_1; float x_2_1_2; float x_2_1_3; float x_2_1_4; } x2; struct { float x_3_1_1; float x_3_1_2; float x_3_1_3; float x_3_1_4; } x3; float x4[4]; } color;
@property float density;
@property float start;
@property float end;
@property int modeLoc;
@property int colorLoc;
@property int densityLoc;
@property int startLoc;
@property int endLoc;

+ (void)setStaticMasksWithVshRoot:(id)arg1 fshRoot:(id)arg2;

- (void)setEndLoc:(int)arg1;
- (int)endLoc;
- (void)setStartLoc:(int)arg1;
- (int)startLoc;
- (void)setDensityLoc:(int)arg1;
- (int)densityLoc;
- (void)setColorLoc:(int)arg1;
- (int)colorLoc;
- (void)setModeLoc:(int)arg1;
- (int)modeLoc;
- (void)setShaderBindings;
- (void)initializeMasks;
- (bool)includeFshShaderTextForRootNode:(id)arg1;
- (bool)includeVshShaderTextForRootNode:(id)arg1;
- (void)dirtyAllUniforms;
- (void)setStart:(float)arg1;
- (void)setEnd:(float)arg1;
- (void)setDensity:(float)arg1;
- (float)density;
- (union _GLKVector4 { struct { float x_1_1_1; float x_1_1_2; float x_1_1_3; float x_1_1_4; } x1; struct { float x_2_1_1; float x_2_1_2; float x_2_1_3; float x_2_1_4; } x2; struct { float x_3_1_1; float x_3_1_2; float x_3_1_3; float x_3_1_4; } x3; float x4[4]; })color;
- (void)setEnabled:(unsigned char)arg1;
- (unsigned char)enabled;
- (id)init;
- (void)setMode:(int)arg1;
- (void)bind;
- (void)dealloc;
- (id)description;
- (float)end;
- (void)setColor:(union _GLKVector4 { struct { float x_1_1_1; float x_1_1_2; float x_1_1_3; float x_1_1_4; } x1; struct { float x_2_1_1; float x_2_1_2; float x_2_1_3; float x_2_1_4; } x2; struct { float x_3_1_1; float x_3_1_2; float x_3_1_3; float x_3_1_4; } x3; float x4[4]; })arg1;
- (int)mode;
- (float)start;

@end
