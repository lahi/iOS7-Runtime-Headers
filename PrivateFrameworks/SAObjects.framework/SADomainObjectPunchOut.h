/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class SADomainObject;

@interface SADomainObjectPunchOut : SABaseClientBoundCommand  {
}

@property(retain) SADomainObject * domainItem;

+ (id)domainObjectPunchOutWithDictionary:(id)arg1 context:(id)arg2;
+ (id)domainObjectPunchOut;

- (void)setDomainItem:(id)arg1;
- (id)domainItem;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)groupIdentifier;

@end
