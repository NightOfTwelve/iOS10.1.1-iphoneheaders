/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:00 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/NewsCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FCCKPRequestOperationHeader, FCCKPQueryRetrieveRequest, FCCKPRecordRetrieveRequest, FCCKPOperation;

@interface FCCKPRequestOperation : PBCodable <NSCopying> {

	FCCKPRequestOperationHeader* _header;
	FCCKPQueryRetrieveRequest* _queryRetrieveRequest;
	FCCKPRecordRetrieveRequest* _recordRetrieveRequest;
	FCCKPOperation* _request;

}

@property (nonatomic,readonly) BOOL hasRecordRetrieveRequest; 
@property (nonatomic,retain) FCCKPRecordRetrieveRequest * recordRetrieveRequest; 
@property (nonatomic,readonly) BOOL hasQueryRetrieveRequest; 
@property (nonatomic,retain) FCCKPQueryRetrieveRequest * queryRetrieveRequest; 
@property (nonatomic,readonly) BOOL hasHeader; 
@property (nonatomic,retain) FCCKPRequestOperationHeader * header;                            //@synthesize header=_header - In the implementation block
@property (nonatomic,readonly) BOOL hasRequest; 
@property (nonatomic,retain) FCCKPOperation * request;                                        //@synthesize request=_request - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(FCCKPOperation *)request;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasRequest;
-(void)setRequest:(FCCKPOperation *)arg1 ;
-(BOOL)hasHeader;
-(FCCKPRequestOperationHeader *)header;
-(void)setHeader:(FCCKPRequestOperationHeader *)arg1 ;
-(void)setQueryRetrieveRequest:(FCCKPQueryRetrieveRequest *)arg1 ;
-(FCCKPQueryRetrieveRequest *)queryRetrieveRequest;
-(void)setRecordRetrieveRequest:(FCCKPRecordRetrieveRequest *)arg1 ;
-(BOOL)hasRecordRetrieveRequest;
-(FCCKPRecordRetrieveRequest *)recordRetrieveRequest;
-(BOOL)hasQueryRetrieveRequest;
@end

