/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:01 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData;

@interface NTPBChannelMuteUnmute : PBCodable <NSCopying> {

	NSString* _articleId;
	NSData* _articleSessionId;
	NSString* _articleSessionIdDeprecated;
	NSData* _articleViewingSessionId;
	NSString* _articleViewingSessionIdDeprecated;
	NSString* _channelMuteUnmuteFeedId;
	int _feedType;
	NSData* _feedViewExposureId;
	NSString* _feedViewExposureIdDeprecated;
	int _muteUnmuteLocation;
	NSString* _referencedArticleId;
	NSString* _sourceChannelId;
	int _userAction;
	BOOL _isUserSubscribedToFeed;
	SCD_Struct_NT1 _has;

}

@property (assign,nonatomic) BOOL hasUserAction; 
@property (assign,nonatomic) int userAction;                                            //@synthesize userAction=_userAction - In the implementation block
@property (assign,nonatomic) BOOL hasMuteUnmuteLocation; 
@property (assign,nonatomic) int muteUnmuteLocation;                                    //@synthesize muteUnmuteLocation=_muteUnmuteLocation - In the implementation block
@property (nonatomic,readonly) BOOL hasArticleId; 
@property (nonatomic,retain) NSString * articleId;                                      //@synthesize articleId=_articleId - In the implementation block
@property (nonatomic,readonly) BOOL hasReferencedArticleId; 
@property (nonatomic,retain) NSString * referencedArticleId;                            //@synthesize referencedArticleId=_referencedArticleId - In the implementation block
@property (nonatomic,readonly) BOOL hasArticleSessionIdDeprecated; 
@property (nonatomic,retain) NSString * articleSessionIdDeprecated;                     //@synthesize articleSessionIdDeprecated=_articleSessionIdDeprecated - In the implementation block
@property (nonatomic,readonly) BOOL hasArticleViewingSessionIdDeprecated; 
@property (nonatomic,retain) NSString * articleViewingSessionIdDeprecated;              //@synthesize articleViewingSessionIdDeprecated=_articleViewingSessionIdDeprecated - In the implementation block
@property (nonatomic,readonly) BOOL hasSourceChannelId; 
@property (nonatomic,retain) NSString * sourceChannelId;                                //@synthesize sourceChannelId=_sourceChannelId - In the implementation block
@property (assign,nonatomic) BOOL hasFeedType; 
@property (assign,nonatomic) int feedType;                                              //@synthesize feedType=_feedType - In the implementation block
@property (nonatomic,readonly) BOOL hasChannelMuteUnmuteFeedId; 
@property (nonatomic,retain) NSString * channelMuteUnmuteFeedId;                        //@synthesize channelMuteUnmuteFeedId=_channelMuteUnmuteFeedId - In the implementation block
@property (nonatomic,readonly) BOOL hasFeedViewExposureIdDeprecated; 
@property (nonatomic,retain) NSString * feedViewExposureIdDeprecated;                   //@synthesize feedViewExposureIdDeprecated=_feedViewExposureIdDeprecated - In the implementation block
@property (assign,nonatomic) BOOL hasIsUserSubscribedToFeed; 
@property (assign,nonatomic) BOOL isUserSubscribedToFeed;                               //@synthesize isUserSubscribedToFeed=_isUserSubscribedToFeed - In the implementation block
@property (nonatomic,readonly) BOOL hasArticleSessionId; 
@property (nonatomic,retain) NSData * articleSessionId;                                 //@synthesize articleSessionId=_articleSessionId - In the implementation block
@property (nonatomic,readonly) BOOL hasArticleViewingSessionId; 
@property (nonatomic,retain) NSData * articleViewingSessionId;                          //@synthesize articleViewingSessionId=_articleViewingSessionId - In the implementation block
@property (nonatomic,readonly) BOOL hasFeedViewExposureId; 
@property (nonatomic,retain) NSData * feedViewExposureId;                               //@synthesize feedViewExposureId=_feedViewExposureId - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(int)feedType;
-(void)setFeedType:(int)arg1 ;
-(void)setReferencedArticleId:(NSString *)arg1 ;
-(NSString *)articleId;
-(void)setArticleId:(NSString *)arg1 ;
-(NSString *)referencedArticleId;
-(void)setArticleSessionIdDeprecated:(NSString *)arg1 ;
-(void)setArticleViewingSessionIdDeprecated:(NSString *)arg1 ;
-(void)setSourceChannelId:(NSString *)arg1 ;
-(void)setChannelMuteUnmuteFeedId:(NSString *)arg1 ;
-(void)setFeedViewExposureIdDeprecated:(NSString *)arg1 ;
-(void)setArticleSessionId:(NSData *)arg1 ;
-(void)setArticleViewingSessionId:(NSData *)arg1 ;
-(void)setFeedViewExposureId:(NSData *)arg1 ;
-(int)userAction;
-(void)setUserAction:(int)arg1 ;
-(void)setHasUserAction:(BOOL)arg1 ;
-(BOOL)hasUserAction;
-(int)muteUnmuteLocation;
-(void)setMuteUnmuteLocation:(int)arg1 ;
-(void)setHasMuteUnmuteLocation:(BOOL)arg1 ;
-(BOOL)hasMuteUnmuteLocation;
-(BOOL)hasArticleId;
-(BOOL)hasReferencedArticleId;
-(BOOL)hasArticleSessionIdDeprecated;
-(BOOL)hasArticleViewingSessionIdDeprecated;
-(BOOL)hasSourceChannelId;
-(void)setHasFeedType:(BOOL)arg1 ;
-(BOOL)hasFeedType;
-(id)feedTypeAsString:(int)arg1 ;
-(int)StringAsFeedType:(id)arg1 ;
-(BOOL)hasChannelMuteUnmuteFeedId;
-(BOOL)hasFeedViewExposureIdDeprecated;
-(void)setIsUserSubscribedToFeed:(BOOL)arg1 ;
-(void)setHasIsUserSubscribedToFeed:(BOOL)arg1 ;
-(BOOL)hasIsUserSubscribedToFeed;
-(BOOL)hasArticleSessionId;
-(BOOL)hasArticleViewingSessionId;
-(BOOL)hasFeedViewExposureId;
-(NSString *)articleSessionIdDeprecated;
-(NSString *)articleViewingSessionIdDeprecated;
-(NSString *)sourceChannelId;
-(NSString *)channelMuteUnmuteFeedId;
-(NSString *)feedViewExposureIdDeprecated;
-(BOOL)isUserSubscribedToFeed;
-(NSData *)articleSessionId;
-(NSData *)articleViewingSessionId;
-(NSData *)feedViewExposureId;
@end
