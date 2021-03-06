/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSURL, AVAssetResourceLoadingRequest;

@interface SUPastisOperation : ISOperation  {
    NSURL *_certificateUrl;
    NSURL *_keyUrl;
    AVAssetResourceLoadingRequest *_loadingRequest;
}

@property(retain) AVAssetResourceLoadingRequest * loadingRequest;
@property(retain) NSURL * keyURL;
@property(retain) NSURL * certificateURL;


- (void)setLoadingRequest:(id)arg1;
- (id)loadingRequest;
- (void)setKeyURL:(id)arg1;
- (id)keyURL;
- (void)setCertificateURL:(id)arg1;
- (id)certificateURL;
- (id)_getCKCForSPC:(id)arg1 URI:(id)arg2 error:(id*)arg3;
- (id)_getAppCertWithError:(id*)arg1;
- (id)_getURIWithError:(id*)arg1;
- (void)run;
- (void)dealloc;

@end
