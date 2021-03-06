/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

@class ICSTokenizer, NSData;

@interface ICSParser : NSObject  {
    int _options;
    ICSTokenizer *_lexer;
    NSData *_data;
}

@property(readonly) ICSTokenizer * lexer;

+ (id)entitiesFromNSData:(id)arg1 options:(int)arg2;

- (id)lexer;
- (id)parseData;
- (BOOL)parseProperty:(id)arg1;
- (void)parseComponent:(id)arg1;
- (id)makeComponent:(char *)arg1;
- (BOOL)createPropertyType:(int)arg1 component:(id)arg2 withName:(id)arg3;
- (void)parseParameter:(id)arg1;
- (id)initWithData:(id)arg1 options:(unsigned int)arg2;
- (void)dealloc;

@end
