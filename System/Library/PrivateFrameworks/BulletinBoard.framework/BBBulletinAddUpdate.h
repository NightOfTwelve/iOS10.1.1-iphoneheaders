/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:30 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BulletinBoard/BBBulletinUpdate.h>

@interface BBBulletinAddUpdate : BBBulletinUpdate {

	BOOL _shouldPlayLightsAndSirens;

}

@property (nonatomic,readonly) BOOL shouldPlayLightsAndSirens;              //@synthesize shouldPlayLightsAndSirens=_shouldPlayLightsAndSirens - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)updateWithBulletin:(id)arg1 feeds:(unsigned long long)arg2 shouldPlayLightsAndSirens:(BOOL)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)typeDescription;
-(BOOL)shouldPlayLightsAndSirens;
-(id)initWithBulletin:(id)arg1 feeds:(unsigned long long)arg2 shouldPlayLightsAndSirens:(BOOL)arg3 ;
@end
