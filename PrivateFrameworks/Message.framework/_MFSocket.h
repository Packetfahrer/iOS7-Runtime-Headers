/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/Message.framework/Message
 */

@class NSArray, MFStream, NSString, NSInvocation, NSCondition, NSData;

@interface _MFSocket : NSObject  {
    NSCondition *_condition;
    MFStream *_stream;
    NSString *_protocol;
    NSString *_host;
    NSString *_service;
    struct __CFString { } *_connectionServiceType;
    NSInvocation *_eventHandler;
    NSArray *_clientCertificates;
    int _lowThroughputCounter;
    int _numTimeoutSecs;
    BOOL _allowsTrustPrompt;
    BOOL _usesOpportunisticSockets;
    BOOL _socketCanRead;
    BOOL _socketCanWrite;
    NSString *_sourceApplicationBundleIdentifier;
    NSString *_accountIdentifier;
}

@property int timeout;
@property BOOL allowsTrustPrompt;
@property BOOL usesOpportunisticSockets;
@property(retain) NSArray * clientCertificates;
@property(copy) NSString * sourceApplicationBundleIdentifier;
@property(copy) NSString * accountIdentifier;
@property(readonly) NSArray * serverCertificates;
@property(readonly) NSString * remoteHostname;
@property(readonly) unsigned int remotePortNumber;
@property(readonly) NSData * sourceIPAddress;
@property(readonly) BOOL isReadable;
@property(readonly) BOOL isWritable;
@property(readonly) BOOL isCellularConnection;
@property(readonly) BOOL isValid;


- (void)setUsesOpportunisticSockets:(BOOL)arg1;
- (BOOL)usesOpportunisticSockets;
- (unsigned int)remotePortNumber;
- (void)setEventHandler:(id)arg1;
- (int)readBytes:(char *)arg1 length:(unsigned long)arg2;
- (int)writeBytes:(const char *)arg1 length:(unsigned long)arg2;
- (BOOL)connectToHost:(id)arg1 withPort:(unsigned int)arg2 service:(id)arg3;
- (id)serverCertificates;
- (unsigned int)_bufferedByteCount;
- (BOOL)_startSSLHandshakeWithProtocol:(id)arg1 disableSSL2:(BOOL)arg2 errorPtr:(id*)arg3;
- (void)enableExcessiveKeepaliveDetection:(BOOL)arg1;
- (void)enableThroughputMonitoring:(BOOL)arg1;
- (id)sourceIPAddress;
- (id)remoteHostname;
- (BOOL)setSecurityProtocol:(id)arg1;
- (id)securityProtocol;
- (void)setSourceApplicationBundleIdentifier:(id)arg1;
- (id)sourceApplicationBundleIdentifier;
- (void)setAllowsTrustPrompt:(BOOL)arg1;
- (BOOL)allowsTrustPrompt;
- (void)setConnectionServiceType:(struct __CFString { }*)arg1;
- (void)setClientCertificates:(id)arg1;
- (id)clientCertificates;
- (BOOL)isWritable;
- (BOOL)isCellularConnection;
- (BOOL)isReadable;
- (void)setAccountIdentifier:(id)arg1;
- (id)accountIdentifier;
- (int)timeout;
- (id)init;
- (BOOL)isValid;
- (void)dealloc;
- (void)setTimeout:(int)arg1;
- (void)abort;

@end
