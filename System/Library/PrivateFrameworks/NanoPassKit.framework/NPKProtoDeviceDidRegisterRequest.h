/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:44 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoPassKit/NanoPassKit-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString;

@interface NPKProtoDeviceDidRegisterRequest : PBRequest <NSCopying> {

	NSMutableArray* _brokerRegionPushTopics;
	NSString* _primaryRegionTopic;
	NSMutableArray* _tsmRegionPushTopics;
	NSMutableArray* _tsmRegionURLs;

}

@property (nonatomic,retain) NSMutableArray * tsmRegionPushTopics;                 //@synthesize tsmRegionPushTopics=_tsmRegionPushTopics - In the implementation block
@property (nonatomic,retain) NSMutableArray * tsmRegionURLs;                       //@synthesize tsmRegionURLs=_tsmRegionURLs - In the implementation block
@property (nonatomic,retain) NSMutableArray * brokerRegionPushTopics;              //@synthesize brokerRegionPushTopics=_brokerRegionPushTopics - In the implementation block
@property (nonatomic,readonly) BOOL hasPrimaryRegionTopic; 
@property (nonatomic,retain) NSString * primaryRegionTopic;                        //@synthesize primaryRegionTopic=_primaryRegionTopic - In the implementation block
+(Class)tsmRegionPushTopicsType;
+(Class)tsmRegionURLsType;
+(Class)brokerRegionPushTopicsType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(NSString *)primaryRegionTopic;
-(void)addTsmRegionPushTopics:(id)arg1 ;
-(void)addTsmRegionURLs:(id)arg1 ;
-(void)addBrokerRegionPushTopics:(id)arg1 ;
-(unsigned long long)tsmRegionPushTopicsCount;
-(void)clearTsmRegionPushTopics;
-(id)tsmRegionPushTopicsAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)tsmRegionURLsCount;
-(void)clearTsmRegionURLs;
-(id)tsmRegionURLsAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)brokerRegionPushTopicsCount;
-(void)clearBrokerRegionPushTopics;
-(id)brokerRegionPushTopicsAtIndex:(unsigned long long)arg1 ;
-(void)setPrimaryRegionTopic:(NSString *)arg1 ;
-(BOOL)hasPrimaryRegionTopic;
-(NSMutableArray *)tsmRegionPushTopics;
-(void)setTsmRegionPushTopics:(NSMutableArray *)arg1 ;
-(NSMutableArray *)tsmRegionURLs;
-(void)setTsmRegionURLs:(NSMutableArray *)arg1 ;
-(NSMutableArray *)brokerRegionPushTopics;
-(void)setBrokerRegionPushTopics:(NSMutableArray *)arg1 ;
@end

