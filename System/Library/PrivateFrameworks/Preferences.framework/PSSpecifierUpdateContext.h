/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:55 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/Preferences-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary;

@interface PSSpecifierUpdateContext : NSObject <NSCopying> {

	BOOL _animated;
	BOOL _updateModelOnly;
	NSDictionary* _userInfo;

}

@property (assign,nonatomic) BOOL animated;                      //@synthesize animated=_animated - In the implementation block
@property (assign,nonatomic) BOOL updateModelOnly;               //@synthesize updateModelOnly=_updateModelOnly - In the implementation block
@property (nonatomic,copy) NSDictionary * userInfo;              //@synthesize userInfo=_userInfo - In the implementation block
+(id)context;
+(id)contextWithUserInfo:(id)arg1 ;
-(id)description;
-(NSDictionary *)userInfo;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)animated;
-(void)setAnimated:(BOOL)arg1 ;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(BOOL)updateModelOnly;
-(void)setUpdateModelOnly:(BOOL)arg1 ;
@end
