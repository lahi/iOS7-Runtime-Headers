/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
 */

@class ACDClientAuthorizationManager, ACDDatabase, ACDClient;

@interface ACDOAuthSigner : NSObject <ACDOAuthSignerProtocol> {
    ACDDatabase *_database;
    ACDClient *_client;
    ACDClientAuthorizationManager *_authorizationManager;
    BOOL _shouldIncludeAppIdInRequest;
}


- (id)signedRequest:(id)arg1 withAccount:(id)arg2 applicationID:(id)arg3 timestamp:(id)arg4;
- (id)_signedRequest:(id)arg1 withAccountObject:(id)arg2 applicationID:(id)arg3 timestamp:(id)arg4;
- (BOOL)_permissionGrantedForBundleID:(id)arg1 onAccountType:(id)arg2;
- (id)csForAccountType:(id)arg1;
- (id)ckForAccountType:(id)arg1;
- (void)signURLRequest:(id)arg1 withAccount:(id)arg2 applicationID:(id)arg3 timestamp:(id)arg4 handler:(id)arg5;
- (void)signURLRequest:(id)arg1 withAccount:(id)arg2 callingPID:(id)arg3 timestamp:(id)arg4 handler:(id)arg5;
- (void)setClientBundleID:(id)arg1 withHandler:(id)arg2;
- (id)initWithClient:(id)arg1;
- (void).cxx_destruct;
- (void)setShouldIncludeAppIdInRequest:(BOOL)arg1;

@end
