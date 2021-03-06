/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSTextContainer, NSDictionary, NSLayoutManager, NSTextStorage;

@interface _UITextContainerView : UIView <NSUITextViewCommonMethods> {
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _textContainerInset;
    struct CGPoint { 
        float x; 
        float y; 
    } _textContainerOrigin;
    struct CGSize { 
        float width; 
        float height; 
    } _minSize;
    struct CGSize { 
        float width; 
        float height; 
    } _maxSize;
    NSTextContainer *_textContainer;
    NSDictionary *_linkTextAttributes;
    struct { 
        unsigned int textContainerOriginInvalid : 1; 
        unsigned int verticalLayout : 2; 
        unsigned int horizontallyResizable : 1; 
        unsigned int verticallyResizable : 1; 
    } _tcvFlags;
}

@property NSTextContainer * textContainer;
@property(readonly) NSTextStorage * textStorage;
@property(readonly) NSLayoutManager * layoutManager;
@property struct UIEdgeInsets { float x1; float x2; float x3; float x4; } textContainerInset;
@property(getter=isHorizontallyResizable) BOOL horizontallyResizable;
@property(getter=isVerticallyResizable) BOOL verticallyResizable;
@property struct CGSize { float x1; float x2; } minSize;
@property struct CGSize { float x1; float x2; } maxSize;
@property(copy) NSDictionary * linkTextAttributes;
@property BOOL usesTiledViews;
@property int layoutOrientation;
@property struct _NSRange { unsigned int x1; unsigned int x2; } markedRange;

+ (Class)layerClass;

- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })visibleRect;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setTextContainer:(id)arg1;
- (void)setNeedsDisplayInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 avoidAdditionalLayout:(BOOL)arg2;
- (struct CGPoint { float x1; float x2; })textContainerOrigin;
- (void)setConstrainedFrameSize:(struct CGSize { float x1; float x2; })arg1;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })textContainerInset;
- (struct _NSRange { unsigned int x1; unsigned int x2; })markedRange;
- (id)layoutManager;
- (void)updateInsertionPointStateAndRestartTimer:(BOOL)arg1;
- (void)invalidateTextContainerOrigin;
- (id)linkTextAttributes;
- (int)layoutOrientation;
- (id)textStorage;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)delegate;
- (void)_ensureLayoutCompleteToEndOfCharacterRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (BOOL)isVerticallyResizable;
- (BOOL)_ensureLayoutCompleteForRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 withExtensionFactor:(float)arg2 minimumExtensionDistance:(float)arg3 repetitions:(unsigned int)arg4;
- (struct _NSRange { unsigned int x1; unsigned int x2; })_extendedGlyphRangeForRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 maxGlyphIndex:(unsigned int)arg2 drawingToScreen:(BOOL)arg3;
- (BOOL)_ensureLayoutCompleteForRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 withExtension:(BOOL)arg2;
- (void)_ensureMinAndMaxSizesConsistentWithBounds;
- (void)setLinkTextAttributes:(id)arg1;
- (void)setTextContainerInset:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setHorizontallyResizable:(BOOL)arg1;
- (BOOL)usesTiledViews;
- (void)setMinSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setUsesTiledViews:(BOOL)arg1;
- (void)setVerticallyResizable:(BOOL)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 textContainer:(id)arg2;
- (void)setMaxSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setLayoutOrientation:(int)arg1;
- (id)textContainer;
- (BOOL)isHorizontallyResizable;
- (struct CGSize { float x1; float x2; })minSize;
- (void)_didScroll;
- (void)sizeToFit;
- (void)tintColorDidChange;
- (struct CGSize { float x1; float x2; })maxSize;

@end
