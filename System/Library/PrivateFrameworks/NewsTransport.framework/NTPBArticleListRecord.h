/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:02 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NTPBRecordBase;

@interface NTPBArticleListRecord : PBCodable <NSCopying> {

	NSMutableArray* _articleIds;
	NTPBRecordBase* _base;

}

@property (nonatomic,readonly) BOOL hasBase; 
@property (nonatomic,retain) NTPBRecordBase * base;                    //@synthesize base=_base - In the implementation block
@property (nonatomic,retain) NSMutableArray * articleIds;              //@synthesize articleIds=_articleIds - In the implementation block
+(Class)articleIdsType;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(NTPBRecordBase *)base;
-(void)setBase:(NTPBRecordBase *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setArticleIds:(NSMutableArray *)arg1 ;
-(NSMutableArray *)articleIds;
-(BOOL)hasBase;
-(void)addArticleIds:(id)arg1 ;
-(void)clearArticleIds;
-(unsigned long long)articleIdsCount;
-(id)articleIdsAtIndex:(unsigned long long)arg1 ;
@end

