/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VGLUncompressedTexture : VGLTexture  {
    struct CGImage { } *_image;
    char *_imageData;
    unsigned int _pixelFormat;
    unsigned int _colorFormat;
    struct CGImageBlockSet { } *_blockSetRef;
    BOOL _fastPath;
}


- (struct BRectImp<float> { struct Vec2Imp<float> { float x_1_1_1; float x_1_1_2; } x1; struct Vec2Imp<float> { float x_2_1_1; float x_2_1_2; } x2; })textureCoordinateRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)loadTexture;
- (BOOL)decodeTexture;
- (BOOL)isFlipped;
- (id)initWithCGImage:(struct CGImage { }*)arg1;
- (void)dealloc;
- (id)initWithData:(id)arg1;

@end
