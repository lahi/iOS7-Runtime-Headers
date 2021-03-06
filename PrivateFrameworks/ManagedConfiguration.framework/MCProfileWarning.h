/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@class NSString;

@interface MCProfileWarning : NSObject <NSCoding> {
    NSString *_localizedTitle;
    NSString *_localizedBody;
    BOOL _isLongForm;
}

@property(retain) NSString * localizedTitle;
@property(retain) NSString * localizedBody;
@property BOOL isLongForm;

+ (id)warningWithLocalizedTitle:(id)arg1 localizedBody:(id)arg2 isLongForm:(BOOL)arg3;

- (void)setLocalizedTitle:(id)arg1;
- (void)setIsLongForm:(BOOL)arg1;
- (BOOL)isLongForm;
- (void)setLocalizedBody:(id)arg1;
- (id)localizedBody;
- (id)initWithLocalizedTitle:(id)arg1 localizedBody:(id)arg2 isLongForm:(BOOL)arg3;
- (void).cxx_destruct;
- (id)localizedTitle;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
