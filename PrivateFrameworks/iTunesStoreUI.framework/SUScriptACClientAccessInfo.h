/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class SUScriptAppleAccountType, NSString, NSDictionary, NSMutableDictionary;

@interface SUScriptACClientAccessInfo : SUScriptObject  {
    SUScriptAppleAccountType *_accountType;
    NSMutableDictionary *_dictionary;
}

@property(readonly) NSDictionary * accessInfoDictionary;
@property(retain) SUScriptAppleAccountType * accountType;
@property(readonly) NSString * accessKeyFacebookAppID;
@property(readonly) NSString * accessKeyFacebookPermissions;
@property(readonly) NSString * accessKeyPurposeStatement;

+ (id)webScriptNameForKeyName:(id)arg1;
+ (id)webScriptNameForSelector:(SEL)arg1;
+ (void)initialize;

- (id)accessKeyPurposeStatement;
- (id)accessKeyFacebookPermissions;
- (id)accessKeyFacebookAppID;
- (void)setValue:(id)arg1 forAccessKey:(id)arg2;
- (id)valueForAccessKey:(id)arg1;
- (id)accessInfoDictionary;
- (id)_className;
- (id)scriptAttributeKeys;
- (id)accountType;
- (void)setAccountType:(id)arg1;
- (id)attributeKeys;
- (id)init;
- (void)dealloc;

@end