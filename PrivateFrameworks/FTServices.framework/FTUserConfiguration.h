/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

@interface FTUserConfiguration : NSObject  {
}

@property BOOL cellularFaceTimeEnabled;
@property BOOL allowAnyNetwork;
@property(readonly) BOOL _nonWifiFaceTimeEntitled;

+ (id)sharedInstance;

- (void)setAllowAnyNetwork:(BOOL)arg1;
- (void)setCellularFaceTimeEnabled:(BOOL)arg1;
- (BOOL)_adequateInternalOrCarrierInstall;
- (BOOL)_nonWifiFaceTimeEntitled;
- (BOOL)cellularFaceTimeEnabled;
- (BOOL)allowAnyNetwork;

@end
