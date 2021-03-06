/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/ApplePushService.framework/ApplePushService
 */

@class NSString, NSObject<OS_dispatch_queue>, NSObject<OS_xpc_object>, NSDictionary, NSMutableDictionary;

@interface APSMessage : NSObject <NSCoding> {
    NSObject<OS_xpc_object> *_xpcMessage;
    NSMutableDictionary *_plist;
    NSObject<OS_dispatch_queue> *_ivarQueue;
}

@property(retain) NSString * topic;
@property(retain) NSDictionary * userInfo;
@property unsigned int identifier;


- (void)setTopic:(id)arg1;
- (id)initWithDictionary:(id)arg1 xpcMessage:(id)arg2;
- (id)topic;
- (id)initWithTopic:(id)arg1 userInfo:(id)arg2;
- (void)setGuid:(id)arg1;
- (id)guid;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)userInfo;
- (id)objectForKey:(id)arg1;
- (void)dealloc;
- (void)setIdentifier:(unsigned int)arg1;
- (unsigned int)identifier;
- (void)setUserInfo:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)dictionaryRepresentation;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
