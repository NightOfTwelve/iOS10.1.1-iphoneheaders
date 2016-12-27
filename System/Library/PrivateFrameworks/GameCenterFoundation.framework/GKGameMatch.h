/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:07 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class GKRecentMatchInternal, GKGame, GKPlayer, NSDate;

@interface GKGameMatch : NSObject {

	GKRecentMatchInternal* _internal;
	GKGame* _game;
	GKPlayer* _player;

}

@property (retain) GKRecentMatchInternal * internal;              //@synthesize internal=_internal - In the implementation block
@property (nonatomic,retain) GKPlayer * player;                   //@synthesize player=_player - In the implementation block
@property (nonatomic,retain) GKGame * game;                       //@synthesize game=_game - In the implementation block
@property (nonatomic,retain) NSDate * date; 
+(BOOL)instancesRespondToSelector:(SEL)arg1 ;
+(id)instanceMethodSignatureForSelector:(SEL)arg1 ;
-(id)init;
-(void)dealloc;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(id)valueForUndefinedKey:(id)arg1 ;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
-(GKPlayer *)player;
-(void)setPlayer:(GKPlayer *)arg1 ;
-(void)setInternal:(GKRecentMatchInternal *)arg1 ;
-(id)initWithInternalRepresentation:(id)arg1 game:(id)arg2 ;
-(void)setGame:(GKGame *)arg1 ;
-(GKGame *)game;
-(GKRecentMatchInternal *)internal;
@end
