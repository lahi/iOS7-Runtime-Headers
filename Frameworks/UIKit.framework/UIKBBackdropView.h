/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSMutableArray, UIKeyboardBackdropCornerView;

@interface UIKBBackdropView : _UIBackdropView  {
    BOOL _primaryBackdrop;
    NSMutableArray *_secondaryBackdrops;
    UIKeyboardBackdropCornerView *_backdropCornerView;
    BOOL _hasUpdatedFrame;
}

@property(readonly) BOOL _hasUpdatedFrame;


- (void)dealloc;
- (BOOL)_hasUpdatedFrame;
- (int)textEffectsVisibilityLevel;
- (void)addSecondaryBackdropView:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 style:(int)arg2 primaryBackdrop:(BOOL)arg3;
- (void)applySettings:(id)arg1;
- (void)transitionToStyle:(int)arg1;
- (void)triggerUpdate:(id)arg1;
- (void)updateFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 withCorners:(int)arg2;

@end
