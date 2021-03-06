/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:35 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreRoutine/CoreRoutine-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol GEOMapItem;
@class NSDate, RTLocation, NSString, NSUUID, NSData, RTLocationOfInterest;

@interface RTVehicleEvent : NSObject <NSCopying, NSSecureCoding> {

	BOOL _userSetLocation;
	BOOL _usualLocation;
	BOOL _confirmed;
	BOOL _locationFinalized;
	NSDate* _date;
	RTLocation* _location;
	NSString* _vehicleIdentifier;
	NSString* _notes;
	NSUUID* _identifier;
	NSData* _photo;
	id<GEOMapItem> _geoMapItem;
	unsigned long long _locationQuality;
	RTLocationOfInterest* _nearbyLocationOfInterest;

}

@property (nonatomic,copy) NSDate * date;                                                //@synthesize date=_date - In the implementation block
@property (nonatomic,copy) RTLocation * location;                                        //@synthesize location=_location - In the implementation block
@property (nonatomic,copy) NSString * vehicleIdentifier;                                 //@synthesize vehicleIdentifier=_vehicleIdentifier - In the implementation block
@property (assign,nonatomic) BOOL userSetLocation;                                       //@synthesize userSetLocation=_userSetLocation - In the implementation block
@property (nonatomic,copy) NSString * notes;                                             //@synthesize notes=_notes - In the implementation block
@property (nonatomic,copy) NSUUID * identifier;                                          //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSData * photo;                                             //@synthesize photo=_photo - In the implementation block
@property (nonatomic,retain) id<GEOMapItem> geoMapItem;                                  //@synthesize geoMapItem=_geoMapItem - In the implementation block
@property (assign,nonatomic) unsigned long long locationQuality;                         //@synthesize locationQuality=_locationQuality - In the implementation block
@property (assign,nonatomic) BOOL usualLocation;                                         //@synthesize usualLocation=_usualLocation - In the implementation block
@property (nonatomic,copy) RTLocationOfInterest * nearbyLocationOfInterest;              //@synthesize nearbyLocationOfInterest=_nearbyLocationOfInterest - In the implementation block
@property (assign,nonatomic) BOOL confirmed;                                             //@synthesize confirmed=_confirmed - In the implementation block
@property (assign,nonatomic) BOOL locationFinalized;                                     //@synthesize locationFinalized=_locationFinalized - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSUUID *)identifier;
-(NSDate *)date;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIdentifier:(NSUUID *)arg1 ;
-(void)setDate:(NSDate *)arg1 ;
-(RTLocation *)location;
-(void)setLocation:(RTLocation *)arg1 ;
-(void)setPhoto:(NSData *)arg1 ;
-(id<GEOMapItem>)geoMapItem;
-(NSString *)vehicleIdentifier;
-(void)setGeoMapItem:(id<GEOMapItem>)arg1 ;
-(void)setConfirmed:(BOOL)arg1 ;
-(NSString *)notes;
-(void)setNotes:(NSString *)arg1 ;
-(id)initWithDate:(id)arg1 ;
-(NSData *)photo;
-(RTLocationOfInterest *)nearbyLocationOfInterest;
-(id)initWithDate:(id)arg1 location:(id)arg2 vehicleIdentifier:(id)arg3 userSetLocation:(BOOL)arg4 notes:(id)arg5 identifier:(id)arg6 photo:(id)arg7 geoMapItem:(id)arg8 confirmed:(BOOL)arg9 ;
-(void)setLocationQuality:(unsigned long long)arg1 ;
-(void)setLocationFinalized:(BOOL)arg1 ;
-(BOOL)locationFinalized;
-(BOOL)confirmed;
-(BOOL)userSetLocation;
-(void)setUserSetLocation:(BOOL)arg1 ;
-(BOOL)usualLocation;
-(unsigned long long)locationQuality;
-(void)setUsualLocation:(BOOL)arg1 ;
-(void)setNearbyLocationOfInterest:(RTLocationOfInterest *)arg1 ;
-(void)setVehicleIdentifier:(NSString *)arg1 ;
@end

