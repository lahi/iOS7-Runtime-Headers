/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
 */

@class NSManagedObject, TDColorName, NSDate, NSNumber, TDThemeLook;

@interface TDColorDefinition : NSManagedObject <TDElementAttributes> {
}

@property(retain) NSDate * dateOfLastChange;
@property(retain) NSNumber * physicalColor;
@property(retain) NSManagedObject * colorStatus;
@property(retain) TDThemeLook * look;
@property(retain) TDColorName * name;


- (id)colorAsString;
- (void)setAttributesFromData:(id)arg1;
- (id)dataFromAttributes;
- (void)setAttributesFromCopyData:(id)arg1;
- (id)copyDataFromAttributes;
- (void)copyAttributesInto:(id)arg1;

@end
