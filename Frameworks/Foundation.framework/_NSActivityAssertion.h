/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSString, NSLock;

@interface _NSActivityAssertion : NSObject  {
    unsigned long long _options;
    NSLock *_lock;
    BOOL _ended;
    NSString *_reason;
}


- (id)debugDescription;
- (void)dealloc;
- (id)_initWithActivityOptions:(unsigned long long)arg1 reason:(id)arg2;
- (void)_end;

@end
