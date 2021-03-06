/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface WDAAnchor : NSObject  {
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } mBounds;
    int mTextWrappingMode;
    int mTextWrappingModeType;
    double mWrapDistanceLeft;
    double mWrapDistanceTop;
    double mWrapDistanceRight;
    double mWrapDistanceBottom;
    int mHorizontalPosition;
    int mRelativeHorizontalPosition;
    int mVerticalPosition;
    int mRelativeVerticalPosition;
    BOOL mIsBehindText;
    BOOL mAllowOverlap;
    BOOL mMoveWithText;
    long mZIndexTotal;
    long mZIndex;
}

@property struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } bounds;
@property int textWrappingMode;
@property int textWrappingModeType;
@property BOOL allowOverlap;


- (BOOL)allowOverlap;
- (int)textWrappingModeType;
- (void)setZIndexTotal:(long)arg1;
- (long)zIndexTotal;
- (double)wrapDistanceBottom;
- (double)wrapDistanceRight;
- (double)wrapDistanceTop;
- (double)wrapDistanceLeft;
- (void)setBehindText:(BOOL)arg1;
- (void)setAllowOverlap:(BOOL)arg1;
- (void)setWrapDistanceBottom:(double)arg1;
- (void)setWrapDistanceRight:(double)arg1;
- (void)setWrapDistanceTop:(double)arg1;
- (void)setWrapDistanceLeft:(double)arg1;
- (void)setVerticalPosition:(int)arg1;
- (void)setHorizontalPosition:(int)arg1;
- (void)setTextWrappingModeType:(int)arg1;
- (void)setTextWrappingMode:(int)arg1;
- (void)setRelativeVerticalPosition:(int)arg1;
- (void)setRelativeHorizontalPosition:(int)arg1;
- (int)verticalPosition;
- (int)horizontalPosition;
- (int)relativeHorizontalPosition;
- (int)textWrappingMode;
- (BOOL)isBehindText;
- (int)relativeVerticalPosition;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })bounds;
- (id)init;
- (id).cxx_construct;
- (void)setZIndex:(long)arg1;
- (long)zIndex;

@end
