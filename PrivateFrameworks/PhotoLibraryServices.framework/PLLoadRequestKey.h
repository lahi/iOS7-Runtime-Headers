/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class NSManagedObjectID;

@interface PLLoadRequestKey : NSObject <NSCopying> {
    unsigned short _sourceID;
    NSManagedObjectID *_objectID;
    unsigned int _hash;
}

+ (id)keyWithSource:(id)arg1 asset:(id)arg2;

- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
