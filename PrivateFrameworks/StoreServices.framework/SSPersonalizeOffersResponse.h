/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class NSMutableDictionary, NSArray;

@interface SSPersonalizeOffersResponse : NSObject <SSXPCCoding> {
    NSMutableDictionary *_actionDisplayNames;
    NSMutableDictionary *_actionParameters;
    NSArray *_items;
    NSMutableDictionary *_priceDisplayNames;
}

@property(readonly) NSArray * personalizedItems;


- (void)setPriceDisplayString:(id)arg1 forItemType:(id)arg2;
- (void)setActionDisplayNameString:(id)arg1 forItemType:(id)arg2;
- (void)setActionParameters:(id)arg1 forItemIdentifier:(id)arg2;
- (id)personalizedItems;
- (void)_setPersonalizedItems:(id)arg1;
- (id)actionDisplayNameForItemType:(id)arg1;
- (id)priceDisplayForItemType:(id)arg1;
- (id)actionParametersForItemIdentifier:(id)arg1;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;
- (void)dealloc;

@end
