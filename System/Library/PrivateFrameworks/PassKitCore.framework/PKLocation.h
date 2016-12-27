/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:30 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSNumber, NSString;

@interface PKLocation : NSObject <NSSecureCoding> {

	NSNumber* _latitude;
	NSNumber* _longitude;
	NSNumber* _maxDistance;
	NSNumber* _altitude;
	NSString* _name;
	NSString* _relevantText;

}

@property (nonatomic,copy) NSString * name;                                    //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * relevantText;                            //@synthesize relevantText=_relevantText - In the implementation block
@property (nonatomic,readonly) CLLocationCoordinate2D coordinate; 
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)setAltitude:(id)arg1 ;
-(BOOL)hasAltitude;
-(double)altitude;
-(void)setLatitude:(id)arg1 ;
-(void)setLongitude:(id)arg1 ;
-(double)maxDistance;
-(void)setMaxDistance:(id)arg1 ;
-(CLLocationCoordinate2D)coordinate;
-(double)latitude;
-(double)longitude;
-(void)setRelevantText:(NSString *)arg1 ;
-(NSString *)relevantText;
-(BOOL)hasEqualCoordinatesToLocation:(id)arg1 ;
-(id)CLLocation;
@end
