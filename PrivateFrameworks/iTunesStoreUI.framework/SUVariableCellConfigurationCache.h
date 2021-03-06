/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSMutableDictionary, NSArray;

@interface SUVariableCellConfigurationCache : NSObject  {
    NSMutableDictionary *_caches;
    id _cellContext;
    float _tableHeight;
}

@property(readonly) NSArray * caches;
@property(retain) id cellContext;


- (id)caches;
- (void)setCellContext:(id)arg1;
- (id)initWithTableHeight:(float)arg1;
- (id)cellContext;
- (id)cacheForClass:(Class)arg1;
- (void)resetLayoutCaches;
- (void)reset;
- (void)dealloc;

@end
