/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASettingSetValue : SASettingCommand  {
}

@property BOOL dryRun;
@property BOOL failOnSiriDisconnectWarnings;

+ (id)setValueWithDictionary:(id)arg1 context:(id)arg2;
+ (id)setValue;

- (void)setFailOnSiriDisconnectWarnings:(BOOL)arg1;
- (BOOL)failOnSiriDisconnectWarnings;
- (void)setDryRun:(BOOL)arg1;
- (BOOL)dryRun;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)groupIdentifier;

@end
