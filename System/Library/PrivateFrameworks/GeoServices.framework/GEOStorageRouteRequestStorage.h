/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:21 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/MSPRouteInformationSource.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, GEOURLRouteHandle, NSMutableArray, NSString;

@interface GEOStorageRouteRequestStorage : PBCodable <MSPRouteInformationSource, NSCopying> {

	PBUnknownFields* _unknownFields;
	GEOURLRouteHandle* _routeHandle;
	int _transportType;
	NSMutableArray* _waypoints;
	SCD_Struct_GE15 _has;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSMutableArray * waypoints;                     //@synthesize waypoints=_waypoints - In the implementation block
@property (assign,nonatomic) BOOL hasTransportType; 
@property (assign,nonatomic) int transportType;                              //@synthesize transportType=_transportType - In the implementation block
@property (nonatomic,readonly) BOOL hasRouteHandle; 
@property (nonatomic,retain) GEOURLRouteHandle * routeHandle;                //@synthesize routeHandle=_routeHandle - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)waypointsType;
-(id)ifGEOStorageRouteRequestStorage;
-(id)ifRidesharingInformationSource;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(BOOL)hasRouteHandle;
-(GEOURLRouteHandle *)routeHandle;
-(void)setRouteHandle:(GEOURLRouteHandle *)arg1 ;
-(int)transportType;
-(void)setTransportType:(int)arg1 ;
-(void)setHasTransportType:(BOOL)arg1 ;
-(BOOL)hasTransportType;
-(id)transportTypeAsString:(int)arg1 ;
-(int)StringAsTransportType:(id)arg1 ;
-(void)clearWaypoints;
-(void)addWaypoints:(id)arg1 ;
-(unsigned long long)waypointsCount;
-(id)waypointsAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)waypoints;
-(void)setWaypoints:(NSMutableArray *)arg1 ;
@end
