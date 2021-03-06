/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class NSDate, NSString;

@interface VKTrafficIncident : NSObject  {
    struct VKPoint { 
        double x; 
        double y; 
        double z; 
    } _worldPoint;
    NSString *_title;
    NSString *_subtitle;
    int _type;
    struct { 
        double latitude; 
        double longitude; 
    } _location;
    NSString *_street;
    NSString *_crossStreet;
    NSString *_info;
    NSDate *_startDate;
    NSDate *_endDate;
    NSDate *_lastUpdatedDate;
    float _minZoom;
    NSString *_uniqueString;
    unsigned long long _uniqueID;
}

@property(readonly) NSString * title;
@property(readonly) NSString * subtitle;
@property(readonly) unsigned long long uniqueID;
@property(readonly) NSString * uniqueString;
@property(readonly) int type;
@property(readonly) NSString * street;
@property(readonly) NSString * crossStreet;
@property(readonly) NSString * info;
@property(readonly) NSDate * startDate;
@property(readonly) NSDate * endDate;
@property(readonly) NSDate * lastUpdatedDate;
@property(readonly) struct VKPoint { double x1; double x2; double x3; } worldPoint;
@property(readonly) float minZoom;


- (id)lastUpdatedDate;
- (id)uniqueString;
- (id)initWithRouteIncident:(id)arg1;
- (id)initWithIncident:(id)arg1 vertices:(struct { int x1; int x2; }*)arg2 tileRect:(struct { double x1; double x2; double x3; double x4; })arg3 tileSize:(double)arg4;
- (BOOL)hasSameIdentifier:(id)arg1;
- (id)initWithIncidentData:(const struct Incident { struct GeoCoordinates { struct Longitude { unsigned int x_1_2_1; } x_1_1_1; struct Latitude { unsigned int x_2_2_1; } x_1_1_2; } x1; struct String { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { unsigned int x_1_5_1; unsigned int x_1_5_2; char *x_1_5_3; } x_1_4_1; struct __short { union { unsigned char x_1_6_1; BOOL x_1_6_2; } x_2_5_1; BOOL x_2_5_2[11]; } x_1_4_2; struct __raw { unsigned long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_2_1_1; } x2; struct String { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { unsigned int x_1_5_1; unsigned int x_1_5_2; char *x_1_5_3; } x_1_4_1; struct __short { union { unsigned char x_1_6_1; BOOL x_1_6_2; } x_2_5_1; BOOL x_2_5_2[11]; } x_1_4_2; struct __raw { unsigned long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_3_1_1; } x3; int x4; struct String { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { unsigned int x_1_5_1; unsigned int x_1_5_2; char *x_1_5_3; } x_1_4_1; struct __short { union { unsigned char x_1_6_1; BOOL x_1_6_2; } x_2_5_1; BOOL x_2_5_2[11]; } x_1_4_2; struct __raw { unsigned long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_5_1_1; } x5; struct String { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { unsigned int x_1_5_1; unsigned int x_1_5_2; char *x_1_5_3; } x_1_4_1; struct __short { union { unsigned char x_1_6_1; BOOL x_1_6_2; } x_2_5_1; BOOL x_2_5_2[11]; } x_1_4_2; struct __raw { unsigned long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_6_1_1; } x6; long long x7; long long x8; long long x9; long long x10; int x11; unsigned char x12; boolx13; }*)arg1 worldPoint:(struct VKPoint { double x1; double x2; double x3; }*)arg2;
- (id)initWithIncidentData:(const struct Incident { struct GeoCoordinates { struct Longitude { unsigned int x_1_2_1; } x_1_1_1; struct Latitude { unsigned int x_2_2_1; } x_1_1_2; } x1; struct String { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { unsigned int x_1_5_1; unsigned int x_1_5_2; char *x_1_5_3; } x_1_4_1; struct __short { union { unsigned char x_1_6_1; BOOL x_1_6_2; } x_2_5_1; BOOL x_2_5_2[11]; } x_1_4_2; struct __raw { unsigned long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_2_1_1; } x2; struct String { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { unsigned int x_1_5_1; unsigned int x_1_5_2; char *x_1_5_3; } x_1_4_1; struct __short { union { unsigned char x_1_6_1; BOOL x_1_6_2; } x_2_5_1; BOOL x_2_5_2[11]; } x_1_4_2; struct __raw { unsigned long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_3_1_1; } x3; int x4; struct String { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { unsigned int x_1_5_1; unsigned int x_1_5_2; char *x_1_5_3; } x_1_4_1; struct __short { union { unsigned char x_1_6_1; BOOL x_1_6_2; } x_2_5_1; BOOL x_2_5_2[11]; } x_1_4_2; struct __raw { unsigned long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_5_1_1; } x5; struct String { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { unsigned int x_1_5_1; unsigned int x_1_5_2; char *x_1_5_3; } x_1_4_1; struct __short { union { unsigned char x_1_6_1; BOOL x_1_6_2; } x_2_5_1; BOOL x_2_5_2[11]; } x_1_4_2; struct __raw { unsigned long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_6_1_1; } x6; long long x7; long long x8; long long x9; long long x10; int x11; unsigned char x12; boolx13; }*)arg1 worldPoint:(struct VKPoint { double x1; double x2; double x3; }*)arg2 minZoom:(float)arg3;
- (struct VKPoint { double x1; double x2; double x3; })worldPoint;
- (float)minZoom;
- (id)endDate;
- (id)crossStreet;
- (id)street;
- (id)title;
- (id)startDate;
- (unsigned long long)uniqueID;
- (id)info;
- (void)dealloc;
- (id).cxx_construct;
- (id)subtitle;
- (int)type;

@end
