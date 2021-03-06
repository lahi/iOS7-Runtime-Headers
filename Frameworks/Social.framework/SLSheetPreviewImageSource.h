/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/Social.framework/Social
 */

@class ALAssetsLibrary, AVAssetImageGenerator;

@interface SLSheetPreviewImageSource : NSObject  {
    ALAssetsLibrary *_assetsLibrary;
    AVAssetImageGenerator *_assetImageGenerator;
}

@property(readonly) ALAssetsLibrary * assetsLibrary;


- (void)cancelVideoPreviewGeneration;
- (void)previewImageForAttachment:(id)arg1 resultBlock:(id)arg2;
- (id)assetsLibrary;
- (void)_generatePreviewImageForVideoFileURL:(id)arg1 resultBlock:(id)arg2;
- (void)_fetchPreviewImageForAssetURL:(id)arg1 resultBlock:(id)arg2;
- (void)_generatePreviewImageForAttachment:(id)arg1 resultBlock:(id)arg2;
- (void).cxx_destruct;

@end
