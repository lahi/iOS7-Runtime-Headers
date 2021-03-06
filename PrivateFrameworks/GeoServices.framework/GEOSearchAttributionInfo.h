/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSString, NSArray;

@interface GEOSearchAttributionInfo : NSObject <NSSecureCoding> {
    NSString *_identifier;
    unsigned int _version;
    NSArray *_logoPaths;
    NSArray *_snippetLogoPaths;
    NSString *_displayName;
    NSArray *_attributionApps;
    unsigned int _attributionRequirementsMask;
}

@property(retain) NSString * identifier;
@property unsigned int version;
@property unsigned int requirementsMask;
@property(retain) NSString * displayName;
@property(retain) NSArray * attributionApps;

+ (BOOL)supportsSecureCoding;

- (void)addLogoPath:(id)arg1;
- (id)snippetLogoPathForScale:(float)arg1;
- (id)logoPathForScale:(float)arg1;
- (BOOL)hasAttributionRequirement:(int)arg1;
- (id)initWithSource:(id)arg1 localizedAttribution:(id)arg2 logoPaths:(id)arg3 snippetLogoPaths:(id)arg4;
- (unsigned int)requirementsMask;
- (void)setRequirementsMask:(unsigned int)arg1;
- (id)attributionApps;
- (void)setAttributionApps:(id)arg1;
- (id)displayName;
- (void)setDisplayName:(id)arg1;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (void)dealloc;
- (id)description;
- (void)setIdentifier:(id)arg1;
- (id)identifier;
- (void)setVersion:(unsigned int)arg1;
- (id)dictionaryRepresentation;
- (unsigned int)version;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
