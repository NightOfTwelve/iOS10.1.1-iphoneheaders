/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:11 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BaseBoard/BSAction.h>

@class NSString;

@interface UIHandleBackgroundURLSessionAction : BSAction

@property (nonatomic,copy,readonly) NSString * sessionIdentifier; 
-(long long)UIActionType;
-(NSString *)sessionIdentifier;
-(id)initWithInfo:(id)arg1 timeout:(double)arg2 forResponseOnQueue:(id)arg3 withHandler:(/*^block*/id)arg4 ;
-(id)keyDescriptionForSetting:(unsigned long long)arg1 ;
-(id)initWithSessionIdentifier:(id)arg1 timeout:(double)arg2 forResponseOnQueue:(id)arg3 withHandler:(/*^block*/id)arg4 ;
-(id)initWithSessionIdentifier:(id)arg1 ;
@end

