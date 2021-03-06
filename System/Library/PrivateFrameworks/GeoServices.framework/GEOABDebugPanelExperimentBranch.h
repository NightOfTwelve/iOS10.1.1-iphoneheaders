/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:24 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, NSString;

@interface GEOABDebugPanelExperimentBranch : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	NSString* _branchLabel;
	NSString* _branchName;
	NSString* _experimentId;
	NSString* _experimentName;

}

@property (nonatomic,readonly) BOOL hasExperimentId; 
@property (nonatomic,retain) NSString * experimentId;                        //@synthesize experimentId=_experimentId - In the implementation block
@property (nonatomic,readonly) BOOL hasExperimentName; 
@property (nonatomic,retain) NSString * experimentName;                      //@synthesize experimentName=_experimentName - In the implementation block
@property (nonatomic,readonly) BOOL hasBranchLabel; 
@property (nonatomic,retain) NSString * branchLabel;                         //@synthesize branchLabel=_branchLabel - In the implementation block
@property (nonatomic,readonly) BOOL hasBranchName; 
@property (nonatomic,retain) NSString * branchName;                          //@synthesize branchName=_branchName - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
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
-(PBUnknownFields *)unknownFields;
-(BOOL)hasExperimentId;
-(BOOL)hasExperimentName;
-(BOOL)hasBranchLabel;
-(BOOL)hasBranchName;
-(NSString *)experimentId;
-(void)setExperimentId:(NSString *)arg1 ;
-(NSString *)experimentName;
-(void)setExperimentName:(NSString *)arg1 ;
-(NSString *)branchLabel;
-(void)setBranchLabel:(NSString *)arg1 ;
-(NSString *)branchName;
-(void)setBranchName:(NSString *)arg1 ;
@end

