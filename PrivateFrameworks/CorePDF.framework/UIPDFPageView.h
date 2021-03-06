/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@class NSMutableArray, UIImage, UIPDFViewTouchHandler, CALayer, UIColor, UIPDFSearchHighlightsController, <NSObject><UIPDFPageViewDelegate>, UIPDFPage, UIActivityIndicatorView, UIPDFSelectionController, UIPDFAnnotationController, UIPDFDocument, UIPDFPageContentDelegate;

@interface UIPDFPageView : UIView  {
    UIPDFDocument *_document;
    unsigned int _pageIndex;
    UIPDFViewTouchHandler *_touchHandler;
    struct CGAffineTransform { 
        float a; 
        float b; 
        float c; 
        float d; 
        float tx; 
        float ty; 
    } _pageToViewTransform;
    struct CGAffineTransform { 
        float a; 
        float b; 
        float c; 
        float d; 
        float tx; 
        float ty; 
    } _viewToPageTransform;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _cropBox;
    float _margin;
    BOOL _allowSelection;
    UIPDFSelectionController *_selectionController;
    <NSObject><UIPDFPageViewDelegate> *_delegate;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } zoomRect;
    BOOL _useBackingLayer;
    CALayer *_backingLayer;
    UIImage *_backgroundImage;
    BOOL _backgroundIsScheduled;
    unsigned int _backgroundScheduleCount;
    BOOL _backgroundIsFullResolution;
    BOOL _boundsChanged;
    BOOL _useTiledContent;
    CALayer *_contentLayer;
    CALayer *_effectsLayer;
    UIPDFPageContentDelegate *_contentDelegate;
    UIPDFAnnotationController *_annotationController;
    BOOL _scalePageOnDraw;
    struct CGColor { } *_highLightColor;
    BOOL _animateSetFrame;
    UIActivityIndicatorView *_activityIndicator;
    BOOL _showActivityIndicator;
    UIColor *_backingLayerColor;
    int _lock;
    NSMutableArray *_highlights;
    float _cachedScale;
    BOOL _allowHighlighting;
    UIPDFSearchHighlightsController *_searchHighlightController;
    NSMutableArray *_searchHiglightLayers;
    UIPDFPage *_page;
    BOOL showAnnotations;
    BOOL _allowTwoFingerSelection;
    BOOL _showTextAnnotations;
    BOOL _showLinkAnnotationUnderline;
}

@property(readonly) UIPDFDocument * document;
@property(readonly) unsigned int pageIndex;
@property UIPDFPage * page;
@property <NSObject><UIPDFPageViewDelegate> * delegate;
@property float margin;
@property(readonly) CALayer * contentLayer;
@property(readonly) CALayer * effectsLayer;
@property BOOL allowSelection;
@property BOOL useBackingLayer;
@property UIPDFSelectionController * selectionController;
@property(readonly) struct CGColor { }* highLightColor;
@property BOOL allowMenu;
@property BOOL animateSetFrame;
@property(retain) UIImage * backgroundImage;
@property(retain) UIColor * backingLayerColor;
@property BOOL showActivityIndicator;
@property BOOL showAnnotations;
@property BOOL allowHighlighting;
@property BOOL showTextAnnotations;
@property(readonly) UIPDFAnnotationController * annotationController;
@property BOOL showLinkAnnotationUnderline;
@property BOOL allowTwoFingerSelection;


- (struct CGPDFDictionary { }*)_annotForPoint:(struct CGPoint { float x1; float x2; })arg1 rect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg2;
- (BOOL)showLinkAnnotationUnderline;
- (BOOL)showTextAnnotations;
- (void)setAllowTwoFingerSelection:(BOOL)arg1;
- (BOOL)allowTwoFingerSelection;
- (BOOL)showActivityIndicator;
- (BOOL)useBackingLayer;
- (void)setAnimateSetFrame:(BOOL)arg1;
- (BOOL)animateSetFrame;
- (void)setSelectionController:(id)arg1;
- (id)selectionController;
- (BOOL)allowSelection;
- (id)contentLayer;
- (void)suspendInstantTouchHighlighting;
- (void)addWidgetToSelection;
- (id)searchHighlightSelectionAt:(struct CGPoint { float x1; float x2; })arg1;
- (void)highlightSearchSelection:(id)arg1 animated:(BOOL)arg2;
- (id)effectsLayer;
- (void)showSelection;
- (void)hideSelection;
- (void)displayContent;
- (void)singleTapAt:(struct CGPoint { float x1; float x2; })arg1;
- (void)twoFingerDoubleTapAt:(struct CGPoint { float x1; float x2; })arg1;
- (void)doubleTapAt:(struct CGPoint { float x1; float x2; })arg1;
- (void)ignoreTouches:(BOOL)arg1;
- (void)layoutTextEffects;
- (void)removeBackingLayer;
- (void)setDrawingSurfaceLayer:(id)arg1;
- (id)initWithPage:(id)arg1 tiledContent:(BOOL)arg2;
- (BOOL)allowMenu;
- (BOOL)hasSearchHighlights;
- (void)clearSearchHighlights;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })fitRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })fitWidth:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 atVertical:(float)arg2;
- (struct CGPoint { float x1; float x2; })convertPointToPDFPageSpace:(struct CGPoint { float x1; float x2; })arg1;
- (BOOL)willDoSomethingWithTap:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })rectangleOfInterestAt:(struct CGPoint { float x1; float x2; })arg1 kind:(int*)arg2;
- (void)drawAnnotations:(struct CGContext { }*)arg1;
- (void)setTransforms;
- (void)showContent;
- (void)stopActivityIndicator;
- (BOOL)allowHighlighting;
- (void)scheduleBackgroundImage;
- (id)receiveBackgroundImage:(id)arg1 info:(id)arg2;
- (id)backingLayerColor;
- (void)addLayers:(BOOL)arg1;
- (struct CGColor { }*)highLightColor;
- (void)setShowTextAnnotations:(BOOL)arg1;
- (void)setAllowHighlighting:(BOOL)arg1;
- (void)setAllowMenu:(BOOL)arg1;
- (void)setSelectionNeedsDisplay;
- (void)addPage:(id)arg1;
- (struct CGPoint { float x1; float x2; })convertPointFromPDFPageSpace:(struct CGPoint { float x1; float x2; })arg1;
- (BOOL)showAnnotations;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setMargin:(float)arg1;
- (float)margin;
- (id)document;
- (id)page;
- (void)setNeedsDisplay;
- (id)init;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (unsigned int)pageIndex;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })convertRectFromPDFPageSpace:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })convertRectToPDFPageSpace:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setShowLinkAnnotationUnderline:(BOOL)arg1;
- (void)setShowActivityIndicator:(BOOL)arg1;
- (void)setBackingLayerColor:(id)arg1;
- (id)annotationController;
- (void)setUseBackingLayer:(BOOL)arg1;
- (void)setAllowSelection:(BOOL)arg1;
- (void)setShowAnnotations:(BOOL)arg1;
- (id)initWithPage:(id)arg1;
- (void)didScroll:(id)arg1;
- (void)setPage:(id)arg1;
- (void)didReceiveMemoryWarning:(id)arg1;
- (void)clearSelection;
- (void)setBackgroundImage:(id)arg1;
- (id)backgroundImage;
- (void)willMoveToSuperview:(id)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)layoutSubviews;

@end
