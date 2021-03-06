/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class WAKView, CALayer;

@interface WAKWindow : WAKResponder  {
    CALayer *_hostLayer;
    struct TileCache { id x1; struct RetainPtr<CGImage *> { struct CGImage {} *x_2_1_1; } x2; boolx3; boolx4; boolx5; struct RetainPtr<TileCacheTombstone> { struct TileCacheTombstone { } *x_6_1_1; } x6; int x7; int x8; struct IntSize { int x_9_1_1; int x_9_1_2; } x9; boolx10; boolx11; boolx12; boolx13; boolx14; boolx15; struct OwnPtr<WebCore::TileGrid> { struct TileGrid {} *x_16_1_1; } x16; struct OwnPtr<WebCore::TileGrid> { struct TileGrid {} *x_17_1_1; } x17; struct Timer<WebCore::TileCache> { int (**x_18_1_1)(); double x_18_1_2; double x_18_1_3; double x_18_1_4; int x_18_1_5; unsigned int x_18_1_6; struct Vector<WebCore::TimerBase *, 0, WTF::CrashOnOverflow> {} *x_18_1_7; struct TileCache {} *x_18_1_8; } x18; struct Vector<WebCore::IntRect, 0, WTF::CrashOnOverflow> { struct IntRect {} *x_19_1_1; unsigned int x_19_1_2; unsigned int x_19_1_3; } x19; float x20; float x21; float x22; struct Mutex { struct _opaque_pthread_mutex_t { long x_1_2_1; BOOL x_1_2_2[40]; } x_23_1_1; } x23; struct Mutex { struct _opaque_pthread_mutex_t { long x_1_2_1; BOOL x_1_2_2[40]; } x_24_1_1; } x24; struct Mutex { struct _opaque_pthread_mutex_t { long x_1_2_1; BOOL x_1_2_2[40]; } x_25_1_1; } x25; } *_tileCache;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _frozenVisibleRect;
    CALayer *_rootLayer;
    struct CGSize { 
        float width; 
        float height; 
    } _screenSize;
    struct CGSize { 
        float width; 
        float height; 
    } _availableScreenSize;
    float _screenScale;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _frame;
    WAKView *_contentView;
    WAKView *_responderView;
    WAKView *_nextResponder;
    BOOL _visible;
    BOOL _useOrientationDependentFontAntialiasing;
    struct TCMalloc_SpinLock { 
        unsigned int lockword_; 
    } _exposedScrollViewRectLock;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _exposedScrollViewRect;
}

@property BOOL useOrientationDependentFontAntialiasing;
@property struct CGImage { }* contentReplacementImage;

+ (BOOL)hasLandscapeOrientation;
+ (id)currentEvent;
+ (void)setOrientationProvider:(id)arg1;

- (struct CGImage { }*)contentReplacementImage;
- (BOOL)hasPendingDraw;
- (float)currentTileScale;
- (int)tilingDirection;
- (int)tilingMode;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 display:(BOOL)arg2;
- (void)unfreezeVisibleRect;
- (void)freezeVisibleRect;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_visibleRectRespectingMasksToBounds:(BOOL)arg1;
- (void)sendEvent:(id)arg1;
- (BOOL)makeFirstResponder:(id)arg1;
- (void)sendEventSynchronously:(id)arg1;
- (BOOL)isKeyWindow;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })exposedScrollViewRect;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)displayRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)useOrientationDependentFontAntialiasing;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })extendedVisibleRect;
- (id)hostLayer;
- (struct CGPoint { float x1; float x2; })convertScreenToBase:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGPoint { float x1; float x2; })convertBaseToScreen:(struct CGPoint { float x1; float x2; })arg1;
- (struct TileCache { id x1; struct RetainPtr<CGImage *> { struct CGImage {} *x_2_1_1; } x2; boolx3; boolx4; boolx5; struct RetainPtr<TileCacheTombstone> { struct TileCacheTombstone { } *x_6_1_1; } x6; int x7; int x8; struct IntSize { int x_9_1_1; int x_9_1_2; } x9; boolx10; boolx11; boolx12; boolx13; boolx14; boolx15; struct OwnPtr<WebCore::TileGrid> { struct TileGrid {} *x_16_1_1; } x16; struct OwnPtr<WebCore::TileGrid> { struct TileGrid {} *x_17_1_1; } x17; struct Timer<WebCore::TileCache> { int (**x_18_1_1)(); double x_18_1_2; double x_18_1_3; double x_18_1_4; int x_18_1_5; unsigned int x_18_1_6; struct Vector<WebCore::TimerBase *, 0, WTF::CrashOnOverflow> {} *x_18_1_7; struct TileCache {} *x_18_1_8; } x18; struct Vector<WebCore::IntRect, 0, WTF::CrashOnOverflow> { struct IntRect {} *x_19_1_1; unsigned int x_19_1_2; unsigned int x_19_1_3; } x19; float x20; float x21; float x22; struct Mutex { struct _opaque_pthread_mutex_t { long x_1_2_1; BOOL x_1_2_2[40]; } x_23_1_1; } x23; struct Mutex { struct _opaque_pthread_mutex_t { long x_1_2_1; BOOL x_1_2_2[40]; } x_24_1_1; } x24; struct Mutex { struct _opaque_pthread_mutex_t { long x_1_2_1; BOOL x_1_2_2[40]; } x_25_1_1; } x25; }*)tileCache;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })visibleRect;
- (id)contentView;
- (struct CGSize { float x1; float x2; })availableScreenSize;
- (struct CGSize { float x1; float x2; })screenSize;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frame;
- (float)screenScale;
- (float)zoomedOutTileScale;
- (BOOL)isVisible;
- (void)setTilePaintCountsVisible:(BOOL)arg1;
- (void)setTileBordersVisible:(BOOL)arg1;
- (void)setAcceleratedDrawingEnabled:(BOOL)arg1;
- (id)_newFirstResponderAfterResigning;
- (int)keyViewSelectionDirection;
- (id)firstResponder;
- (id)rootLayer;
- (void)setNeedsDisplayInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setNeedsDisplay;
- (id)initWithLayer:(id)arg1;
- (void)setContentView:(id)arg1;
- (void)close;
- (void)dealloc;
- (id).cxx_construct;
- (id)description;
- (void)dumpTiles;
- (BOOL)keepsZoomedOutTiles;
- (void)setKeepsZoomedOutTiles:(BOOL)arg1;
- (BOOL)tilesOpaque;
- (void)setTilingMode:(int)arg1;
- (void)layoutTiles;
- (void)setContentReplacementImage:(struct CGImage { }*)arg1;
- (void)layoutTilesNowForRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setScreenScale:(float)arg1;
- (void)setAvailableScreenSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setScreenSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setRootLayer:(id)arg1;
- (void)sendMouseMoveEvent:(id)arg1 contentChange:(int*)arg2;
- (void)removeForegroundTiles;
- (void)setExposedScrollViewRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setTilingDirection:(int)arg1;
- (void)setUseOrientationDependentFontAntialiasing:(BOOL)arg1;
- (void)removeAllTiles;
- (void)setTilesOpaque:(BOOL)arg1;
- (void)removeAllNonVisibleTiles;
- (void)setZoomedOutTileScale:(float)arg1;
- (void)setCurrentTileScale:(float)arg1;
- (void)setContentRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)didRotate;
- (void)willRotate;
- (void)layoutTilesNow;
- (void)setVisible:(BOOL)arg1;
- (id)recursiveDescription;
- (void)makeKeyWindow;

@end
