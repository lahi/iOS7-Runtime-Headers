/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/MapKit.framework/MapKit
 */

@class NSString, MKRouteStepPolyline, GEOStep, MKPolyline;

@interface MKRouteStep : NSObject  {
    GEOStep *_geoStep;
    NSString *_instructions;
    unsigned int _transportType;
    MKRouteStepPolyline *_polyline;
}

@property(readonly) NSString * instructions;
@property(readonly) NSString * notice;
@property(readonly) MKPolyline * polyline;
@property(readonly) double distance;
@property(readonly) unsigned int transportType;


- (id)polyline;
- (id)_initWithGEOStep:(id)arg1 instructions:(id)arg2 transportType:(unsigned int)arg3 polyline:(id)arg4;
- (double)distance;
- (unsigned int)transportType;
- (id)notice;
- (id)instructions;
- (void)dealloc;

@end
