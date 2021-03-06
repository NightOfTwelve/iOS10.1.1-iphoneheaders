/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:51 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Navigation/Navigation-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, GEORoute, MNRouteCoordinate, GEOETARoute;

@interface MNTrafficIncidentAlertDetails : PBCodable <NSCopying> {

	double _alertTimestamp;
	double _distanceToIncident;
	double _etaTimestamp;
	NSData* _alertID;
	unsigned _alertType;
	GEORoute* _alternateRoute;
	MNRouteCoordinate* _endValidCoordinateRange;
	GEOETARoute* _etaRoute;
	MNRouteCoordinate* _incidentCoordinate;
	GEORoute* _originalRoute;
	MNRouteCoordinate* _startValidCoordinateRange;
	BOOL _isAutomaticReroute;
	SCD_Struct_MN1 _has;

}

@property (nonatomic,readonly) BOOL hasAlertID; 
@property (nonatomic,retain) NSData * alertID;                                           //@synthesize alertID=_alertID - In the implementation block
@property (assign,nonatomic) BOOL hasAlertType; 
@property (assign,nonatomic) unsigned alertType;                                         //@synthesize alertType=_alertType - In the implementation block
@property (nonatomic,readonly) BOOL hasEtaRoute; 
@property (nonatomic,retain) GEOETARoute * etaRoute;                                     //@synthesize etaRoute=_etaRoute - In the implementation block
@property (nonatomic,readonly) BOOL hasOriginalRoute; 
@property (nonatomic,retain) GEORoute * originalRoute;                                   //@synthesize originalRoute=_originalRoute - In the implementation block
@property (nonatomic,readonly) BOOL hasAlternateRoute; 
@property (nonatomic,retain) GEORoute * alternateRoute;                                  //@synthesize alternateRoute=_alternateRoute - In the implementation block
@property (nonatomic,readonly) BOOL hasStartValidCoordinateRange; 
@property (nonatomic,retain) MNRouteCoordinate * startValidCoordinateRange;              //@synthesize startValidCoordinateRange=_startValidCoordinateRange - In the implementation block
@property (nonatomic,readonly) BOOL hasEndValidCoordinateRange; 
@property (nonatomic,retain) MNRouteCoordinate * endValidCoordinateRange;                //@synthesize endValidCoordinateRange=_endValidCoordinateRange - In the implementation block
@property (nonatomic,readonly) BOOL hasIncidentCoordinate; 
@property (nonatomic,retain) MNRouteCoordinate * incidentCoordinate;                     //@synthesize incidentCoordinate=_incidentCoordinate - In the implementation block
@property (assign,nonatomic) BOOL hasAlertTimestamp; 
@property (assign,nonatomic) double alertTimestamp;                                      //@synthesize alertTimestamp=_alertTimestamp - In the implementation block
@property (assign,nonatomic) BOOL hasEtaTimestamp; 
@property (assign,nonatomic) double etaTimestamp;                                        //@synthesize etaTimestamp=_etaTimestamp - In the implementation block
@property (assign,nonatomic) BOOL hasDistanceToIncident; 
@property (assign,nonatomic) double distanceToIncident;                                  //@synthesize distanceToIncident=_distanceToIncident - In the implementation block
@property (assign,nonatomic) BOOL hasIsAutomaticReroute; 
@property (assign,nonatomic) BOOL isAutomaticReroute;                                    //@synthesize isAutomaticReroute=_isAutomaticReroute - In the implementation block
+(id)detailsForTrafficIncidentAlert:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasOriginalRoute;
-(GEORoute *)originalRoute;
-(void)setOriginalRoute:(GEORoute *)arg1 ;
-(unsigned)alertType;
-(void)setAlertType:(unsigned)arg1 ;
-(void)setHasAlertType:(BOOL)arg1 ;
-(BOOL)hasAlertType;
-(void)setAlternateRoute:(GEORoute *)arg1 ;
-(GEORoute *)alternateRoute;
-(BOOL)hasAlertID;
-(BOOL)hasEtaRoute;
-(BOOL)hasAlternateRoute;
-(BOOL)hasStartValidCoordinateRange;
-(BOOL)hasEndValidCoordinateRange;
-(BOOL)hasIncidentCoordinate;
-(void)setAlertTimestamp:(double)arg1 ;
-(void)setHasAlertTimestamp:(BOOL)arg1 ;
-(BOOL)hasAlertTimestamp;
-(void)setEtaTimestamp:(double)arg1 ;
-(void)setHasEtaTimestamp:(BOOL)arg1 ;
-(BOOL)hasEtaTimestamp;
-(void)setDistanceToIncident:(double)arg1 ;
-(void)setHasDistanceToIncident:(BOOL)arg1 ;
-(BOOL)hasDistanceToIncident;
-(void)setIsAutomaticReroute:(BOOL)arg1 ;
-(void)setHasIsAutomaticReroute:(BOOL)arg1 ;
-(BOOL)hasIsAutomaticReroute;
-(NSData *)alertID;
-(void)setAlertID:(NSData *)arg1 ;
-(GEOETARoute *)etaRoute;
-(void)setEtaRoute:(GEOETARoute *)arg1 ;
-(MNRouteCoordinate *)startValidCoordinateRange;
-(void)setStartValidCoordinateRange:(MNRouteCoordinate *)arg1 ;
-(MNRouteCoordinate *)endValidCoordinateRange;
-(void)setEndValidCoordinateRange:(MNRouteCoordinate *)arg1 ;
-(MNRouteCoordinate *)incidentCoordinate;
-(void)setIncidentCoordinate:(MNRouteCoordinate *)arg1 ;
-(double)alertTimestamp;
-(double)etaTimestamp;
-(double)distanceToIncident;
-(BOOL)isAutomaticReroute;
@end

