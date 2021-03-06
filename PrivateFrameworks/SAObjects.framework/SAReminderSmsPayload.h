/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSString, NSArray;

@interface SAReminderSmsPayload : AceObject <SAReminderPayload> {
}

@property(copy) NSString * message;
@property(copy) NSArray * recipients;

+ (id)smsPayloadWithDictionary:(id)arg1 context:(id)arg2;
+ (id)smsPayload;

- (id)encodedClassName;
- (id)recipients;
- (void)setRecipients:(id)arg1;
- (id)message;
- (void)setMessage:(id)arg1;
- (id)groupIdentifier;

@end
