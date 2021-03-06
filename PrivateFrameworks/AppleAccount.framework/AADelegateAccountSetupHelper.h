/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class AASetupAssistantService, NSArray, NSObject<OS_dispatch_source>, ACAccountStore, NSMutableArray, NSMutableDictionary;

@interface AADelegateAccountSetupHelper : NSObject  {
    ACAccountStore *_accountStore;
    AASetupAssistantService *_aaService;
    NSArray *_delegatesToSetup;
    NSMutableArray *_pendingCompletionBundles;
    NSMutableDictionary *_assistantDelegates;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _handler;

    NSObject<OS_dispatch_source> *_delegatetimer;
}


- (void)setupiCloudDelegateWithUsername:(id)arg1 password:(id)arg2 emailChoice:(id)arg3 withHandler:(id)arg4;
- (id)_adjustResponseDictionary:(id)arg1;
- (void)_completeiCloudAndDelegateSetupWithResponse:(id)arg1;
- (id)_loadAssistantDelegateBundles;
- (void)_setupDelegateAccountsWithEmailChoice:(id)arg1;
- (id)initWithStore:(id)arg1;
- (id)init;
- (void).cxx_destruct;

@end
