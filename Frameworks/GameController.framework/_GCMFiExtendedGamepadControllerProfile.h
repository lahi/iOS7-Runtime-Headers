/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/GameController.framework/GameController
 */

@class _GCACHomeButton;

@interface _GCMFiExtendedGamepadControllerProfile : _GCExtendedGamepad <_GCACHomeButtonDelegate> {
    _GCACHomeButton *_acHome;
}


- (void)toggleSuspendResume;
- (void)setPlayerIndex:(int)arg1;
- (id)inputForElement:(struct __IOHIDElement { }*)arg1;
- (id)initWithController:(id)arg1;
- (id)name;
- (void).cxx_destruct;

@end