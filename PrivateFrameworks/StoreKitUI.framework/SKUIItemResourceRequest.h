/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSArray, NSString, <SKUIItemRequestDelegate>;

@interface SKUIItemResourceRequest : SKUIResourceRequest <NSCopying> {
    <SKUIItemRequestDelegate> *_delegate;
    NSString *_imageProfile;
    NSArray *_itemIdentifiers;
    NSString *_keyProfile;
}

@property <SKUIItemRequestDelegate> * delegate;
@property(copy) NSString * imageProfile;
@property(copy) NSString * keyProfile;
@property(copy) NSArray * itemIdentifiers;


- (void)setImageProfile:(id)arg1;
- (id)imageProfile;
- (id)newLoadOperation;
- (void)finishWithResource:(id)arg1;
- (void)setItemIdentifiers:(id)arg1;
- (id)itemIdentifiers;
- (void)setKeyProfile:(id)arg1;
- (id)keyProfile;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)delegate;

@end
