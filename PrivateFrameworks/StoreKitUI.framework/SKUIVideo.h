/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSURL, NSString, SKUIArtworkList;

@interface SKUIVideo : NSObject  {
    NSURL *_url;
    NSString *_title;
    NSString *_runtime;
    SKUIArtworkList *_artworks;
}

@property(readonly) NSURL * URL;
@property(readonly) NSString * title;
@property(readonly) NSString * runtime;
@property(readonly) SKUIArtworkList * artworks;


- (id)runtime;
- (id)initWithVideoDictionary:(id)arg1;
- (id)artworks;
- (id)title;
- (void).cxx_destruct;
- (id)URL;

@end
