/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:02 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, _INPBIntentMetadata;

@interface _INPBSetDefrosterSettingsInCarIntent : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	int _defroster;
	_INPBIntentMetadata* _intentMetadata;
	BOOL _enable;
	SCD_Struct_IN3 _has;

}

@property (nonatomic,readonly) BOOL hasIntentMetadata; 
@property (nonatomic,retain) _INPBIntentMetadata * intentMetadata;              //@synthesize intentMetadata=_intentMetadata - In the implementation block
@property (assign,nonatomic) BOOL hasEnable; 
@property (assign,nonatomic) BOOL enable;                                       //@synthesize enable=_enable - In the implementation block
@property (assign,nonatomic) BOOL hasDefroster; 
@property (assign,nonatomic) int defroster;                                     //@synthesize defroster=_defroster - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(id)options;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)enable;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)setEnable:(BOOL)arg1 ;
-(_INPBIntentMetadata *)intentMetadata;
-(void)setIntentMetadata:(_INPBIntentMetadata *)arg1 ;
-(BOOL)hasIntentMetadata;
-(void)setHasEnable:(BOOL)arg1 ;
-(BOOL)hasEnable;
-(int)defroster;
-(void)setDefroster:(int)arg1 ;
-(void)setHasDefroster:(BOOL)arg1 ;
-(BOOL)hasDefroster;
@end

