/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

@class <ICSLoggingDelegate>;

@interface ICSLogger : NSObject  {
    int _logCount;
    <ICSLoggingDelegate> *_loggingDelegate;
}

+ (void)logAtLevel:(int)arg1 forTokenizer:(id)arg2 message:(id)arg3;
+ (void)setDelegate:(id)arg1;
+ (id)sharedInstance;

- (void)logAtLevel:(int)arg1 forTokenizer:(id)arg2 format:(id)arg3 args:(char *)arg4;
- (void)setDelegate:(id)arg1;

@end
