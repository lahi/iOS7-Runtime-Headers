/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSString;

@interface GEOAttributeKeyValue : PBCodable <NSCopying> {
    NSString *_attributeKey;
    NSString *_attributeValue;
}

@property(retain) NSString * attributeKey;
@property(retain) NSString * attributeValue;


- (id)attributeValue;
- (id)attributeKey;
- (void)setAttributeValue:(id)arg1;
- (void)setAttributeKey:(id)arg1;
- (void)copyTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;

@end
