/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOVStyleAttribute : PBCodable  {
    int _intValue;
    unsigned int _key;
    struct { 
        unsigned int intValue : 1; 
    } _has;
}

@property unsigned int key;
@property BOOL hasIntValue;
@property int intValue;


- (void)setHasIntValue:(BOOL)arg1;
- (void)setIntValue:(int)arg1;
- (BOOL)hasIntValue;
- (void)copyTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (int)intValue;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (void)dealloc;
- (id)description;
- (void)setKey:(unsigned int)arg1;
- (id)dictionaryRepresentation;
- (unsigned int)key;

@end
