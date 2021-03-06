/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:22 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEOAutomobileOptions, GEOTransitOptions, GEOWalkingOptions;

@interface GEOPDETAFilter : PBCodable <NSCopying> {

	SCD_Struct_GE1* _transportTypes;
	GEOAutomobileOptions* _automobileOptions;
	GEOTransitOptions* _transitOptions;
	GEOWalkingOptions* _walkingOptions;
	BOOL _includeHistoricTravelTime;
	SCD_Struct_GE15 _has;

}

@property (nonatomic,readonly) unsigned long long transportTypesCount; 
@property (nonatomic,readonly) int* transportTypes; 
@property (assign,nonatomic) BOOL hasIncludeHistoricTravelTime; 
@property (assign,nonatomic) BOOL includeHistoricTravelTime;                        //@synthesize includeHistoricTravelTime=_includeHistoricTravelTime - In the implementation block
@property (nonatomic,readonly) BOOL hasAutomobileOptions; 
@property (nonatomic,retain) GEOAutomobileOptions * automobileOptions;              //@synthesize automobileOptions=_automobileOptions - In the implementation block
@property (nonatomic,readonly) BOOL hasTransitOptions; 
@property (nonatomic,retain) GEOTransitOptions * transitOptions;                    //@synthesize transitOptions=_transitOptions - In the implementation block
@property (nonatomic,readonly) BOOL hasWalkingOptions; 
@property (nonatomic,retain) GEOWalkingOptions * walkingOptions;                    //@synthesize walkingOptions=_walkingOptions - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setIncludeHistoricTravelTime:(BOOL)arg1 ;
-(void)setHasIncludeHistoricTravelTime:(BOOL)arg1 ;
-(BOOL)hasIncludeHistoricTravelTime;
-(BOOL)hasAutomobileOptions;
-(BOOL)hasTransitOptions;
-(BOOL)hasWalkingOptions;
-(BOOL)includeHistoricTravelTime;
-(GEOAutomobileOptions *)automobileOptions;
-(void)setAutomobileOptions:(GEOAutomobileOptions *)arg1 ;
-(GEOTransitOptions *)transitOptions;
-(void)setTransitOptions:(GEOTransitOptions *)arg1 ;
-(GEOWalkingOptions *)walkingOptions;
-(void)setWalkingOptions:(GEOWalkingOptions *)arg1 ;
-(unsigned long long)transportTypesCount;
-(int*)transportTypes;
-(void)clearTransportTypes;
-(void)addTransportType:(int)arg1 ;
-(int)transportTypeAtIndex:(unsigned long long)arg1 ;
-(void)setTransportTypes:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)transportTypesAsString:(int)arg1 ;
-(int)StringAsTransportTypes:(id)arg1 ;
@end

