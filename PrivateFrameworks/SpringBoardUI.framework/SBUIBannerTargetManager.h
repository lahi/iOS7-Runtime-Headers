/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

@class NSArray, NSMutableArray, NSHashTable;

@interface SBUIBannerTargetManager : NSObject  {
    NSMutableArray *_targets;
    NSHashTable *_observers;
}

@property(readonly) NSArray * targets;

+ (id)sharedInstance;

- (void)unregisterTarget:(id)arg1;
- (void)registerTarget:(id)arg1;
- (id)targets;
- (void)_notifyObservers:(id)arg1;
- (id)init;
- (void)dealloc;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;

@end
