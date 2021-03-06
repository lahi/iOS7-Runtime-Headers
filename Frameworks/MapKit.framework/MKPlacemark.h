/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/MapKit.framework/MapKit
 */

@class NSString;

@interface MKPlacemark : CLPlacemark <MKAnnotation> {
}

@property(readonly) NSString * countryCode;
@property(readonly) struct { double x1; double x2; } coordinate;
@property(readonly) NSString * title;
@property(readonly) NSString * subtitle;


- (id)initWithCoordinate:(struct { double x1; double x2; })arg1 addressDictionary:(id)arg2;
- (id)thoroughfare;
- (id)title;
- (id)countryCode;
- (struct { double x1; double x2; })coordinate;

@end
