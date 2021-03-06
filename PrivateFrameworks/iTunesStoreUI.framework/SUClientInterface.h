/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class SUUIAppearance, UIColor, SUQueueSessionManager, SUTabBarController, SUPurchaseManager, SUPreviewOverlayViewController, <SUClientInterfaceDelegatePrivate>, <SUClientInterfaceDelegate>, NSObject<OS_dispatch_queue>, NSString, NSMutableDictionary, SUViewControllerFactory;

@interface SUClientInterface : NSObject  {
    SUUIAppearance *_appearance;
    NSString *_clientIdentifier;
    UIColor *_darkKeyColor;
    <SUClientInterfaceDelegatePrivate> *_delegate;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    BOOL _ignoresExpectedClientsProtocol;
    UIColor *_lightKeyColor;
    NSString *_localStoragePath;
    SUPurchaseManager *_purchaseManager;
    SUQueueSessionManager *_queueSessionManager;
    NSMutableDictionary *_urlBagKeys;
    NSString *_userAgent;
    SUViewControllerFactory *_viewControllerFactory;
    BOOL _wasLaunchedFromLibrary;
}

@property(copy) NSString * clientIdentifier;
@property <SUClientInterfaceDelegate> * delegate;
@property(copy) SUUIAppearance * appearance;
@property(copy) NSString * localStoragePath;
@property(readonly) SUPreviewOverlayViewController * previewOverlay;
@property(retain) SUPurchaseManager * purchaseManager;
@property(retain) SUQueueSessionManager * queueSessionManager;
@property(readonly) SUTabBarController * tabBarController;
@property(copy) NSString * userAgent;
@property(retain) SUViewControllerFactory * viewControllerFactory;
@property BOOL wasLaunchedFromLibrary;
@property(copy) UIColor * darkKeyColor;
@property(copy) UIColor * lightKeyColor;
@property(getter=_ignoresExpectedClientsProtocol,setter=_setIgnoresExpectedClientsProtocol:) BOOL _ignoresExpectedClientsProtocol;


- (void)setLightKeyColor:(id)arg1;
- (void)setDarkKeyColor:(id)arg1;
- (void)setWasLaunchedFromLibrary:(BOOL)arg1;
- (void)setAppearance:(id)arg1;
- (void)_mediaPlayerViewControllerWillDismiss:(id)arg1 animated:(BOOL)arg2;
- (void)_showPreviewOverlayAnimated:(BOOL)arg1;
- (void)_setIgnoresExpectedClientsProtocol:(BOOL)arg1;
- (BOOL)wasLaunchedFromLibrary;
- (void)_setStatusBarStyle:(int)arg1 animated:(BOOL)arg2;
- (void)_setStatusBarHidden:(BOOL)arg1 withAnimation:(int)arg2;
- (void)_returnToLibrary;
- (void)_presentViewController:(id)arg1 fromViewController:(id)arg2 withTransition:(int)arg3;
- (void)_dismissModalViewControllerFromViewController:(id)arg1 withTransition:(int)arg2;
- (void)_dismissViewControllerFromViewController:(id)arg1 animated:(BOOL)arg2 completion:(id)arg3;
- (void)setViewControllerFactory:(id)arg1;
- (void)setURLBagKey:(id)arg1 forIdentifier:(id)arg2;
- (id)purchaseManager;
- (id)URLBagKeyForIdentifier:(id)arg1;
- (void)setLocalStoragePath:(id)arg1;
- (id)localStoragePath;
- (void)setQueueSessionManager:(id)arg1;
- (id)queueSessionManager;
- (void)setPurchaseManager:(id)arg1;
- (id)_newScriptInterface;
- (BOOL)_ignoresExpectedClientsProtocol;
- (void)_exitStoreWithReason:(int)arg1;
- (id)previewOverlay;
- (void)_presentDialog:(id)arg1;
- (void)_hidePreviewOverlayAnimated:(BOOL)arg1;
- (id)viewControllerFactory;
- (id)lightKeyColor;
- (id)darkKeyColor;
- (id)clientIdentifier;
- (void)setClientIdentifier:(id)arg1;
- (id)userAgent;
- (void)setUserAgent:(id)arg1;
- (id)init;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)tabBarController;
- (id)appearance;

@end
