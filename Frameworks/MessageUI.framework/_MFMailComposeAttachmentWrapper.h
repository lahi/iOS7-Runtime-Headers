/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@class NSData, NSString;

@interface _MFMailComposeAttachmentWrapper : NSObject  {
    NSData *_data;
    NSString *_mimeType;
    NSString *_fileName;
    NSString *_identifier;
}

@property(readonly) NSData * data;
@property(readonly) NSString * mimeType;
@property(readonly) NSString * fileName;
@property(readonly) NSString * identifier;

+ (id)wrapperWithData:(id)arg1 mimeType:(id)arg2 fileName:(id)arg3;

- (id)initWithData:(id)arg1 mimeType:(id)arg2 fileName:(id)arg3;
- (id)data;
- (void)dealloc;
- (id)identifier;
- (id)mimeType;
- (id)fileName;

@end
